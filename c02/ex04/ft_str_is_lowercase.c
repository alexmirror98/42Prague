
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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
// 	printf("Empty string: %d\n", ft_str_is_lowercase(""));        // 1
// 	printf("hello: %d\n", ft_str_is_lowercase("hello"));          // 1
// 	printf("Hello: %d\n", ft_str_is_lowercase("Hello"));          // 0
// 	printf("world: %d\n", ft_str_is_lowercase("world"));          // 1
// 	printf("test123: %d\n", ft_str_is_lowercase("test123"));      // 0
// 	return (0);
// }
