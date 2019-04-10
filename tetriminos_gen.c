/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetriminos_gen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbradama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 13:35:32 by lbradama          #+#    #+#             */
/*   Updated: 2018/12/06 12:52:30 by lbradama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
// #include <libgen.h>
// #include <string.h>
// #include <sys/stat.h>
// #include <sys/types.h>

#include <sys/stat.h>
#include <stdlib.h>
#include <libc.h>
#include <errno.h>
#include <time.h>

char *ft_strjoin(char const *s1, char const *s2);
int get_len(unsigned n);
void set_values(char *s, unsigned n, int *p, int end);
char *ft_itoa(int n);
char **generate(int y, int x, int figure, int position);
char **generate_bad(void);

int main(int argc, char **argv)
{
	struct stat statBuf;
	int fd;
	char ***ter_arr;
	char **ter;
	ter_arr = (char ***)malloc(sizeof(char **) * 4);
	ter = (char **)malloc(sizeof(char *) * 4);
	int str_size = 1024 * 10;
	char *str = (char *)malloc(sizeof(char) * 1024);

	srand(time(NULL));
	if (stat("tests", &statBuf))
	 	mkdir("tests", 0xFFF);
	if (argc == 1)
	{
		fd = open("tests/help", O_WRONLY | O_CREAT | O_TRUNC, 0666);
		memset(str, 0, str_size);
		for (int i = 0; i < 7; i++)
		{
			ter_arr[0] = generate(0, 0, i, 0);
			ter_arr[1] = generate(0, 0, i, 1);
			ter_arr[2] = generate(0, 0, i, 2);
			ter_arr[3] = generate(0, 0, i, 3);
			int lim = i == 0 ? 1 : (i < 4) ? 2 : 4;
			for (int j = 0; j < 4; j++)
			{
				for (int k = 0; k < lim; k++)
				{
					strcat(str, ter_arr[k][j]);
					strcat(str, "\t");
				}
				strcat(str, "\n");
			}
			if (i != 6)
				strcat(str, "\n");
		}
		write(fd, str, strlen(str));
		close(fd);
		for (int q = 1; q <= 26; q++)
		{
			fd = open(ft_strjoin("tests/", ft_itoa(q)), O_WRONLY | O_CREAT | O_TRUNC, 0666);
			memset(str, 0, str_size);
			for (int i = 0; i < q; i++)
			{
				ter = generate(rand() % 10, rand() % 10, rand() % 10, rand() % 10);
				for (int k = 0; k < 4; k++)
				{
					strcat(str, ter[k]);
					strcat(str, "\n");
				}
				if (i != q - 1)
					strcat(str, "\n");
			}
			write(fd, str, strlen(str));
			close(fd);
		}
	}
	else
	{
		if (argc == 2 && !strcmp(argv[1], "bad"))
		{
			if (stat("randtests", &statBuf))
				mkdir("randtests", 0xFFF);
			for (int q = 1; q <= 26; q++)
			{
				fd = open(ft_strjoin("randtests/", ft_itoa(q)), O_WRONLY | O_CREAT | O_TRUNC, 0666);
				memset(str, 0, str_size);
				for (int i = 0; i < q; i++)
				{
					ter = generate_bad();
					for (int k = 0; k < 4; k++)
					{
						strcat(str, ter[k]);
						strcat(str, "\n");
					}
					if (i != q - 1)
						strcat(str, "\n");
				}
				write(fd, str, strlen(str));
				close(fd);
			}
		}
		if (argc == 3 && !strcmp(argv[1], "bad"))
		{
			if (stat("randtests", &statBuf))
				mkdir("randtests", 0xFFF);
			int size = atoi(argv[2]);
			for (int q = 1; q <= 26; q++)
			{
				fd = open(ft_strjoin("randtests/", ft_itoa(q)), O_WRONLY | O_CREAT | O_TRUNC, 0666);
				memset(str, 0, str_size);
				for (int i = 0; i < size; i++)
				{
					ter = generate_bad();
					for (int k = 0; k < 4; k++)
					{
						strcat(str, ter[k]);
						strcat(str, "\n");
					}
					if (i != size - 1)
						strcat(str, "\n");
				}
				write(fd, str, strlen(str));
				close(fd);
			}
		}
		if (argc == 3 && !strcmp(argv[1], "size"))
		{
			int size = atoi(argv[2]);
			fd = open(ft_strjoin("tests/", ft_itoa(size)), O_WRONLY | O_CREAT | O_TRUNC, 0666);
			for (size_t i = 0; i < size; i++)
			{
				memset(str, 0, str_size);
				ter = generate(rand() % 10, rand() % 10, rand() % 10, rand() % 10);
				for (int k = 0; k < 4; k++)
				{
					strcat(str, ter[k]);
					strcat(str, "\n");
				}
				if (i != size - 1)
					strcat(str, "\n");
				write(fd, str, strlen(str));
			}
			close(fd);
		}
		if (argc == 3 && !strcmp(argv[1], "ensize"))
		{
			int size = atoi(argv[2]);
			fd = open(ft_strjoin("tests/", ft_itoa(size)), O_WRONLY | O_CREAT | O_TRUNC, 0666);
			for (size_t i = 0; i < size; i++)
			{
				memset(str, 0, str_size);
				ter = generate(rand() % 10, rand() % 10, rand() % 10, rand() % 10);
				for (int k = 0; k < 4; k++)
				{
					strcat(str, ter[k]);
				}
				if (i != size - 1)
				write(fd, str, strlen(str));
			}
			close(fd);
		}
	}
	return 0;
}

char *ft_strjoin(char const *s1, char const *s2)
{
	unsigned int i;
	unsigned int j;
	char *newstr;

	newstr = NULL;
	if (s1 && s2)
	{
		i = 0;
		while (s1[i] != '\0')
			i++;
		j = 0;
		while (s2[j] != '\0')
			j++;
		if ((newstr = (char *)malloc(sizeof(char) * (i + j + 1))))
		{
			i = -1;
			while ((newstr[++i] = *s1))
				s1++;
			i--;
			while ((newstr[++i] = *s2))
				s2++;
		}
	}
	return (newstr);
}

int get_len(unsigned n)
{
	if (n / 10 > 0)
		return (1 + get_len(n / 10));
	return (1);
}

void set_values(char *s, unsigned n, int *p, int end)
{
	if (n / 10 > 0)
		set_values(s, n / 10, p, 0);
	s[*p] = '0' + n % 10;
	*p = *p + 1;
	if (end)
		s[*p] = '\0';
}

char *ft_itoa(int n)
{
	char *str;
	int m;
	unsigned int num;

	m = 0;
	if (n < 0)
	{
		m = 1;
		num = -n;
	}
	else
		num = n;
	str = NULL;
	if ((str = (char *)malloc(sizeof(char) * (1 + m + get_len(num)))))
	{
		if (m)
			str[0] = '-';
		set_values(str, num, &m, 1);
	}
	return (str);
}

char **generate(int y, int x, int figure, int position)
{
	char **arr = (char **)malloc(sizeof(char *) * 5);
	for (int i = 0; i < 4; i++)
	{
		arr[i] = (char *)malloc(sizeof(char) * 5);
		memset(arr[i], '.', 4);
		arr[i][4] = '\0';
	}
	arr[4] = NULL;
	switch (figure % 7)
	{
	// ##
	// ##
	case 0:
	{
		x = x <= 2 ? x : x % 3;
		y = y <= 2 ? y : y % 3;
		arr[y][x] = '#';
		arr[y][x + 1] = '#';
		arr[y + 1][x] = '#';
		arr[y + 1][x + 1] = '#';
		break;
	}

	// #### #
	//      #
	//      #
	//      #
	case 1:
	{
		if (position % 2)
		{
			x = x <= 3 ? x : x % 4;
			y = 0;
			arr[y][x] = '#';
			arr[y + 1][x] = '#';
			arr[y + 2][x] = '#';
			arr[y + 3][x] = '#';
		}
		else
		{
			x = 0;
			y = y <= 3 ? y : y % 4;
			arr[y][x] = '#';
			arr[y][x + 1] = '#';
			arr[y][x + 2] = '#';
			arr[y][x + 3] = '#';
		}
		break;
	}

	//  ## #
	// ##  ##
	//      #
	case 2:
	{
		if (position % 2)
		{
			x = x <= 1 ? x : x % 2;
			y = y <= 2 ? y : y % 3;
			arr[y][x + 1] = '#';
			arr[y][x + 2] = '#';
			arr[y + 1][x] = '#';
			arr[y + 1][x + 1] = '#';
		}
		else
		{
			x = x <= 2 ? x : x % 3;
			y = y <= 1 ? y : y % 2;
			arr[y][x] = '#';
			arr[y + 1][x] = '#';
			arr[y + 1][x + 1] = '#';
			arr[y + 2][x + 1] = '#';
		}
		break;
	}

	// ##   #
	//  ## ##
	//     #
	case 3:
	{
		if (position % 2)
		{
			x = x <= 1 ? x : x % 2;
			y = y <= 2 ? y : y % 3;
			arr[y][x] = '#';
			arr[y][x + 1] = '#';
			arr[y + 1][x + 1] = '#';
			arr[y + 1][x + 2] = '#';
		}
		else
		{
			x = x <= 2 ? x : x % 3;
			y = y <= 1 ? y : y % 2;
			arr[y][x + 1] = '#';
			arr[y + 1][x] = '#';
			arr[y + 1][x + 1] = '#';
			arr[y + 2][x] = '#';
		}
		break;
	}

	//  #  #  ###  #
	// ### ##  #  ##
	//     #       #
	case 4:
	{
		if (position % 4 == 0)
		{
			x = x <= 1 ? x : x % 2;
			y = y <= 2 ? y : y % 3;
			arr[y][x + 1] = '#';
			arr[y + 1][x] = '#';
			arr[y + 1][x + 1] = '#';
			arr[y + 1][x + 2] = '#';
		}
		else if (position % 4 == 1)
		{
			x = x <= 2 ? x : x % 3;
			y = y <= 1 ? y : y % 2;
			arr[y][x] = '#';
			arr[y + 1][x] = '#';
			arr[y + 1][x + 1] = '#';
			arr[y + 2][x] = '#';
		}
		else if (position % 4 == 2)
		{
			x = x <= 1 ? x : x % 2;
			y = y <= 2 ? y : y % 3;
			arr[y][x] = '#';
			arr[y][x + 1] = '#';
			arr[y][x + 2] = '#';
			arr[y + 1][x + 1] = '#';
		}
		else if (position % 4 == 3)
		{
			x = x <= 2 ? x : x % 3;
			y = y <= 1 ? y : y % 2;
			arr[y][x + 1] = '#';
			arr[y + 1][x] = '#';
			arr[y + 1][x + 1] = '#';
			arr[y + 2][x + 1] = '#';
		}
		break;
	}

	// #   ## ###  #
	// ### #    #  #
	//     #      ##
	case 5:
	{
		if (position % 4 == 0)
		{
			x = x <= 1 ? x : x % 2;
			y = y <= 2 ? y : y % 3;
			arr[y][x] = '#';
			arr[y + 1][x] = '#';
			arr[y + 1][x + 1] = '#';
			arr[y + 1][x + 2] = '#';
		}
		else if (position % 4 == 1)
		{
			x = x <= 2 ? x : x % 3;
			y = y <= 1 ? y : y % 2;
			arr[y][x] = '#';
			arr[y][x + 1] = '#';
			arr[y + 1][x] = '#';
			arr[y + 2][x] = '#';
		}
		else if (position % 4 == 2)
		{
			x = x <= 1 ? x : x % 2;
			y = y <= 2 ? y : y % 3;
			arr[y][x] = '#';
			arr[y][x + 1] = '#';
			arr[y][x + 2] = '#';
			arr[y + 1][x + 2] = '#';
		}
		else if (position % 4 == 3)
		{
			x = x <= 2 ? x : x % 3;
			y = y <= 1 ? y : y % 2;
			arr[y][x + 1] = '#';
			arr[y + 1][x + 1] = '#';
			arr[y + 2][x] = '#';
			arr[y + 2][x + 1] = '#';
		}
		break;
	}

	//   # #  ### ##
	// ### #  #    #
	//     ##      #
	case 6:
	{
		if (position % 4 == 0)
		{
			x = x <= 1 ? x : x % 2;
			y = y <= 2 ? y : y % 3;
			arr[y][x + 2] = '#';
			arr[y + 1][x] = '#';
			arr[y + 1][x + 1] = '#';
			arr[y + 1][x + 2] = '#';
		}
		else if (position % 4 == 1)
		{
			x = x <= 2 ? x : x % 3;
			y = y <= 1 ? y : y % 2;
			arr[y][x] = '#';
			arr[y + 1][x] = '#';
			arr[y + 2][x] = '#';
			arr[y + 2][x + 1] = '#';
		}
		else if (position % 4 == 2)
		{
			x = x <= 1 ? x : x % 2;
			y = y <= 2 ? y : y % 3;
			arr[y][x] = '#';
			arr[y][x + 1] = '#';
			arr[y][x + 2] = '#';
			arr[y + 1][x] = '#';
		}
		else if (position % 4 == 3)
		{
			x = x <= 2 ? x : x % 3;
			y = y <= 1 ? y : y % 2;
			arr[y][x] = '#';
			arr[y][x + 1] = '#';
			arr[y + 1][x + 1] = '#';
			arr[y + 2][x + 1] = '#';
		}
		break;
	}
	}
	return arr;
}




char **generate_bad(void)
{
	char **arr = (char **)malloc(sizeof(char *) * 5);
	for (int i = 0; i < 4; i++)
	{
		arr[i] = (char *)malloc(sizeof(char) * 5);
		memset(arr[i], '.', 4);
		arr[i][4] = '\0';
	}
	arr[4] = NULL;

	int s = 0;

	for(size_t i = 0; i < 4; i++)
	{
		int x = rand() % 4;
		int y = rand() % 4;
		while (arr[y][x]=='#')
		{
			x = rand() % 4;
			y = rand() % 4;
		}
		arr[y][x] = '#';
	}
	return arr;
}