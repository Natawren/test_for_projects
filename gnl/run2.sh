make -C libft/ fclean && make -C libft/
clang -Wall -Wextra -Werror -I libft/includes -o get_next_line.o -c get_next_line.c
clang -Wall -Wextra -Werror -I libft/includes -o main2.o -c main2.c
clang -o test_gnl main2.o get_next_line.o -I libft/includes -L libft/ -lft