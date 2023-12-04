#include <unistd.h>
void ft_putnbr(int nb);
void ft_putchar(char c)
{
    write(1,&c,1);
}
int main (void)
{
ft_putnbr(10000);
 ft_putchar('\n');
}
void ft_putnbr(int nb)
{
  if (nb >= 0 && nb <= 9)
  ft_putchar(nb + 48);
  else if (nb < 0)
  {
    ft_putchar('-');
     ft_putnbr(-nb);
  }
  
  else if (nb >= 10)
  {
     ft_putnbr(nb /10);
     ft_putnbr(nb % 10);

  }
}