
int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

// #include <stdio.h>

// int main(void)
// {
//     char *s = "Hello, world!";
//     int str_len = ft_strlen(s);
//     printf("Length: %d\n", str_len);
//     return 0;
// }
