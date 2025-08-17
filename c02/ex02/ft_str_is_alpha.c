
int ft_str_is_alpha(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
		{
			return 0;
		}
		i++;
	}
	
	return 1;
}

// #include <stdio.h>
// int main(void)
// {
//     char str1[] = "HelloWorld";
//     char str2[] = "Hello123";
//     char str3[] = "";

//     printf("Is %s alpha? %d\n", str1, ft_str_is_alpha(str1));
//     printf("Is %s alpha? %d\n", str2, ft_str_is_alpha(str2));
//     printf("Is %s alpha? %d\n", str3, ft_str_is_alpha(str3));

//     return 0;
// }