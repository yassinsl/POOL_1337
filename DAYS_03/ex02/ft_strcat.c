#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
int i = 0,
	j = 0;

	while(dest[i] != '\0')
	i++;
	while(src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
int main (void)
{
	char a[] = "yassin";
	char b[] = "lahssini";
	printf(" %s\n",ft_strcat(a,b));
	return (0);
}
