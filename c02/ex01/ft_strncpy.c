
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i = 0;

    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {     
        dest[i] = '\0';
        i++;
    }

    return dest;
}

// #include <stdio.h>

// int main(void)
// {
//     char src[] = "Hello, World!";
//     char dest[20];

//     ft_strncpy(dest, src, 5);
//     printf("Copied string: %s\n", dest);

//     ft_strncpy(dest, src, 20);
//     printf("Copied string: %s\n", dest);

//     return 0;
// }