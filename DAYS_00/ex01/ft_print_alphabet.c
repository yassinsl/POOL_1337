#include <stdio.h>
#include <unistd.h>
void ft_print_alphabet(void);
int main (void)
{
    ft_print_alphabet();
    return (0);
}
void ft_print_alphabet(void)
{
    char alphabet = 'a';
    for (alphabet = 'a'; alphabet<= 'z'; alphabet++)
    {
        write(1, &alphabet,1);
    }
    write(1,"\n",1);
}
