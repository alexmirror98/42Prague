
char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + ('a' - 'A');
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (new_word)
			{
				str[i] = str[i] - ('a' - 'A');
			}
			new_word = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			new_word = 0;
		}
		else
		{
			new_word = 1;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char s1[] = "hi, how are you? 42words forty-two; fifty+and+one";
// 	printf("%s\n", ft_strcapitalize(s1));
// 	return (0);
// }
