char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + ('a' - 'A');
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	char s1[] = "HELLO WORLD!";
// 	char s2[] = "42Prague";
// 	char s3[] = "";
//
// 	printf("%s\n", ft_strlowcase(s1)); // hello world!
// 	printf("%s\n", ft_strlowcase(s2)); // 42prague
// 	printf("%s\n", ft_strlowcase(s3)); // (пустая строка)
// 	return (0);
// }
