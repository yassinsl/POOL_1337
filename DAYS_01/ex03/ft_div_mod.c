#include <stdio.h>
#include <unistd.h>
void ft_div_mod(int a, int b, int *div, int *mod)
{
    if(b != 0)
    {
        *div = a/b;
        *mod = a % b;
    }
    else
    {
        write(1,"error\n",6);
    }
}
int main(void)
{
    int a = 10;
    int b = 5;
    int r,d;
    ft_div_mod( a, b,&d,&r);
    printf("d = %d, r = %d\n",d,r);
}