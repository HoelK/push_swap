#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_allstacks	stacks;

	stacks = parse_args(argc, argv);
	stacks.a.tab = int_to_index(stacks.a.tab, stacks.a.size);
	solve(&stacks);
	free (stacks.a.tab);
	free (stacks.b.tab);
}
