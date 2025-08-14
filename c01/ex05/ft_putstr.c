
#include <unistd.h>
// #include <string.h>

void ft_putstr(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {   
        write(1, &str[i], 1);
        i++;
    }
}

// void ft_putstr(char *str)
// {
//     write(1, str, strlen(str));
// }

// int main(void)
// {
//     char *s = "May the force be with you\n";
//     ft_putstr(s);
//     return 0;
// }
