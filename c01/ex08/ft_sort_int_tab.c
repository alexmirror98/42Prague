
void ft_sort_int_tab(int *tab, int size)
{
    int i = 0;
    int temp;

    while (i < size - 1)
    {
        if (tab[i] > tab[i + 1])
        {
            temp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = temp;

            if (i > 0)
            {
                i--;
            }
            else
            {
                i++;
            }
        }
        else
        {
            i++;
        }
    }
}


// #include <stdio.h>

// int main(void)
// {
//     int arr[] = {5, 2, 3, 1, 4};
//     int size = 5;
//     int i;

//     ft_sort_int_tab(arr, size);

//     for (i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }
