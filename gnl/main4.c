#include <stdio.h>
#include <stdlib.h>
#include "get_next_line.h"

int main()
{
    printf("\n\n\n\n");
	int		fd1;
    int		fd2;
    int		fd3;
    int		fd4;
    char    *line;
    int     i = -1;

 	fd1 = open("./1.txt", O_RDWR);
    fd2 = open("./2.txt", O_RDWR);
    fd3 = open("./3.txt", O_RDWR);
    fd4 = open("./4.txt", O_RDWR);

    while (++i < 11)
    {
        if (get_next_line(fd1, &line) == 1)
		{
           printf("fd1: %s\n", line);
		}
        free(line);
        line = NULL;
        if (get_next_line(fd2, &line) == 1)
		{
            printf("fd2: %s\n", line);
		}
        free(line);
        line = NULL;
        if (get_next_line(fd3, &line) == 1)
		{
            printf("fd3: %s\n", line);
		}
        free(line);
        line = NULL;
        if (get_next_line(fd4, &line) == 1)
		{
            printf("fd4: %s\n", line);
		}
        free(line);
        line = NULL;
    }
 	close(fd1);
    close(fd2);
    close(fd3);
    close(fd4);
	return (0);
}
