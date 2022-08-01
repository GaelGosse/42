int	ft_is_endline(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (0);
}

/*
int main()
{
	// printf(back_green"\n----- ----- START ----- -----\n"reset);




	// printf("\n\n"back_green" --- a1.txt --- "reset"\n");
	int	fd = open("a1.txt", O_RDONLY);
	if (fd == -1)
		return (printf("open err\n"), 0);
	char *res = get_next_line(fd);
	printf(bold_cyan"%s"reset"",res);
	free(res);
	res = get_next_line(fd);
	printf(bold_cyan"%s"reset"",res);
	free(res);
	res = get_next_line(fd);
	printf(bold_cyan"%s"reset"",res);
	free(res);
	res = get_next_line(fd);
	printf(bold_cyan"%s"reset"",res);
	free(res);
	// printf(back_red"\n END "reset);
	if (fd == -1)
		return (printf("open err\n"), 0);




	// printf("\n\n"back_green" --- a2.txt --- "reset"\n");
	fd = open("a2.txt", O_RDONLY);
	if (fd == -1)
		return (printf("open err\n"), 0);

	res = get_next_line(fd);
	printf(bold_cyan"%s"reset"",res);
	free(res);
	// printf(back_red" END "reset);
	if (fd == -1)
		return (printf("open err\n"), 0);




	// printf("\n\n"back_green" --- a3.txt --- "reset"\n");
	fd = open("a3.txt", O_RDONLY);
	if (fd == -1)
		return (printf("open err\n"), 0);

	res = get_next_line(fd);
	printf(bold_cyan"%s"reset"",res);
	free(res);
	res = get_next_line(fd);	
	printf(bold_cyan"%s"reset"",res);
	free(res);
	// printf(bold_cyan"%s"reset"", res);
	
	// printf("\n"back_red" END "reset"\n");
	if (fd == -1)
		return (printf("open err\n"), 0);


	fd = open("a4.txt", O_RDONLY);
	if (fd == -1)
		return (printf("open err\n"), 0);
	// printf("\n\n"back_green" --- a4.txt --- "reset"\n");
	
	res = get_next_line(fd);
	printf(bold_cyan"%s"reset"",res);
	free(res);
	// printf("\n");
}
*/
