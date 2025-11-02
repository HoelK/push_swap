
CC=cc
FLAGS=-Wall -Werror -Wextra
SRCS=push_swap.c parse.c struct.c utils.c operations_s.c operations_p.c operations_r.c operations_rr.c
OBJS=push_swap.o parse.o struct.o utils.o operations_s.o operations_p.o operations_r.o operations_rr.o
DEBUG_F=debug.o
NAME=push_swap

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(FLAGS) $^ -c -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

debug: $(OBJS) $(DEBUG_F)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS) $(DEBUG_F)
