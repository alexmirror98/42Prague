
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	printf("Empty string: %d\n", ft_str_is_printable(""));             // 1
// 	printf("Hello: %d\n", ft_str_is_printable("Hello"));               // 1
// 	printf("Hello World!: %d\n", ft_str_is_printable("Hello World!")); // 1
// 	printf(\"With tab: %d\\n\", ft_str_is_printable(\"Hello\\tWorld\"));   // 0
// 	return (0);
// }
