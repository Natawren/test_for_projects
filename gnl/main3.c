#include <stdio.h>
#include <stdlib.h>
#include "get_next_line.h"

int main()
{
    char    *line = NULL;
    
    get_next_line(-1, &line);
    printf("-1(null): %s\n", line);
	
	return (0);
}
