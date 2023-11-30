#include <stdio.h> 
#include <unistd.h> 


void ft_ft(int *nbr)
{
    if(nbr != NULL)
    *nbr = 42;
    else
    write(1 , "error",6);
}
int main(void)
{
    int a = 0;
    ft_ft(&a);
    printf("a = %d\n", a);
    return(0);
}
