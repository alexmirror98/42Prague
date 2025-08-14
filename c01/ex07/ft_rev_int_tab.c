
void ft_rev_int_tab(int *tab, int size)
{
    int start = 0;
    int end = size - 1;
    int a;

    while (start < end)
    {
        a = tab[start];
        tab[start] = tab[end];
        tab[end] = a;

        start++;
        end--;
    }
}

// #include <stdio.h>

// int main(void)
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = 5;
//     int i;

//     ft_rev_int_tab(arr, size);

//     for (i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }
