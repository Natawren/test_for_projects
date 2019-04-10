#include <stdio.h>
#include <stdlib.h>
#include "get_next_line.h"
#include <stdlib.h>

int main()
{
    char    *line = NULL;

    while (get_next_line(0, &line) != 0)
        printf("1fd0: %s\n", line);       
	return (0);
}
