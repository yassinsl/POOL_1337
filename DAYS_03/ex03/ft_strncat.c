#include <stdio.h>
char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i = 0,
	j = 0;

	while(dest[i] != '\0')
	i++;
	while(src[j] != '\0' && j < nb)
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
	printf("%s\n",ft_strncat(a,b,5));
	return (0);
}
