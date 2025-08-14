
void ft_ultimate_div_mod(int *a, int *b)
{
    if (*b != 0)
    {
        int c = *a;
        *a = c / *b;
        *b = c % *b;
    }
}

// #include <unistd.h>

// int main()
// {
//     int x = 10;
//     int y = 3;
//     ft_ultimate_div_mod(&x, &y);

//     char c = x + '0';
//     write(1, &c, 1);
//     write(1, "\n", 1);
    
//     c = y + '0';
//     write(1, &c, 1);
//     write(1, "\n", 1);
    
//     return 0;
// }