#include <stdio.h>
void ft_swap(int *a, int *b)
{
    int ptr;
    ptr = *a;
    *a = *b;
    *b = ptr;
}
int main (void)
{
    int a = 10,b =11;
    ft_swap(&a, &b);
     printf("a = %d\n b = %d\n", a, b);
}