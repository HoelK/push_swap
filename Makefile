CC=cc
FLAGS=-Wall -Werror -Wextra -g

SRCS=ft_strnstr.c ft_split.c ft_isdigit.c ft_strlen.c args.c parser.c int_to_index.c utils.c sort_utils.c get_next_line.c get_next_line_utils.c safety.c
MAIN_C=operations_s.c operations_p.c operations_rr.c operations_r.c solve.c sort_utils2.c sort_utils3.c push_swap.c
BONUS_C=operations_s_bonus.c operations_p_bonus.c operations_r_bonus.c operations_rr_bonus.c checker_bonus.c

OBJS=$(SRCS:.c=.o)
MAIN_O=$(MAIN_C:.c=.o)
BONUS_O=$(BONUS_C:.c=.o)

NAME=push_swap
BONUS_NAME=checker

all: $(NAME)

$(NAME): $(OBJS) $(MAIN_O)
	$(CC) $(FLAGS) $(OBJS) $(MAIN_O) -o $(NAME)

bonus: $(OBJS) $(BONUS_O)
	$(CC) $(FLAGS) $(OBJS) $(BONUS_O) -o $(BONUS_NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $^ -o $@

clean:
	rm -f $(OBJS) $(MAIN_O) $(BONUS_O)

fclean: clean
	rm -f $(NAME) $(BONUS_NAME)

re: fclean all
