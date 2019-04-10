make -C libft/ fclean && make -C libft/
clang -Wall -Wextra -Werror -I libft/includes -o get_next_line.o -c get_next_line.c
clang -Wall -Wextra -Werror -I libft/includes -o main4.o -c main4.c
clang -o test_gnl main4.o get_next_line.o -I libft/includes -L libft/ -lft