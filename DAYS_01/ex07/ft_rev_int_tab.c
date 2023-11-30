#include <stdio.h>
void ft_rev_int_tab(int *tab, int size)
{
    int i,temp;
    for (i =0; i < size/2; i++)
    {
        temp = tab[i];
        tab[i] = tab[size - 1 - i];
        tab[size - 1 - i] = temp;
    }
}
int main(void)
{
    int a[10]={0,1,2,3,4,5,6};
    ft_rev_int_tab(a,5);
    for (int i=0; i<5; i++)
    {
        printf("%d",a[i]);
    }
}
