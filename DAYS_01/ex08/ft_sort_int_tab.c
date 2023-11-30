#include <stdio.h>
void ft_swap(int *a, int *b)
{
    int ptr;
    ptr = *a;
    *a = *b;
    *b = ptr;
}
void ft_sort_int_tab(int *tab, int size)
{
    int  i = 0,j =0,min;
    while(i < size - 1)
    {
        min = i;
        j = i + 1;
        while(j < size)
        {
            if(tab[j] < tab[min])
            min = j;
        j++;
        }
        if(min != i)
        ft_swap(&tab[i], &tab[min]);
        i++;
    }
}
int main(void)
{
    int a[10] ={10,7,3,5,4,9};
    ft_sort_int_tab(&a[0],6);

    for(int i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}