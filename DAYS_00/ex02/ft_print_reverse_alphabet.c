#include <stdio.h>
#include <unistd.h>
void ft_print_reverse_alphabet(void);
int main(void)
{
 ft_print_reverse_alphabet();
 return (0);
}
void ft_print_reverse_alphabet(void)
{
    char rev = 'z';
    while(rev >='a')
    {
        write(1,&rev,1);
         rev--;
    }
     write(1,"\n",1);
}