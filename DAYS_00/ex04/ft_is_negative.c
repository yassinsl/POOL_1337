#include <unistd.h>
void ft_is_negative(int n);
int main(void)
{
    int a = 10;
 ft_is_negative(a);
 ft_is_negative(-4);
}
void ft_is_negative(int n)
{
     char b = 'P',c = 'N';
    if(n >= 0)
    {
       write(1,&b,1);
    }
    else
    {
       write(1,&c,1);
    }
     write(1,"\n",1);
}