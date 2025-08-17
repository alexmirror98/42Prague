
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32 && str[i] <= 126))
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_puthex((unsigned char)str[i]);
		}
		i++;
	}
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	char s[] = "Hello\nHow are you?\tOK!";
// 	ft_putstr_non_printable(s);
// 	return (0);
// }
