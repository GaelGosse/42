int ft_is_in(char *str, char c)
{
	int i;

	i = 0;
	while(str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	int i;
	int j;

	if(argc ==3)
	{
		i = 0;
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if ((argv[1][i] == argv[2][j]) && (ft_is_in(argv[1], argv[2][j]) == 0))
					write(1, &argv[1][i], 1);
				j++;
			}
		}
	}

	ft_is_in();
	(void)argc;
	(void)argv;
	(void)str;
	(void)nbr;
}