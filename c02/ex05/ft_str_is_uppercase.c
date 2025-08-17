
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
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
// 	printf("Empty string: %d\n", ft_str_is_uppercase(""));        // 1
// 	printf("HELLO: %d\n", ft_str_is_uppercase("HELLO"));          // 1
// 	printf("Hello: %d\n", ft_str_is_uppercase("Hello"));          // 0
// 	printf("WORLD: %d\n", ft_str_is_uppercase("WORLD"));          // 1
// 	printf("TEST123: %d\n", ft_str_is_uppercase("TEST123"));      // 0
// 	return (0);
// }
