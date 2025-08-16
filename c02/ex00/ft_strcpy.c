
char *ft_strcpy(char *dest, char *src)
{
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}



// #include <stdio.h>

// int main(void)
// {
//     char src[] = "Hello, World!";
//     char dest[20];

//     ft_strcpy(dest, src);
//     printf("Copied string: %s\n", dest);

//     return 0;
// }
