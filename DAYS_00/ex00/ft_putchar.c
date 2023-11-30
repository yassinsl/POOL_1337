#include <unistd.h>
#include <stdio.h>
void ft_putchar(char c);
int main (void)
{
 char ch;

    printf("please enter one character :");
    scanf("%c",&ch);
     ft_putchar(ch);
     return (0);
}
void ft_putchar(char c)
{
    write(1,&c,1);
    write(1,"\n",1);
}
