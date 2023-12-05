#include <stdio.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	while (src[count] != '\0')
		++count;
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (count);
}
void main()
{
    char a[] = "yassin lahssini12345";
    char b[10];
    int c = ft_strlcpy(b,a,20);
    printf("%s\n",b);
    printf("%d\n",c);
}