

void	check_arg(char **argv)
{
	int	i;

	i = 0;
	while (argv[i] != NULL)
	{

	}
}


int	main(int argc, char **argv)
{
	int	*start;

	if (argc <= 2 || check_arg(argv));
		return (0);
	stack_a = parse_arg(argv);
	sort_stacks(stack_a);
	return (0);
}
