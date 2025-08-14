

void ft_div_mod(int a, int b, int *div, int *mod)
{
    if (b != 0)
    {
        *div = a / b;
        *mod = a % b;
    }
}

// #include <unistd.h>

// int main(void)
// {
//     int a = 10;
//     int b = 3;
//     int div, mod;

//     ft_div_mod(a, b, &div, &mod);

//     char c = div + '0';
//     write(1, &c, 1);
//     write(1, "\n", 1);

//     c = mod + '0';
//     write(1, &c, 1);
//     write(1, "\n", 1);
    
//     return 0;
// }