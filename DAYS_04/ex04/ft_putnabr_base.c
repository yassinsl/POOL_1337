#include <unistd.h>
void	ft_putchar(char c)
{
	write(1,&c,1);

}

int	error(char *str)
{
	int	i;
	int	j;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	else
	return (i);
}

void	display(int nb, char *str, unsigned int str_length)
{
	unsigned int	nbr;

	if (nb < 0)
	{
		ft_putchar('-');
		nbr = nb * -1;
	}
	else
		nbr = nb;
	if (nbr >= str_length)
		display(nbr / str_length, str, str_length);
	ft_putchar(str[nbr % str_length]);
}

void	ft_putnbr_base(int nb, char *str)
{
	unsigned int	str_length;

	str_length = 0;
	str_length = error(str);
	if (!str_length)
		return ;
	if(nb >= 0)
	display(nb, str, str_length);
	else if(nb < 0)

}
int main ()
{
	int a =-10;
	char b[] ="01";
	ft_putnbr_base(a,b);

}
