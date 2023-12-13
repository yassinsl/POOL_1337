#include <unistd.h>
#include <stdio.h>
void ft_putstr(char *str)
{
	int i = 0;
	while(str[i])
	{
		write(1,&str[i],1);
		i++;
	}
		write(1,"\n",1);
}
void main (void)
{
	char a[] = "GOOD NIEGHT WORLD";
	ft_putstr(a);
}
