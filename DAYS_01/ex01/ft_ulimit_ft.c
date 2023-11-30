#include <stdio.h>
void ft_ultimate_ft(int *********nbr)
{
    if(nbr != NULL)
    *********nbr = 42;
}
int main (void)
{
    int a = 0;
    int *p = &a;
    int **p2 = &p;
    int ***p3 = &p2;
    int ****p4 = &p3;
    int *****p5 = &p4;
    int ******p6 = &p5;
    int *******p7 = &p6;
    int ********p8 = &p7;
    ft_ultimate_ft(&p8);
    printf("%d\n",a);
}