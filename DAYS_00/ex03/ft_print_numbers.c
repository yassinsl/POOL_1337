#include <unistd.h>
#include <stdio.h>
void ft_print_numbers(void);

int main (void)
{
 ft_print_numbers();
 return(0);
}
void ft_print_numbers(void)
{
    char a;
    for (a = '0';a <= '9';a++)
    {
        write(1,&a,1);
    }
        write(1,"\n",1);
}