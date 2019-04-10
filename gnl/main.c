#include <stdio.h>
#include <stdlib.h>
#include "get_next_line.h"

int main(int argc, char **argv)
{
	int		fd1;
    char    *line;
    
 	fd1 = open(argv[1], O_RDWR);
    while (get_next_line(fd1, &line) && argc)
    {
       printf("fd1: %s\n", line);
       ft_strdel(&line);
	}
 	close(fd1);
	return (0);
}
