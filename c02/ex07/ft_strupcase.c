
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	char s1[] = "hello world!";
// 	char s2[] = "42Prague";
// 	char s3[] = "";
//
// 	printf("%s\n", ft_strupcase(s1)); // HELLO WORLD!
// 	printf("%s\n", ft_strupcase(s2)); // 42PRAGUE
// 	printf("%s\n", ft_strupcase(s3)); // (пустая строка)
// 	return (0);
// }
