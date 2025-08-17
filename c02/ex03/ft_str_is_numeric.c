int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}


// #include <stdio.h>

// int	main(void)
// {
// 	printf("Empty string: %d\n", ft_str_is_numeric(""));       // 1
// 	printf("12345: %d\n", ft_str_is_numeric("12345"));          // 1
// 	printf("42Prague: %d\n", ft_str_is_numeric("42Prague"));    // 0
// 	printf("987654: %d\n", ft_str_is_numeric("987654"));        // 1
// 	return (0);
// }

