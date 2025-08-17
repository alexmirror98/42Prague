
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

void	ft_putaddr(unsigned long addr)
{
	char	buffer[16];
	char	*hex;
	int		i;

	hex = "0123456789abcdef";
	i = 15;
	while (i >= 0)
	{
		buffer[i] = hex[addr % 16];
		addr /= 16;
		i--;
	}
	write(1, buffer, 16);
}

void	ft_print_hex_content(unsigned char *p, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < 16)
	{
		if (i < size)
			ft_puthex(p[i]);
		else
		{
			ft_putchar(' ');
			ft_putchar(' ');
		}
		if (i % 2 == 1)
			ft_putchar(' ');
		i++;
	}
}

void	ft_print_ascii(unsigned char *p, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		if (p[i] >= 32 && p[i] <= 126)
			ft_putchar(p[i]);
		else
			ft_putchar('.');
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)addr;
	while (i < size)
	{
		ft_putaddr((unsigned long)(p + i));
		ft_putchar(':');
		ft_putchar(' ');
		if (size - i >= 16)
			ft_print_hex_content(p + i, 16);
		else
			ft_print_hex_content(p + i, size - i);
		if (size - i >= 16)
			ft_print_ascii(p + i, 16);
		else
			ft_print_ascii(p + i, size - i);
		ft_putchar('\n');
		i += 16;
	}
	return (addr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "Bonjour les aminches\t\n\tc\007est fou\tout\tce qu on "
// 		"peut faire avec\t\n\tprint_memory\n\n\nlol.lol\n ";
// 	ft_print_memory(str, sizeof(str) - 1);
// 	return (0);
// }
