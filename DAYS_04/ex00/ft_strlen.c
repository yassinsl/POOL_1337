
int ft_strlen(char *str)
{
	int i;
	i = 0;
		
		while(str[i] != '\0')
		i++;

		return(i);
}
#include <stdio.h>
int main (void)
{
	char a[] = "yassin";
	int i = ft_strlen(a);
	printf("%d\n",i);


	return (0);
}
