#include <ft_printf.h>
#include <locale.h>

// [flag][width][.prec][length][type]

void add_to_format(char *dest, char *src)
{
	unsigned int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
}

int len_j(char *format)
{
	int i = 0;
	while (format[i] != '\0')
		i++;
	return (i);
}

int main()
{
    setlocale(LC_ALL, "");
	int d[] = {0, -2147483648, 2147483647, -1, 1, 10, -10, 56754, -56754, 3147483648, 4147483648, 9223372036854775807LL};
	int lim_d = 9;
	char *format;
	int lim_w = 13;
	char *width[] = {"1", "10", "9", "11", "15", "5", "6", "4", "3", "25", "20", "19", "21"};
	int lim_p = 12;
	char *prec[] = {".", ".0", ".1", ".3", ".4",".5",".6",".10",".9",".11",".15",".20"};
	char *type[] = {"d", "hd", "hhd", "ld", "lld"};
	char *type_o[] = {"o", "hho", "llo", "ho", "lo"};
	char *type_x[] = {"x", "hhx", "llx", "hx", "lx"};
	char type_s[] = "s";
	char type_p[] = "p";
	int lim_s = 7;
    char *str[] = {"a", "H\t\ti", "HELLO EVERYBODY", "WOW", "Жизнь прекрасна", "მშვენიერი დილაა", NULL};
	char *type_u[] = {"u", "hhu", "llu", "hu", "lu"};
	char *type_bigd[] = {"D", "hhD", "llD", "hD", "lD"};
	char *type_sw[] = {"ls", "S"};
    wchar_t *wstr[] = {L"a", L"H\t\ti", L"HELLO EVERYBODY", L"WOW", L"Жизнь прекрасна", L"მშვენიერი დილაა", NULL};
    int lim_sw = 5;
	char minus = '-';
	char plus = '+';
	char space = ' ';
	char noll = '0';
	char oct = '#';
	int	i;
	int j;
	int w;
	int p;
	int t;
	int s;
	int u;
	int lim_t = 5;
	int	o;
	int x;
	int sw;
	int k;
	
	j = 0;

	for (t = 0; t < 5; t++)
	{
		for (i = 0; i < lim_d; i++)
		{
			format = ft_memalloc(50);
			format[j++] = '%';
			add_to_format(&format[j], type[t]);
			j += len_j(&format[j]);
			format[j] = '\n';
			printf("type: %s, i: %d\n",type[t], d[i]);
			fflush(stdout);
			ft_printf(format, d[i]);
			printf(format, d[i]);
			ft_strdel(&format);
			printf("\n\n");
			j = 0;
		}

		for (i = 0; i < lim_d; i++)
		{
			for (w = 0; w < lim_w; w++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				add_to_format(&format[j], width[w]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type: %s, i: %d, wid: %s\n", type[t], i, width[w]);
				fflush(stdout);
				ft_printf(format, d[i]);
				fflush(stdout);
				printf(format, d[i]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}	
		}

		for (i = 0; i < lim_d; i++)
		{
			for (p = 0; p < lim_p; p++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				add_to_format(&format[j], prec[p]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type: %s, i: %d, prec: %s\n",type[t], d[i], prec[p]);
				fflush(stdout);
				ft_printf(format, d[i]);
				fflush(stdout);
				printf(format, d[i]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}	
		}

		for (i = 0; i < lim_d; i++)
		{
			format = ft_memalloc(50);
			format[j++] = '%';
			format[j++] = minus;
			add_to_format(&format[j], type[t]);
			j += len_j(&format[j]);
			format[j] = '\n';
		 	printf("type: %s, i: %d, minus\n",type[t], d[i]);
			 fflush(stdout);
			ft_printf(format, d[i]);
		 	fflush(stdout);
			printf(format, d[i]);
		 	fflush(stdout);
			ft_strdel(&format);
			printf("\n\n");
			j = 0;
		}

		for (i = 0; i < lim_d; i++)
		{
			format = ft_memalloc(50);
			format[j++] = '%';
			format[j++] = plus;
			add_to_format(&format[j], type[t]);
			j += len_j(&format[j]);
			format[j] = '\n';
			printf("type: %s, i: %d, plus\n",type[t], d[i]);
			fflush(stdout);
			ft_printf(format, d[i]);
		 	fflush(stdout);
			printf(format, d[i]);
		 	fflush(stdout);
			ft_strdel(&format);
			printf("\n\n");
			j = 0;
		}

		for (i = 0; i < lim_d; i++)
		{
			format = ft_memalloc(50);
			format[j++] = '%';
			format[j++] = space;
			add_to_format(&format[j], type[t]);
			j += len_j(&format[j]);
			format[j] = '\n';
			printf("type: %s, i: %d, space\n",type[t], d[i]);
			fflush(stdout);
			ft_printf(format, d[i]);
			fflush(stdout);
			printf(format, d[i]);
			fflush(stdout);
			ft_strdel(&format);
			printf("\n\n");
			j = 0;
		}

		for (i = 0; i < lim_d; i++)
		{
			for (w = 0; w < lim_w; w++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = minus;
				add_to_format(&format[j], width[w]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type: %s, i: %d, wid: %s, minus\n",type[t], d[i],width[w]);
				fflush(stdout);
				ft_printf(format, d[i]);
				fflush(stdout);
				printf(format, d[i]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}	
		}

		for (i = 0; i < lim_d; i++)
		{
			for (w = 0; w < lim_w; w++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = plus;
				add_to_format(&format[j], width[w]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type: %s, i: %d, wid: %s, plus\n",type[t], d[i], width[w]);
				fflush(stdout);
				ft_printf(format, d[i]);
				fflush(stdout);
				printf(format, d[i]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}	
		}

		for (i = 0; i < lim_d; i++)
		{
			for (w = 0; w < lim_w; w++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = space;
				add_to_format(&format[j], width[w]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type: %s, i: %d, wid: %s, space\n",type[t], d[i], width[w]);
				fflush(stdout);
				ft_printf(format, d[i]);
				fflush(stdout);
				printf(format, d[i]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}	
		}

		for (i = 0; i < lim_d; i++)
		{
			for (w = 0; w < lim_w; w++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = noll;
				add_to_format(&format[j], width[w]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type: %s, i: %d, wid: %s, noll\n",type[t], d[i], width[w]);
				fflush(stdout);
				ft_printf(format, d[i]);
				fflush(stdout);
				printf(format, d[i]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}	
		}
		
		for (i = 0; i < lim_d; i++)
		{
			for (w = 0; w < lim_w; w++)
			{
				for (p = 0; p < lim_p; p++)
				{
					format = ft_memalloc(50);
					format[j++] = '%';
					add_to_format(&format[j], width[w]);
					j += len_j(&format[j]);
					add_to_format(&format[j], prec[p]);
					j += len_j(&format[j]);
					add_to_format(&format[j], type[t]);
					j += len_j(&format[j]);
					format[j] = '\n';
					printf("type: %s, i: %d, wid: %s, prec: %s\n",type[t], d[i], width[w],prec[p]);
					fflush(stdout);
					ft_printf(format, d[i]);
					fflush(stdout);
					printf(format, d[i]);
					fflush(stdout);
					ft_strdel(&format);
					printf("\n\n");
					j = 0;
				}	
			}	
		}
		for (i = 0; i < lim_d; i++)
		{
			format = ft_memalloc(50);
			format[j++] = '%';
			format[j++] = minus;
			format[j++] = space;
			add_to_format(&format[j], type[t]);
			j += len_j(&format[j]);
			format[j] = '\n';
		 	printf("type: %s, i: %d, minus, space\n",type[t], d[i]);
		 	fflush(stdout);
			ft_printf(format, d[i]);
		 	fflush(stdout);
			printf(format, d[i]);
		 	fflush(stdout);
			ft_strdel(&format);
			printf("\n\n");
			j = 0;
		}
		for (i = 0; i < lim_d; i++)
		{
			format = ft_memalloc(50);
			format[j++] = '%';
			format[j++] = minus;
			format[j++] = plus;
			add_to_format(&format[j], type[t]);
			j += len_j(&format[j]);
			format[j] = '\n';
		 	printf("type: %s, i: %d, minus, plus\n",type[t], d[i]);
		 	fflush(stdout);
			ft_printf(format, d[i]);
		 	fflush(stdout);
			printf(format, d[i]);
		 	fflush(stdout);
			ft_strdel(&format);
			printf("\n\n");
			j = 0;
		}
		for (i = 0; i < lim_d; i++)
		{
			format = ft_memalloc(50);
			format[j++] = '%';
			format[j++] = minus;
			format[j++] = noll;
			add_to_format(&format[j], type[t]);
			j += len_j(&format[j]);
			format[j] = '\n';
		 	printf("type: %s, i: %d, minus, noll\n",type[t], d[i]);
		 	fflush(stdout);
			ft_printf(format, d[i]);
		 	fflush(stdout);
			printf(format, d[i]);
		 	fflush(stdout);
			ft_strdel(&format);
			printf("\n\n");
			j = 0;
		}
		for (i = 0; i < lim_d; i++)
		{
			for (p = 0; p < lim_p; p++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = minus;
				add_to_format(&format[j], prec[p]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type: %s, i: %d, prec: %s, minus\n",type[t], d[i], prec[p]);
				fflush(stdout);
				ft_printf(format, d[i]);
				fflush(stdout);
				printf(format, d[i]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}	
		}

		for (i = 0; i < lim_d; i++)
		{
			format = ft_memalloc(50);
			format[j++] = '%';
			format[j++] = noll;
			format[j++] = plus;
			add_to_format(&format[j], type[t]);
			j += len_j(&format[j]);
			format[j] = '\n';
		 	printf("type: %s, i: %d, noll, plus\n",type[t], d[i]);
		 	fflush(stdout);
			ft_printf(format, d[i]);
		 	fflush(stdout);
			printf(format, d[i]);
		 	fflush(stdout);
			ft_strdel(&format);
			printf("\n\n");
			j = 0;
		}

		for (i = 0; i < lim_d; i++)
		{
			format = ft_memalloc(50);
			format[j++] = '%';
			format[j++] = noll;
			format[j++] = space;
			add_to_format(&format[j], type[t]);
			j += len_j(&format[j]);
			format[j] = '\n';
		 	printf("type: %s, i: %d, noll space\n",type[t], d[i]);
		 	fflush(stdout);
			ft_printf(format, d[i]);
		 	fflush(stdout);
			printf(format, d[i]);
		 	fflush(stdout);
			ft_strdel(&format);
			printf("\n\n");
			j = 0;
		}
		
		for (i = 0; i < lim_d; i++)
		{
			for (w = 0; w < lim_w; w++)
			{
				for (p = 0; p < lim_p; p++)
				{
					format = ft_memalloc(50);
					format[j++] = '%';
					format[j++] = minus;
					add_to_format(&format[j], width[w]);
					j += len_j(&format[j]);
					add_to_format(&format[j], prec[p]);
					j += len_j(&format[j]);
					add_to_format(&format[j], type[t]);
					j += len_j(&format[j]);
					format[j] = '\n';
					printf("type: %s, i: %d, wid: %s, prec: %s, minus\n",type[t], d[i], width[w], prec[p]);
					fflush(stdout);
					ft_printf(format, d[i]);
					fflush(stdout);
					printf(format, d[i]);
					fflush(stdout);
					ft_strdel(&format);
					printf("\n\n");
					j = 0;
				}	
			}	
		}

		for (i = 0; i < lim_d; i++)
		{
			for (w = 0; w < lim_w; w++)
			{
				for (p = 0; p < lim_p; p++)
				{
					format = ft_memalloc(50);
					format[j++] = '%';
					format[j++] = space;
					add_to_format(&format[j], width[w]);
					j += len_j(&format[j]);
					add_to_format(&format[j], prec[p]);
					j += len_j(&format[j]);
					add_to_format(&format[j], type[t]);
					j += len_j(&format[j]);
					format[j] = '\n';
					printf("type: %s, i: %d, wid: %s, prec: %s, space\n",type[t], d[i], width[w], prec[p]);
					fflush(stdout);
					ft_printf(format, d[i]);
					fflush(stdout);
					printf(format, d[i]);
					fflush(stdout);
					ft_strdel(&format);
					printf("\n\n");
					j = 0;
				}	
			}	
		}
		for (i = 0; i < lim_d; i++)
		{
			for (w = 0; w < lim_w; w++)
			{
				for (p = 0; p < lim_p; p++)
				{
					format = ft_memalloc(50);
					format[j++] = '%';
					format[j++] = plus;
					add_to_format(&format[j], width[w]);
					j += len_j(&format[j]);
					add_to_format(&format[j], prec[p]);
					j += len_j(&format[j]);
					add_to_format(&format[j], type[t]);
					j += len_j(&format[j]);
					format[j] = '\n';
					printf("type: %s, i: %d, wid: %s, prec: %s, plus\n",type[t], d[i], width[w], prec[p]);
					fflush(stdout);
					ft_printf(format, d[i]);
					fflush(stdout);
					printf(format, d[i]);
					fflush(stdout);
					ft_strdel(&format);
					printf("\n\n");
					j = 0;
				}	
			}	
		}
		for (i = 0; i < lim_d; i++)
		{
			for (w = 0; w < lim_w; w++)
			{
				for (p = 0; p < lim_p; p++)
				{
					format = ft_memalloc(50);
					format[j++] = '%';
					format[j++] = noll;
					add_to_format(&format[j], width[w]);
					j += len_j(&format[j]);
					add_to_format(&format[j], prec[p]);
					j += len_j(&format[j]);
					add_to_format(&format[j], type[t]);
					j += len_j(&format[j]);
					format[j] = '\n';
					printf("type: %s, i: %d, wid: %s, prec: %s, noll\n",type[t], d[i], width[w], prec[p]);
					fflush(stdout);
					ft_printf(format, d[i]);
					fflush(stdout);
					printf(format, d[i]);
					fflush(stdout);
					ft_strdel(&format);
					printf("\n\n");
					j = 0;
				}	
			}	
		}
		for (i = 0; i < lim_d; i++)
		{
			for (w = 0; w < lim_w; w++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = space;
				format[j++] = minus;
				add_to_format(&format[j], width[w]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type: %s, i: %d, wid: %s, space, minus\n",type[t], d[i], width[w]);
				fflush(stdout);
				ft_printf(format, d[i]);
				fflush(stdout);
				printf(format, d[i]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}	
		}
		for (i = 0; i < lim_d; i++)
		{
			for (w = 0; w < lim_w; w++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = space;
				format[j++] = plus;
				add_to_format(&format[j], width[w]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type: %s, i: %d, wid: %s, space, plus\n",type[t], d[i], width[w]);
				fflush(stdout);
				ft_printf(format, d[i]);
				fflush(stdout);
				printf(format, d[i]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}	
		}
		for (i = 0; i < lim_d; i++)
		{
			for (w = 0; w < lim_w; w++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = noll;
				format[j++] = plus;
				add_to_format(&format[j], width[w]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type: %s, i: %d, wid: %s, noll, plus\n",type[t], d[i], width[w]);
				fflush(stdout);
				ft_printf(format, d[i]);
				fflush(stdout);
				printf(format, d[i]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}	
		}
		for (i = 0; i < lim_d; i++)
		{
			for (w = 0; w < lim_w; w++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = noll;
				format[j++] = space;
				add_to_format(&format[j], width[w]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type: %s, i: %d, wid: %s, space, noll\n",type[t], d[i], width[w]);
				fflush(stdout);
				ft_printf(format, d[i]);
				fflush(stdout);
				printf(format, d[i]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}	
		}
		for (i = 0; i < lim_d; i++)
		{
			for (w = 0; w < lim_w; w++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = noll;
				format[j++] = minus;
				add_to_format(&format[j], width[w]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type: %s, i: %d, wid: %s, noll, minus\n",type[t], d[i], width[w]);
				fflush(stdout);
				ft_printf(format, d[i]);
				fflush(stdout);
				printf(format, d[i]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}	
		}
		for (i = 0; i < lim_d; i++)
		{
			format = ft_memalloc(50);
			format[j++] = '%';
			format[j++] = minus;
			format[j++] = space;
			format[j++] = noll;
			add_to_format(&format[j], type[t]);
			j += len_j(&format[j]);
			format[j] = '\n';
		 	printf("type: %s, i: %d, minus, space, noll\n",type[t], d[i]);
		 	fflush(stdout);
			ft_printf(format, d[i]);
		 	fflush(stdout);
			printf(format, d[i]);
		 	fflush(stdout);
			ft_strdel(&format);
			printf("\n\n");
			j = 0;
		}
		for (i = 0; i < lim_d; i++)
		{
			format = ft_memalloc(50);
			format[j++] = '%';
			format[j++] = minus;
			format[j++] = plus;
			format[j++] = noll;
			add_to_format(&format[j], type[t]);
			j += len_j(&format[j]);
			format[j] = '\n';
		 	printf("type: %s, i: %d, minus, plus, noll\n",type[t], d[i]);
		 	fflush(stdout);
			ft_printf(format, d[i]);
		 	fflush(stdout);
			printf(format, d[i]);
		 	fflush(stdout);
			ft_strdel(&format);
			printf("\n\n");
			j = 0;
		}
		for (i = 0; i < lim_d; i++)
		{
			for (p = 0; p < lim_p; p++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = minus;
				format[j++] = space;
				add_to_format(&format[j], prec[p]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type: %s, i: %d, prec: %s, minus, space\n",type[t], d[i], prec[p]);
				fflush(stdout);
				ft_printf(format, d[i]);
				fflush(stdout);
				printf(format, d[i]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}	
		}
		for (i = 0; i < lim_d; i++)
		{
			for (p = 0; p < lim_p; p++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = minus;
				format[j++] = plus;
				add_to_format(&format[j], prec[p]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type: %s, i: %d, prec: %s, minus, plus\n",type[t], d[i], prec[p]);
				fflush(stdout);
				ft_printf(format, d[i]);
				fflush(stdout);
				printf(format, d[i]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}	
		}
		for (i = 0; i < lim_d; i++)
		{
			for (p = 0; p < lim_p; p++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = minus;
				format[j++] = noll;
				add_to_format(&format[j], prec[p]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type: %s, i: %d, prec: %s, minus, noll\n",type[t], d[i], prec[p]);
				fflush(stdout);
				ft_printf(format, d[i]);
				fflush(stdout);
				printf(format, d[i]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}	
		}

		for (i = 0; i < lim_d; i++)
		{
			for (w = 0; w < lim_w; w++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = noll;
				format[j++] = minus;
				format[j++] = space;
				add_to_format(&format[j], width[w]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type: %s, i: %d, wid: %s, noll, minus, space\n",type[t], d[i], width[w]);
				fflush(stdout);
				ft_printf(format, d[i]);
				fflush(stdout);
				printf(format, d[i]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}	
		}
		for (i = 0; i < lim_d; i++)
		{
			for (w = 0; w < lim_w; w++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = noll;
				format[j++] = minus;
				format[j++] = plus;
				add_to_format(&format[j], width[w]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type: %s, i: %d, wid: %s, noll, minus, plus\n",type[t], d[i], width[w]);
				fflush(stdout);
				ft_printf(format, d[i]);
				fflush(stdout);
				printf(format, d[i]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}	
		}
		for (i = 0; i < lim_d; i++)
		{
			for (w = 0; w < lim_w; w++)
			{
				for (p = 0; p < lim_p; p++)
				{
					format = ft_memalloc(50);
					format[j++] = '%';
					format[j++] = minus;
					format[j++] = space;
					add_to_format(&format[j], width[w]);
					j += len_j(&format[j]);
					add_to_format(&format[j], prec[p]);
					j += len_j(&format[j]);
					add_to_format(&format[j], type[t]);
					j += len_j(&format[j]);
					format[j] = '\n';
					printf("type: %s, i: %d, wid: %s, prec: %s, minus, space\n",type[t], d[i], width[w], prec[p]);
					fflush(stdout);
					ft_printf(format, d[i]);
					fflush(stdout);
					printf(format, d[i]);
					fflush(stdout);
					ft_strdel(&format);
					printf("\n\n");
					j = 0;
				}	
			}	
		}
		for (i = 0; i < lim_d; i++)
		{
			for (w = 0; w < lim_w; w++)
			{
				for (p = 0; p < lim_p; p++)
				{
					format = ft_memalloc(50);
					format[j++] = '%';
					format[j++] = minus;
					format[j++] = plus;
					add_to_format(&format[j], width[w]);
					j += len_j(&format[j]);
					add_to_format(&format[j], prec[p]);
					j += len_j(&format[j]);
					add_to_format(&format[j], type[t]);
					j += len_j(&format[j]);
					format[j] = '\n';
					printf("type: %s, i: %d, wid: %s, prec: %s, minus, plus\n",type[t], d[i], width[w], prec[p]);
					fflush(stdout);
					ft_printf(format, d[i]);
					fflush(stdout);
					printf(format, d[i]);
					fflush(stdout);
					ft_strdel(&format);
					printf("\n\n");
					j = 0;
				}	
			}	
		}
		for (i = 0; i < lim_d; i++)
		{
			for (w = 0; w < lim_w; w++)
			{
				for (p = 0; p < lim_p; p++)
				{
					format = ft_memalloc(50);
					format[j++] = '%';
					format[j++] = minus;
					format[j++] = noll;
					add_to_format(&format[j], width[w]);
					j += len_j(&format[j]);
					add_to_format(&format[j], prec[p]);
					j += len_j(&format[j]);
					add_to_format(&format[j], type[t]);
					j += len_j(&format[j]);
					format[j] = '\n';
					printf("type: %s, i: %d, wid: %s, prec: %s, minus, noll\n",type[t], d[i], width[w], prec[p]);
					fflush(stdout);
					ft_printf(format, d[i]);
					fflush(stdout);
					printf(format, d[i]);
					fflush(stdout);
					ft_strdel(&format);
					printf("\n\n");
					j = 0;
				}	
			}	
		}

		for (i = 0; i < lim_d; i++)
		{
			for (p = 0; p < lim_p; p++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = minus;
				format[j++] = noll;
				format[j++] = space;
				add_to_format(&format[j], prec[p]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type: %s, i: %d, prec: %s, minus, noll, space\n",type[t], d[i], prec[p]);
				fflush(stdout);
				ft_printf(format, d[i]);
				fflush(stdout);
				printf(format, d[i]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}
		}
		for (i = 0; i < lim_d; i++)
		{
			for (p = 0; p < lim_p; p++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = minus;
				format[j++] = noll;
				format[j++] = plus;
				add_to_format(&format[j], prec[p]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type: %s, i: %d, prec: %s, minus, noll, plus\n",type[t], d[i], prec[p]);
				fflush(stdout);
				ft_printf(format, d[i]);
				fflush(stdout);
				printf(format, d[i]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}
		}	
		for (i = 0; i < lim_d; i++)
		{
			for (w = 0; w < lim_w; w++)
			{
				for (p = 0; p < lim_p; p++)
				{
					format = ft_memalloc(50);
					format[j++] = '%';
					format[j++] = plus;
					format[j++] = noll;
					add_to_format(&format[j], width[w]);
					j += len_j(&format[j]);
					add_to_format(&format[j], prec[p]);
					j += len_j(&format[j]);
					add_to_format(&format[j], type[t]);
					j += len_j(&format[j]);
					format[j] = '\n';
					printf("type: %s, i: %d, wid: %s, prec: %s, plus, noll\n",type[t], d[i], width[w], prec[p]);
					fflush(stdout);
					ft_printf(format, d[i]);
					fflush(stdout);
					printf(format, d[i]);
					fflush(stdout);
					ft_strdel(&format);
					printf("\n\n");
					j = 0;
				}	
			}	
		}
		for (i = 0; i < lim_d; i++)
		{
			for (w = 0; w < lim_w; w++)
			{
				for (p = 0; p < lim_p; p++)
				{
					format = ft_memalloc(50);
					format[j++] = '%';
					format[j++] = space;
					format[j++] = noll;
					add_to_format(&format[j], width[w]);
					j += len_j(&format[j]);
					add_to_format(&format[j], prec[p]);
					j += len_j(&format[j]);
					add_to_format(&format[j], type[t]);
					j += len_j(&format[j]);
					format[j] = '\n';
					printf("type: %s, i: %d, wid: %s, prec: %s, space, noll\n",type[t], d[i], width[w], prec[p]);
					fflush(stdout);
					ft_printf(format, d[i]);
					fflush(stdout);
					printf(format, d[i]);
					fflush(stdout);
					ft_strdel(&format);
					printf("\n\n");
					j = 0;
				}	
			}	
		}
	}
	j = 0;
	for (s = 0; s < lim_s; s++)
		{
			format = ft_memalloc(100);
			format[j++] = '%';
			add_to_format(&format[j], type_s);
			j += len_j(&format[j]);
			format[j] = '\n';
			printf("type: %s, s: %s\n",type_s, str[s]);
			fflush(stdout);
			ft_printf(format, str[s]);
			printf(format, str[s]);
			ft_strdel(&format);
			printf("\n\n");
			j = 0;
		}

	for (s = 0; s < lim_s; s++)
	{
		for (w = 0; w < lim_w; w++)
		{
			format = ft_memalloc(100);
			format[j++] = '%';
			add_to_format(&format[j], width[w]);
			j += len_j(&format[j]);
			add_to_format(&format[j], type_s);
			j += len_j(&format[j]);
			format[j] = '\n';
			printf("type: %s, s: %s, width %s\n",type_s, str[s], width[w]);
			fflush(stdout);
			ft_printf(format, str[s]);
			printf(format, str[s]);
			ft_strdel(&format);
			printf("\n\n");
			j = 0;
		}	
	}
	for (s = 0; s < lim_s; s++)
	{
		for (p = 0; p < lim_p; p++)
		{
			format = ft_memalloc(100);
			format[j++] = '%';
			add_to_format(&format[j], prec[p]);
			j += len_j(&format[j]);
			add_to_format(&format[j], type_s);
			j += len_j(&format[j]);
			format[j] = '\n';
			printf("type: %s, s: %s, prec %s\n",type_s, str[s], prec[p]);
			fflush(stdout);
			ft_printf(format, str[s]);
			printf(format, str[s]);
			ft_strdel(&format);
			printf("\n\n");
			j = 0;
		}	
	}
	for (s = 0; s < lim_s; s++)
	{
		format = ft_memalloc(100);
		format[j++] = '%';
		format[j++] = minus;
		add_to_format(&format[j], type_s);
		j += len_j(&format[j]);
		format[j] = '\n';
		printf("type: %s, s: %s minus\n",type_s, str[s]);
		fflush(stdout);
		ft_printf(format, str[s]);
		printf(format, str[s]);
		ft_strdel(&format);
		printf("\n\n");
		j = 0;
	}
	for (s = 0; s < lim_s; s++)
	{
		for (w = 0; w < lim_w; w++)
		{
			format = ft_memalloc(100);
			format[j++] = '%';
			format[j++] = minus;
			add_to_format(&format[j], width[w]);
			j += len_j(&format[j]);
			add_to_format(&format[j], type_s);
			j += len_j(&format[j]);
			format[j] = '\n';
			printf("type: %s, s: %s, width %s, minus\n",type_s, str[s], width[w]);
			fflush(stdout);
			ft_printf(format, str[s]);
			printf(format, str[s]);
			ft_strdel(&format);
			printf("\n\n");
			j = 0;
		}	
	}
	for (s = 0; s < lim_s; s++)
	{
		for (w = 0; w < lim_w; w++)
		{
			for (p = 0; p < lim_p; p++)
			{
				format = ft_memalloc(100);
				format[j++] = '%';
				add_to_format(&format[j], width[w]);
				j += len_j(&format[j]);
				add_to_format(&format[j], prec[p]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type_s);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type: %s, s: %s, width %s, prec: %s, minus\n",type_s, str[s], width[w], prec[p]);
				fflush(stdout);
				ft_printf(format, str[s]);
				printf(format, str[s]);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}	
		}	
	}
	for (s = 0; s < lim_s; s++)
	{
		for (p = 0; p < lim_p; p++)
		{
			format = ft_memalloc(100);
			format[j++] = '%';
			format[j++] = minus;
			add_to_format(&format[j], prec[p]);
			j += len_j(&format[j]);
			add_to_format(&format[j], type_s);
			j += len_j(&format[j]);
			format[j] = '\n';
			printf("type: %s, s: %s, prec %s, minus\n",type_s, str[s], prec[p]);
			fflush(stdout);
			ft_printf(format, str[s]);
			printf(format, str[s]);
			ft_strdel(&format);
			printf("\n\n");
			j = 0;
		}
	}
	for (s = 0; s < lim_s; s++)
	{
		for (w = 0; w < lim_w; w++)
		{
			for (p = 0; p < lim_p; p++)
			{
				format = ft_memalloc(100);
				format[j++] = '%';
				format[j++] = minus;
				add_to_format(&format[j], width[w]);
				j += len_j(&format[j]);
				add_to_format(&format[j], prec[p]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type_s);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type: %s, s: %s, width %s, prec: %s, minus\n",type_s, str[s], width[w], prec[p]);
				fflush(stdout);
				ft_printf(format, str[s]);
				printf(format, str[s]);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}	
		}	
	}
	for (s = 0; s < lim_s; s++)
		{
			format = ft_memalloc(100);
			format[j++] = '%';
			add_to_format(&format[j], type_p);
			j += len_j(&format[j]);
			format[j] = '\n';
			printf("type: %s, s: %s\n",type_s, str[s]);
			fflush(stdout);
			ft_printf(format, str[s]);
			printf(format, str[s]);
			ft_strdel(&format);
			printf("\n\n");
			j = 0;
		}

	for (s = 0; s < lim_s; s++)
	{
		for (w = 0; w < lim_w; w++)
		{
			format = ft_memalloc(100);
			format[j++] = '%';
			add_to_format(&format[j], width[w]);
			j += len_j(&format[j]);
			add_to_format(&format[j], type_p);
			j += len_j(&format[j]);
			format[j] = '\n';
			printf("type: %s, s: %s, width %s\n",type_s, str[s], width[w]);
			fflush(stdout);
			ft_printf(format, str[s]);
			printf(format, str[s]);
			ft_strdel(&format);
			printf("\n\n");
			j = 0;
		}	
	}
	for (s = 0; s < lim_s; s++)
	{
		format = ft_memalloc(100);
		format[j++] = '%';
		format[j++] = minus;
		add_to_format(&format[j], type_p);
		j += len_j(&format[j]);
		format[j] = '\n';
		printf("type: %s, s: %s minus\n",type_s, str[s]);
		fflush(stdout);
		ft_printf(format, str[s]);
		printf(format, str[s]);
		ft_strdel(&format);
		printf("\n\n");
		j = 0;
	}
	for (s = 0; s < lim_s; s++)
	{
		for (w = 0; w < lim_w; w++)
		{
			format = ft_memalloc(100);
			format[j++] = '%';
			format[j++] = minus;
			add_to_format(&format[j], width[w]);
			j += len_j(&format[j]);
			add_to_format(&format[j], type_p);
			j += len_j(&format[j]);
			format[j] = '\n';
			printf("type: %s, s: %s, width %s, minus\n",type_s, str[s], width[w]);
			fflush(stdout);
			ft_printf(format, str[s]);
			printf(format, str[s]);
			ft_strdel(&format);
			printf("\n\n");
			j = 0;
		}	
	}
		for (t = 0; t < lim_t; t++)
	{
		for (u = 0; u < lim_d; u++)
		{
			for (w = 0; w < lim_w; w++)
			{
				for (p = 0; p < lim_p; p++)
				{
					format = ft_memalloc(50);
					format[j++] = '%';
					format[j++] = minus;
					format[j++] = noll;
					add_to_format(&format[j], width[w]);
					j += len_j(&format[j]);
					add_to_format(&format[j], prec[p]);
					j += len_j(&format[j]);
					add_to_format(&format[j], type_u[t]);
					j += len_j(&format[j]);
					format[j] = '\n';
					printf("type_u: %s, u: %d, wid: %s, prec: %s, minus, noll\n", type_u[t], d[u], width[w], prec[p]);
					fflush(stdout);
					ft_printf(format, d[u]);
					fflush(stdout);
					printf(format, d[u]);
					fflush(stdout);
					ft_strdel(&format);
					printf("\n\n");
					j = 0;
				}
			}
		}

		for (u = 0; u < lim_d; u++)
		{
			format = ft_memalloc(50);
			format[j++] = '%';
			format[j++] = minus;
			format[j++] = noll;
			add_to_format(&format[j], type_u[t]);
			j += len_j(&format[j]);
			format[j] = '\n';
			printf("type_u: %s, u: %d, minus, noll\n", type_u[t], d[u]);
			fflush(stdout);
			ft_printf(format, d[u]);
			fflush(stdout);
			printf(format, d[u]);
			fflush(stdout);
			ft_strdel(&format);
			printf("\n\n");
			j = 0;

		}
		for (u = 0; u < lim_d; u++)
		{
			format = ft_memalloc(50);
			format[j++] = '%';
			format[j++] = minus;
			add_to_format(&format[j], type_u[t]);
			j += len_j(&format[j]);
			format[j] = '\n';
			printf("type_u: %s, i: %d, minus\n", type_u[t], d[u]);
			fflush(stdout);
			ft_printf(format, d[u]);
			fflush(stdout);
			printf(format, d[u]);
			fflush(stdout);
			ft_strdel(&format);
			printf("\n\n");
			j = 0;

		}
		for (u = 0; u < lim_d; u++)
		{
			format = ft_memalloc(50);
			format[j++] = '%';
			format[j++] = noll;
			add_to_format(&format[j], type_u[t]);
			j += len_j(&format[j]);
			format[j] = '\n';
			printf("type_u: %s, u: %d, noll\n", type_u[t], d[u]);
			fflush(stdout);
			ft_printf(format, d[u]);
			fflush(stdout);
			printf(format, d[u]);
			fflush(stdout);
			ft_strdel(&format);
			printf("\n\n");
			j = 0;
		}

		for (u = 0; u < lim_d; u++)
		{
			for (w = 0; w < lim_w; w++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				add_to_format(&format[j], width[w]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type_u[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type_u: %s, u: %d, wid: %s\n", type_u[t], d[u], width[w]);
				fflush(stdout);
				ft_printf(format, d[u]);
				fflush(stdout);
				printf(format, d[u]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}
		}
		for (u = 0; u < lim_d; u++)
		{
			for (p = 0; p < lim_p; p++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				add_to_format(&format[j], prec[p]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type_u[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type_u: %s, u: %d, prec: %s\n", type_u[t], d[u], prec[p]);
				fflush(stdout);
				ft_printf(format, d[u]);
				fflush(stdout);
				printf(format, d[u]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}
		}
		for (u = 0; u < lim_d; u++)
		{
			for (w = 0; w < lim_w; w++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = noll;
				add_to_format(&format[j], width[w]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type_u[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type_u: %s, u: %d, wid: %s, noll\n", type_u[t], d[u], width[w]);
				fflush(stdout);
				ft_printf(format, d[u]);
				fflush(stdout);
				printf(format, d[u]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}
		}
		for (u = 0; u < lim_d; u++)
		{
			for (p = 0; p < lim_p; p++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = noll;
				add_to_format(&format[j], prec[p]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type_u[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type_u: %s, u: %d, prec: %s, noll\n", type_u[t], d[u], prec[p]);
				fflush(stdout);
				ft_printf(format, d[u]);
				fflush(stdout);
				printf(format, d[u]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}
		}
			for (u = 0; u < lim_d; u++)
		{
			for (w = 0; w < lim_w; w++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = minus;
				add_to_format(&format[j], width[w]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type_u[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type_u: %s, u: %d, wid: %s, minus\n", type_u[t], d[u], width[w]);
				fflush(stdout);
				ft_printf(format, d[u]);
				fflush(stdout);
				printf(format, d[u]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}
		}
		for (u = 0; u < lim_d; u++)
		{
			for (p = 0; p < lim_p; p++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = minus;
				add_to_format(&format[j], prec[p]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type_u[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type_u: %s, u: %d, prec: %s, minus\n", type_u[t], d[u], prec[p]);
				fflush(stdout);
				ft_printf(format, d[u]);
				fflush(stdout);
				printf(format, d[u]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}
		}
		for (u = 0; u < lim_d; u++)
		{
			for (w = 0; w < lim_w; w++)
			{
				for (p = 0; p < lim_p; p++)
				{
					format = ft_memalloc(50);
					format[j++] = '%';
					add_to_format(&format[j], width[w]);
					j += len_j(&format[j]);
					add_to_format(&format[j], prec[p]);
					j += len_j(&format[j]);
					add_to_format(&format[j], type_u[t]);
					j += len_j(&format[j]);
					format[j] = '\n';
					printf("type_u: %s, u: %d, wid: %s, prec: %s\n", type_u[t], d[u], width[w], prec[p]);
					fflush(stdout);
					ft_printf(format, d[u]);
					fflush(stdout);
					printf(format, d[u]);
					fflush(stdout);
					ft_strdel(&format);
					printf("\n\n");
					j = 0;
				}
			}
		}
		for (u = 0; u < lim_d; u++)
		{
			for (w = 0; w < lim_w; w++)
			{
				for (p = 0; p < lim_p; p++)
				{
					format = ft_memalloc(50);
					format[j++] = '%';
					format[j++] = minus;
					add_to_format(&format[j], width[w]);
					j += len_j(&format[j]);
					add_to_format(&format[j], prec[p]);
					j += len_j(&format[j]);
					add_to_format(&format[j], type_u[t]);
					j += len_j(&format[j]);
					format[j] = '\n';
					printf("type_u: %s, u: %d, wid: %s, prec: %s, minus\n", type_u[t], d[u], width[w], prec[p]);
					fflush(stdout);
					ft_printf(format, d[u]);
					fflush(stdout);
					printf(format, d[u]);
					fflush(stdout);
					ft_strdel(&format);
					printf("\n\n");
					j = 0;
				}
			}
		}
		for (u = 0; u < lim_d; u++)
		{
			for (w = 0; w < lim_w; w++)
			{
				for (p = 0; p < lim_p; p++)
				{
					format = ft_memalloc(50);
					format[j++] = '%';
					format[j++] = noll;
					add_to_format(&format[j], width[w]);
					j += len_j(&format[j]);
					add_to_format(&format[j], prec[p]);
					j += len_j(&format[j]);
					add_to_format(&format[j], type_u[t]);
					j += len_j(&format[j]);
					format[j] = '\n';
					printf("type_u: %s, u: %d, wid: %s, prec: %s, noll\n", type_u[t], d[u], width[w], prec[p]);
					fflush(stdout);
					ft_printf(format, d[u]);
					fflush(stdout);
					printf(format, d[u]);
					fflush(stdout);
					ft_strdel(&format);
					printf("\n\n");
					j = 0;
				}
			}
		}
		for (u = 0; u < lim_d; u++)
		{
			for (p = 0; p < lim_p; p++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = minus;
				format[j++] = noll;
				add_to_format(&format[j], prec[p]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type_u[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type_u: %s, u: %d, prec: %s, minus, noll\n", type_u[t], d[u], prec[p]);
				fflush(stdout);
				ft_printf(format, d[u]);
				fflush(stdout);
				printf(format, d[u]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}
		}

		for (u = 0; u < lim_d; u++)
		{
			for (w = 0; w < lim_w; w++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = minus;
				format[j++] = noll;
				add_to_format(&format[j], width[w]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type_u[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type_u: %s, u: %d, wid: %s, minus, noll\n", type_u[t], d[u], width[w]);
				fflush(stdout);
				ft_printf(format, d[u]);
				fflush(stdout);
				printf(format, d[u]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}
		}
	}
	for (t = 0; t < lim_t; t++)
	{
		for (o = 0; o < lim_d; o++)
		{
			for (w = 0; w < lim_w; w++)
			{
				for (p = 0; p < lim_p; p++)
				{
					format = ft_memalloc(50);
					format[j++] = '%';
					format[j++] = minus;
					format[j++] = noll;
					format[j++] = oct;
					add_to_format(&format[j], width[w]);
					j += len_j(&format[j]);
					add_to_format(&format[j], prec[p]);
					j += len_j(&format[j]);
					add_to_format(&format[j], type_o[t]);
					j += len_j(&format[j]);
					format[j] = '\n';
					printf("type_o: %s, o: %d, wid: %s, prec: %s, minus, noll, oct\n", type_o[t], d[o], width[w], prec[p]);
					fflush(stdout);
					ft_printf(format, d[o]);
					fflush(stdout);
					printf(format, d[o]);
					fflush(stdout);
					ft_strdel(&format);
					printf("\n\n");
					j = 0;
				}
			}
		}

		for (o = 0; o < lim_d; o++)
		{
			format = ft_memalloc(50);
			format[j++] = '%';
			format[j++] = minus;
			format[j++] = noll;
			add_to_format(&format[j], type_o[t]);
			j += len_j(&format[j]);
			format[j] = '\n';
			printf("type: %s, o: %d, minus, noll\n", type_o[t], d[o]);
			fflush(stdout);
			ft_printf(format, d[o]);
			fflush(stdout);
			printf(format, d[o]);
			fflush(stdout);
			ft_strdel(&format);
			printf("\n\n");
			j = 0;
		}

		for (o = 0; o < lim_d; o++)
		{
			format = ft_memalloc(50);
			format[j++] = '%';
			format[j++] = minus;
			add_to_format(&format[j], type_o[t]);
			j += len_j(&format[j]);
			format[j] = '\n';
			printf("type: %s, o: %d, minus\n", type_o[t], d[o]);
			fflush(stdout);
			ft_printf(format, d[o]);
			fflush(stdout);
			printf(format, d[o]);
			fflush(stdout);
			ft_strdel(&format);
			printf("\n\n");
			j = 0;
		}
		for (o = 0; o < lim_d; o++)
		{
			format = ft_memalloc(50);
			format[j++] = '%';
			format[j++] = noll;
			add_to_format(&format[j], type_o[t]);
			j += len_j(&format[j]);
			format[j] = '\n';
			printf("type: %s, o: %d, noll\n", type_o[t], d[o]);
			fflush(stdout);
			ft_printf(format, d[o]);
			fflush(stdout);
			printf(format, d[o]);
			fflush(stdout);
			ft_strdel(&format);
			printf("\n\n");
			j = 0;
		}
		for (o = 0; o < lim_d; o++)
		{
			format = ft_memalloc(50);
			format[j++] = '%';
			format[j++] = oct;
			add_to_format(&format[j], type_o[t]);
			j += len_j(&format[j]);
			format[j] = '\n';
			printf("type: %s, o: %d, oct\n", type_o[t], d[o]);
			fflush(stdout);
			ft_printf(format, d[o]);
			fflush(stdout);
			printf(format, d[o]);
			fflush(stdout);
			ft_strdel(&format);
			printf("\n\n");
			j = 0;
		}
		for (o = 0; o < lim_d; o++)
		{
			for (w = 0; w < lim_w; w++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				add_to_format(&format[j], width[w]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type_o[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type_: %s, o: %d, wid: %s\n", type_o[t], d[o], width[w]);
				fflush(stdout);
				ft_printf(format, d[o]);
				fflush(stdout);
				printf(format, d[o]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}
		}
		for (o = 0; o < lim_d; o++)
		{
			for (p = 0; p < lim_p; p++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				add_to_format(&format[j], prec[p]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type_o[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type_: %s, o: %d, prec: %s\n", type_o[t], d[o], prec[p]);
				fflush(stdout);
				ft_printf(format, d[o]);
				fflush(stdout);
				printf(format, d[o]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}
		}
		for (o = 0; o < lim_d; o++)
		{
			for (w = 0; w < lim_w; w++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = noll;
				add_to_format(&format[j], width[w]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type_o[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type_: %s, o: %d, wid: %s, noll\n", type_o[t], d[o], width[w]);
				fflush(stdout);
				ft_printf(format, d[o]);
				fflush(stdout);
				printf(format, d[o]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}
		}
		for (o = 0; o < lim_d; o++)
		{
			for (p = 0; p < lim_p; p++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = noll;
				add_to_format(&format[j], prec[p]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type_o[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type_: %s, o: %d, prec: %s, noll\n", type_o[t], d[o], prec[p]);
				fflush(stdout);
				ft_printf(format, d[o]);
				fflush(stdout);
				printf(format, d[o]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}
		}
		for (o = 0; o < lim_d; o++)
		{
			for (w = 0; w < lim_w; w++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = minus;
				add_to_format(&format[j], width[w]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type_o[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type_: %s, o: %d, wid: %s, minus\n", type_o[t], d[o], width[w]);
				fflush(stdout);
				ft_printf(format, d[o]);
				fflush(stdout);
				printf(format, d[o]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}
		}
		for (o = 0; o < lim_d; o++)
		{
			for (w = 0; w < lim_w; w++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = oct;
				add_to_format(&format[j], width[w]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type_o[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type_: %s, o: %d, wid: %s, oct\n", type_o[t], d[o], width[w]);
				fflush(stdout);
				ft_printf(format, d[o]);
				fflush(stdout);
				printf(format, d[o]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}
		}
		for (o = 0; o < lim_d; o++)
		{
			for (w = 0; w < lim_w; w++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = oct;
				format[j++] = noll;
				add_to_format(&format[j], width[w]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type_o[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type_: %s, o: %d, wid: %s, oct, noll\n", type_o[t], d[o], width[w]);
				fflush(stdout);
				ft_printf(format, d[o]);
				fflush(stdout);
				printf(format, d[o]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}
		}
		for (o = 0; o < lim_d; o++)
		{
			for (w = 0; w < lim_w; w++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = minus;
				format[j++] = noll;
				add_to_format(&format[j], width[w]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type_o[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type_: %s, o: %d, wid: %s, minus, noll\n", type_o[t], d[o], width[w]);
				fflush(stdout);
				ft_printf(format, d[o]);
				fflush(stdout);
				printf(format, d[o]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}
		}
		for (o = 0; o < lim_d; o++)
		{
			for (w = 0; w < lim_w; w++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = minus;
				format[j++] = noll;
				format[j++] = oct;
				add_to_format(&format[j], width[w]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type_o[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type_: %s, o: %d, wid: %s, minus, noll. oct\n", type_o[t], d[o], width[w]);
				fflush(stdout);
				ft_printf(format, d[o]);
				fflush(stdout);
				printf(format, d[o]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}
		}
		for (o = 0; o < lim_d; o++)
		{
			for (p = 0; p < lim_p; p++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = minus;
				add_to_format(&format[j], prec[p]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type_o[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type_: %s, o: %d, prec: %s, minus\n", type_o[t], d[o], prec[p]);
				fflush(stdout);
				ft_printf(format, d[o]);
				fflush(stdout);
				printf(format, d[o]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}
		}
		for (o = 0; o < lim_d; o++)
		{
			for (p = 0; p < lim_p; p++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = minus;
				format[j++] = noll;
				add_to_format(&format[j], prec[p]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type_o[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type_: %s, o: %d, prec: %s, minus, noll\n", type_o[t], d[o], prec[p]);
				fflush(stdout);
				ft_printf(format, d[o]);
				fflush(stdout);
				printf(format, d[o]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}
		}
		for (o = 0; o < lim_d; o++)
		{
			for (p = 0; p < lim_p; p++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = oct;
				format[j++] = noll;
				add_to_format(&format[j], prec[p]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type_o[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type_: %s, o: %d, prec: %s, oct, noll\n", type_o[t], d[o], prec[p]);
				fflush(stdout);
				ft_printf(format, d[o]);
				fflush(stdout);
				printf(format, d[o]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}
		}
		for (o = 0; o < lim_d; o++)
		{
			for (p = 0; p < lim_p; p++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = oct;
				format[j++] = noll;
				format[j++] = minus;
				add_to_format(&format[j], prec[p]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type_o[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type_: %s, o: %d, prec: %s, oct, noll, minus\n", type_o[t], d[o], prec[p]);
				fflush(stdout);
				ft_printf(format, d[o]);
				fflush(stdout);
				printf(format, d[o]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}
		}
		for (o = 0; o < lim_d; o++)
		{
			for (p = 0; p < lim_p; p++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = oct;
				add_to_format(&format[j], prec[p]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type_o[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type_: %s, o: %d, prec: %s, oct\n", type_o[t], d[o], prec[p]);
				fflush(stdout);
				ft_printf(format, d[o]);
				fflush(stdout);
				printf(format, d[o]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}
		}
		for (o = 0; o < lim_d; o++)
		{
			for (w = 0; w < lim_w; w++)
			{
				for (p = 0; p < lim_p; p++)
				{
					format = ft_memalloc(50);
					format[j++] = '%';
					add_to_format(&format[j], width[w]);
					j += len_j(&format[j]);
					add_to_format(&format[j], prec[p]);
					j += len_j(&format[j]);
					add_to_format(&format[j], type_o[t]);
					j += len_j(&format[j]);
					format[j] = '\n';
					printf("type_o: %s, o: %d, wid: %s, prec: %s\n", type_o[t], d[o], width[w], prec[p]);
					fflush(stdout);
					ft_printf(format, d[o]);
					fflush(stdout);
					printf(format, d[o]);
					fflush(stdout);
					ft_strdel(&format);
					printf("\n\n");
					j = 0;
				}
			}
		}
		for (o = 0; o < lim_d; o++)
		{
			format = ft_memalloc(50);
			format[j++] = '%';
			format[j++] = minus;
			format[j++] = noll;
			format[j++] = oct;
			add_to_format(&format[j], type_o[t]);
			j += len_j(&format[j]);
			format[j] = '\n';
			printf("type: %s, o: %d, minus, noll, oct\n", type_o[t], d[o]);
			fflush(stdout);
			ft_printf(format, d[o]);
			fflush(stdout);
			printf(format, d[o]);
			fflush(stdout);
			ft_strdel(&format);
			printf("\n\n");
			j = 0;
		}

		for (o = 0; o < lim_d; o++)
		{
			for (w = 0; w < lim_w; w++)
			{
				for (p = 0; p < lim_p; p++)
				{
					format = ft_memalloc(50);
					format[j++] = '%';
					format[j++] = minus;
					add_to_format(&format[j], width[w]);
					j += len_j(&format[j]);
					add_to_format(&format[j], prec[p]);
					j += len_j(&format[j]);
					add_to_format(&format[j], type_o[t]);
					j += len_j(&format[j]);
					format[j] = '\n';
					printf("type_o: %s, o: %d, wid: %s, prec: %s, minus\n", type_o[t], d[o], width[w], prec[p]);
					fflush(stdout);
					ft_printf(format, d[o]);
					fflush(stdout);
					printf(format, d[o]);
					fflush(stdout);
					ft_strdel(&format);
					printf("\n\n");
					j = 0;
				}
			}
		}
		for (o = 0; o < lim_d; o++)
		{
			for (w = 0; w < lim_w; w++)
			{
				for (p = 0; p < lim_p; p++)
				{
					format = ft_memalloc(50);
					format[j++] = '%';
					format[j++] = noll;
					add_to_format(&format[j], width[w]);
					j += len_j(&format[j]);
					add_to_format(&format[j], prec[p]);
					j += len_j(&format[j]);
					add_to_format(&format[j], type_o[t]);
					j += len_j(&format[j]);
					format[j] = '\n';
					printf("type_o: %s, o: %d, wid: %s, prec: %s, minus\n", type_o[t], d[o], width[w], prec[p]);
					fflush(stdout);
					ft_printf(format, d[o]);
					fflush(stdout);
					printf(format, d[o]);
					fflush(stdout);
					ft_strdel(&format);
					printf("\n\n");
					j = 0;
				}
			}
		}
		for (o = 0; o < lim_d; o++)
		{
			for (w = 0; w < lim_w; w++)
			{
				for (p = 0; p < lim_p; p++)
				{
					format = ft_memalloc(50);
					format[j++] = '%';
					format[j++] = oct;
					add_to_format(&format[j], width[w]);
					j += len_j(&format[j]);
					add_to_format(&format[j], prec[p]);
					j += len_j(&format[j]);
					add_to_format(&format[j], type_o[t]);
					j += len_j(&format[j]);
					format[j] = '\n';
					printf("type_o: %s, o: %d, wid: %s, prec: %s, oct\n", type_o[t], d[o], width[w], prec[p]);
					fflush(stdout);
					ft_printf(format, d[o]);
					fflush(stdout);
					printf(format, d[o]);
					fflush(stdout);
					ft_strdel(&format);
					printf("\n\n");
					j = 0;
				}
			}
		}
		for (o = 0; o < lim_d; o++)
		{
			for (w = 0; w < lim_w; w++)
			{
				for (p = 0; p < lim_p; p++)
				{
					format = ft_memalloc(50);
					format[j++] = '%';
					format[j++] = oct;
					format[j++] = noll;
					add_to_format(&format[j], width[w]);
					j += len_j(&format[j]);
					add_to_format(&format[j], prec[p]);
					j += len_j(&format[j]);
					add_to_format(&format[j], type_o[t]);
					j += len_j(&format[j]);
					format[j] = '\n';
					printf("type_o: %s, o: %d, wid: %s, prec: %s, oct, noll\n", type_o[t], d[o], width[w], prec[p]);
					fflush(stdout);
					ft_printf(format, d[o]);
					fflush(stdout);
					printf(format, d[o]);
					fflush(stdout);
					ft_strdel(&format);
					printf("\n\n");
					j = 0;
				}
			}
		}
		for (o = 0; o < lim_d; o++)
		{
			for (w = 0; w < lim_w; w++)
			{
				for (p = 0; p < lim_p; p++)
				{
					format = ft_memalloc(50);
					format[j++] = '%';
					format[j++] = minus;
					format[j++] = noll;
					add_to_format(&format[j], width[w]);
					j += len_j(&format[j]);
					add_to_format(&format[j], prec[p]);
					j += len_j(&format[j]);
					add_to_format(&format[j], type_o[t]);
					j += len_j(&format[j]);
					format[j] = '\n';
					printf("type_o: %s, o: %d, wid: %s, prec: %s, minus, noll\n", type_o[t], d[o], width[w], prec[p]);
					fflush(stdout);
					ft_printf(format, d[o]);
					fflush(stdout);
					printf(format, d[o]);
					fflush(stdout);
					ft_strdel(&format);
					printf("\n\n");
					j = 0;
				}
			}
		}
	}
	for (t = 0; t < lim_t; t++)
	{
		for (x= 0; x < lim_d; x++)
		{
			for (w = 0; w < lim_w; w++)
			{
				for (p = 0; p < lim_p; p++)
				{
					format = ft_memalloc(50);
					format[j++] = '%';
					format[j++] = minus;
					format[j++] = noll;
					format[j++] = oct;
					add_to_format(&format[j], width[w]);
					j += len_j(&format[j]);
					add_to_format(&format[j], prec[p]);
					j += len_j(&format[j]);
					add_to_format(&format[j], type_x[t]);
					j += len_j(&format[j]);
					format[j] = '\n';
					printf("type_x: %s, x: %d, wid: %s, prec: %s, minus, noll, oct\n", type_x[t], d[x], width[w], prec[p]);
					fflush(stdout);
					ft_printf(format, d[x]);
					fflush(stdout);
					printf(format, d[x]);
					fflush(stdout);
					ft_strdel(&format);
					printf("\n\n");
					j = 0;
				}
			}
		}

		for (x = 0; x < lim_d; x++)
		{
			format = ft_memalloc(50);
			format[j++] = '%';
			format[j++] = minus;
			format[j++] = noll;
			add_to_format(&format[j], type_x[t]);
			j += len_j(&format[j]);
			format[j] = '\n';
			printf("type: %s, x: %d, minus, noll\n", type_x[t], d[x]);
			fflush(stdout);
			ft_printf(format, d[x]);
			fflush(stdout);
			printf(format, d[x]);
			fflush(stdout);
			ft_strdel(&format);
			printf("\n\n");
			j = 0;
		}

		for (x = 0; x < lim_d; x++)
		{
			format = ft_memalloc(50);
			format[j++] = '%';
			format[j++] = minus;
			add_to_format(&format[j], type_x[t]);
			j += len_j(&format[j]);
			format[j] = '\n';
			printf("type: %s, x: %d, minus\n", type_x[t], d[x]);
			fflush(stdout);
			ft_printf(format, d[x]);
			fflush(stdout);
			printf(format, d[x]);
			fflush(stdout);
			ft_strdel(&format);
			printf("\n\n");
			j = 0;
		}
		for (x = 0; x < lim_d; x++)
		{
			format = ft_memalloc(50);
			format[j++] = '%';
			format[j++] = noll;
			add_to_format(&format[j], type_x[t]);
			j += len_j(&format[j]);
			format[j] = '\n';
			printf("type: %s, x: %d, noll\n", type_x[t], d[x]);
			fflush(stdout);
			ft_printf(format, d[x]);
			fflush(stdout);
			printf(format, d[x]);
			fflush(stdout);
			ft_strdel(&format);
			printf("\n\n");
			j = 0;
		}
		for (x = 0; x < lim_d; x++)
		{
			format = ft_memalloc(50);
			format[j++] = '%';
			format[j++] = oct;
			add_to_format(&format[j], type_x[t]);
			j += len_j(&format[j]);
			format[j] = '\n';
			printf("type: %s, x: %d, oct\n", type_x[t], d[x]);
			fflush(stdout);
			ft_printf(format, d[x]);
			fflush(stdout);
			printf(format, d[x]);
			fflush(stdout);
			ft_strdel(&format);
			printf("\n\n");
			j = 0;
		}
		for (x = 0; x < lim_d; x++)
		{
			for (w = 0; w < lim_w; w++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				add_to_format(&format[j], width[w]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type_x[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type_: %s, x: %d, wid: %s\n", type_x[t], d[x], width[w]);
				fflush(stdout);
				ft_printf(format, d[x]);
				fflush(stdout);
				printf(format, d[x]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}
		}
		for (x = 0; x < lim_d; x++)
		{
			for (p = 0; p < lim_p; p++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				add_to_format(&format[j], prec[p]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type_x[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type_: %s, x: %d, prec: %s\n", type_x[t], d[x], prec[p]);
				fflush(stdout);
				ft_printf(format, d[x]);
				fflush(stdout);
				printf(format, d[x]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}
		}
		for (x = 0; x < lim_d; x++)
		{
			for (w = 0; w < lim_w; w++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = noll;
				add_to_format(&format[j], width[w]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type_x[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type_: %s, x: %d, wid: %s, noll\n", type_x[t], d[x], width[w]);
				fflush(stdout);
				ft_printf(format, d[x]);
				fflush(stdout);
				printf(format, d[x]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}
		}
		for (x = 0; x < lim_d; x++)
		{
			for (p = 0; p < lim_p; p++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = noll;
				add_to_format(&format[j], prec[p]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type_x[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type_: %s, x: %d, prec: %s, noll\n", type_x[t], d[x], prec[p]);
				fflush(stdout);
				ft_printf(format, d[x]);
				fflush(stdout);
				printf(format, d[x]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}
		}
		for (x = 0; x < lim_d; x++)
		{
			for (w = 0; w < lim_w; w++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = minus;
				add_to_format(&format[j], width[w]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type_x[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type_: %s, x: %d, wid: %s, minus\n", type_x[t], d[x], width[w]);
				fflush(stdout);
				ft_printf(format, d[x]);
				fflush(stdout);
				printf(format, d[x]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}
		}
		for (x = 0; x < lim_d; x++)
		{
			for (w = 0; w < lim_w; w++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = oct;
				add_to_format(&format[j], width[w]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type_x[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type_: %s, x: %d, wid: %s, oct\n", type_x[t], d[x], width[w]);
				fflush(stdout);
				ft_printf(format, d[x]);
				fflush(stdout);
				printf(format, d[x]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}
		}
		for (x = 0; x < lim_d; x++)
		{
			for (w = 0; w < lim_w; w++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = oct;
				format[j++] = noll;
				add_to_format(&format[j], width[w]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type_x[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type_: %s, x: %d, wid: %s, oct, noll\n", type_x[t], d[x], width[w]);
				fflush(stdout);
				ft_printf(format, d[x]);
				fflush(stdout);
				printf(format, d[x]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}
		}
		for (x = 0; x < lim_d; x++)
		{
			for (w = 0; w < lim_w; w++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = minus;
				format[j++] = noll;
				add_to_format(&format[j], width[w]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type_x[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type_: %s, x: %d, wid: %s, minus, noll\n", type_x[t], d[x], width[w]);
				fflush(stdout);
				ft_printf(format, d[x]);
				fflush(stdout);
				printf(format, d[x]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}
		}
		for (x = 0; x < lim_d; x++)
		{
			for (w = 0; w < lim_w; w++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = minus;
				format[j++] = noll;
				format[j++] = oct;
				add_to_format(&format[j], width[w]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type_x[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type_: %s, x: %d, wid: %s, minus, noll. oct\n", type_x[t], d[x], width[w]);
				fflush(stdout);
				ft_printf(format, d[x]);
				fflush(stdout);
				printf(format, d[x]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}
		}
		for (x = 0; x < lim_d; x++)
		{
			for (p = 0; p < lim_p; p++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = minus;
				add_to_format(&format[j], prec[p]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type_x[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type_: %s, x: %d, prec: %s, minus\n", type_x[t], d[x], prec[p]);
				fflush(stdout);
				ft_printf(format, d[x]);
				fflush(stdout);
				printf(format, d[x]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}
		}
		for (x = 0; x < lim_d; x++)
		{
			for (p = 0; p < lim_p; p++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = minus;
				format[j++] = noll;
				add_to_format(&format[j], prec[p]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type_x[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type_: %s, x: %d, prec: %s, minus, noll\n", type_x[t], d[x], prec[p]);
				fflush(stdout);
				ft_printf(format, d[x]);
				fflush(stdout);
				printf(format, d[x]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}
		}
		for (x = 0; x < lim_d; x++)
		{
			for (p = 0; p < lim_p; p++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = oct;
				format[j++] = noll;
				add_to_format(&format[j], prec[p]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type_x[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type_: %s, x: %d, prec: %s, oct, noll\n", type_x[t], d[x], prec[p]);
				fflush(stdout);
				ft_printf(format, d[x]);
				fflush(stdout);
				printf(format, d[x]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}
		}
		for (x = 0; x < lim_d; x++)
		{
			for (p = 0; p < lim_p; p++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = oct;
				format[j++] = noll;
				format[j++] = minus;
				add_to_format(&format[j], prec[p]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type_x[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type_: %s, x: %d, prec: %s, oct, noll, minus\n", type_x[t], d[x], prec[p]);
				fflush(stdout);
				ft_printf(format, d[x]);
				fflush(stdout);
				printf(format, d[x]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}
		}
		for (x = 0; x < lim_d; x++)
		{
			for (p = 0; p < lim_p; p++)
			{
				format = ft_memalloc(50);
				format[j++] = '%';
				format[j++] = oct;
				add_to_format(&format[j], prec[p]);
				j += len_j(&format[j]);
				add_to_format(&format[j], type_x[t]);
				j += len_j(&format[j]);
				format[j] = '\n';
				printf("type_: %s, x: %d, prec: %s, oct\n", type_x[t], d[x], prec[p]);
				fflush(stdout);
				ft_printf(format, d[x]);
				fflush(stdout);
				printf(format, d[x]);
				fflush(stdout);
				ft_strdel(&format);
				printf("\n\n");
				j = 0;
			}
		}
		for (x = 0; x < lim_d; x++)
		{
			for (w = 0; w < lim_w; w++)
			{
				for (p = 0; p < lim_p; p++)
				{
					format = ft_memalloc(50);
					format[j++] = '%';
					add_to_format(&format[j], width[w]);
					j += len_j(&format[j]);
					add_to_format(&format[j], prec[p]);
					j += len_j(&format[j]);
					add_to_format(&format[j], type_x[t]);
					j += len_j(&format[j]);
					format[j] = '\n';
					printf("type_x: %s, x: %d, wid: %s, prec: %s\n", type_x[t], d[x], width[w], prec[p]);
					fflush(stdout);
					ft_printf(format, d[x]);
					fflush(stdout);
					printf(format, d[x]);
					fflush(stdout);
					ft_strdel(&format);
					printf("\n\n");
					j = 0;
				}
			}
		}
		for (x = 0; x < lim_d; x++)
		{
			format = ft_memalloc(50);
			format[j++] = '%';
			format[j++] = minus;
			format[j++] = noll;
			format[j++] = oct;
			add_to_format(&format[j], type_x[t]);
			j += len_j(&format[j]);
			format[j] = '\n';
			printf("type: %s, x: %d, minus, noll, oct\n", type_x[t], d[x]);
			fflush(stdout);
			ft_printf(format, d[x]);
			fflush(stdout);
			printf(format, d[x]);
			fflush(stdout);
			ft_strdel(&format);
			printf("\n\n");
			j = 0;
		}

		for (x = 0; x < lim_d; x++)
		{
			for (w = 0; w < lim_w; w++)
			{
				for (p = 0; p < lim_p; p++)
				{
					format = ft_memalloc(50);
					format[j++] = '%';
					format[j++] = minus;
					add_to_format(&format[j], width[w]);
					j += len_j(&format[j]);
					add_to_format(&format[j], prec[p]);
					j += len_j(&format[j]);
					add_to_format(&format[j], type_x[t]);
					j += len_j(&format[j]);
					format[j] = '\n';
					printf("type_x: %s, x: %d, wid: %s, prec: %s, minus\n", type_x[t], d[x], width[w], prec[p]);
					fflush(stdout);
					ft_printf(format, d[x]);
					fflush(stdout);
					printf(format, d[x]);
					fflush(stdout);
					ft_strdel(&format);
					printf("\n\n");
					j = 0;
				}
			}
		}
		for (x = 0; x < lim_d; x++)
		{
			for (w = 0; w < lim_w; w++)
			{
				for (p = 0; p < lim_p; p++)
				{
					format = ft_memalloc(50);
					format[j++] = '%';
					format[j++] = noll;
					add_to_format(&format[j], width[w]);
					j += len_j(&format[j]);
					add_to_format(&format[j], prec[p]);
					j += len_j(&format[j]);
					add_to_format(&format[j], type_x[t]);
					j += len_j(&format[j]);
					format[j] = '\n';
					printf("type_x: %s, x: %d, wid: %s, prec: %s, noll\n", type_x[t], d[x], width[w], prec[p]);
					fflush(stdout);
					ft_printf(format, d[x]);
					fflush(stdout);
					printf(format, d[x]);
					fflush(stdout);
					ft_strdel(&format);
					printf("\n\n");
					j = 0;
				}
			}
		}
		for (x = 0; x < lim_d; x++)
		{
			for (w = 0; w < lim_w; w++)
			{
				for (p = 0; p < lim_p; p++)
				{
					format = ft_memalloc(50);
					format[j++] = '%';
					format[j++] = oct;
					add_to_format(&format[j], width[w]);
					j += len_j(&format[j]);
					add_to_format(&format[j], prec[p]);
					j += len_j(&format[j]);
					add_to_format(&format[j], type_x[t]);
					j += len_j(&format[j]);
					format[j] = '\n';
					printf("type_x: %s, x: %d, wid: %s, prec: %s, oct\n", type_x[t], d[x], width[w], prec[p]);
					fflush(stdout);
					ft_printf(format, d[x]);
					fflush(stdout);
					printf(format, d[x]);
					fflush(stdout);
					ft_strdel(&format);
					printf("\n\n");
					j = 0;
				}
			}
		}
		for (x = 0; x < lim_d; x++)
		{
			for (w = 0; w < lim_w; w++)
			{
				for (p = 0; p < lim_p; p++)
				{
					format = ft_memalloc(50);
					format[j++] = '%';
					format[j++] = oct;
					format[j++] = noll;
					add_to_format(&format[j], width[w]);
					j += len_j(&format[j]);
					add_to_format(&format[j], prec[p]);
					j += len_j(&format[j]);
					add_to_format(&format[j], type_x[t]);
					j += len_j(&format[j]);
					format[j] = '\n';
					printf("type_x: %s, x: %d, wid: %s, prec: %s, oct, noll\n", type_x[t], d[x], width[w], prec[p]);
					fflush(stdout);
					ft_printf(format, d[x]);
					fflush(stdout);
					printf(format, d[x]);
					fflush(stdout);
					ft_strdel(&format);
					printf("\n\n");
					j = 0;
				}
			}
		}
		for (x = 0; x < lim_d; x++)
		{
			for (w = 0; w < lim_w; w++)
			{
				for (p = 0; p < lim_p; p++)
				{
					format = ft_memalloc(50);
					format[j++] = '%';
					format[j++] = minus;
					format[j++] = noll;
					add_to_format(&format[j], width[w]);
					j += len_j(&format[j]);
					add_to_format(&format[j], prec[p]);
					j += len_j(&format[j]);
					add_to_format(&format[j], type_x[t]);
					j += len_j(&format[j]);
					format[j] = '\n';
					printf("type_x: %s, x: %d, wid: %s, prec: %s, minus, noll\n", type_x[t], d[x], width[w], prec[p]);
					fflush(stdout);
					ft_printf(format, d[x]);
					fflush(stdout);
					printf(format, d[x]);
					fflush(stdout);
					ft_strdel(&format);
					printf("\n\n");
					j = 0;
				}
			}
		}
	}

}
