
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	char src[] = "Hello 42Prague!";
// 	char dest[20];
// 	unsigned int n;
//
// 	n = ft_strlcpy(dest, src, 10);
// 	printf("dest: %s\n", dest); // Hello 42
// 	printf("returned length: %u\n", n); // 15 (длина src)
// 	return (0);
// }
