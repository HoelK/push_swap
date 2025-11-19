
CC=cc
FLAGS=-Wall -Werror -Wextra -g
SRCS=ft_strdup.c ft_split.c ft_isdigit.c ft_strlen.c memory.c args.c parser.c debug.c int_to_index.c utils.c solve.c operations_rr.c operations_s.c operations_r.c operations_p.c sort_utils.c
OBJS=ft_strdup.o ft_split.o ft_isdigit.o ft_strlen.o memory.o args.o parser.o debug.o int_to_index.o utils.o solve.o operations_rr.o operations_s.o operations_r.o operations_p.o sort_utils.o
MAIN=push_swap.o
TEST=tests.o
NAME=push_swap

all: $(NAME)

$(NAME): $(OBJS) $(MAIN)
	$(CC) $(FLAGS) $(OBJS) $(MAIN) -o $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $^ -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

test: $(OBJS) $(TEST)
	$(CC) $(FLAGS) $(OBJS) $(TEST) -o $(NAME)

re: fclean all
