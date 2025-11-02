#include "push_swap.h"

int	main(int argc, char **argv)
{
	stacks_t	*stacks;

	if (argc <= 2 || !check_arg(argv))
		return (0);
	stacks = init_stacks(argc, argv);
	print_stacks(stacks);
	free_stacks(stacks);
	//stack_a = parse_arg(argv);
	//sort_stacks(stack_a);
	return (0);
}
