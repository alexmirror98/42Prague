

void ft_swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

// #include <unistd.h>

// int main(void)
// {
//     int x = 5;
//     int y = 8;
//     ft_swap(&x, &y);

//     int c = x + '0';
//     write(1, &c, 1);
//     write(1, "\n", 1);

//     c = y + '0';
//     write(1, &c, 1);
//     write(1, "\n", 1);
    
//     return 0;
// }