int ft_strlen(char *str)
{
    int i,j = 1;
    while(str[i] != '\0')
    {
        j++;
        i++;
    }
    return (j);
}
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
   unsigned int i, j;

	i = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	j = i;
	while (src[i - j] != '\0' && i < size - 1)
	{
		dest[i] = src[i - j];
		i++;
	}
	if (j < size)
		dest[i] = '\0';
	return (j + ft_strlen(src));
}
#include <stdio.h>
void main ()
{
	char a[] = "yassin";
	char b[] = "lahssini";
	unsigned int aa = ft_strlcat(a,b,15);
		printf("%d\n",aa);
		printf("%s\n",a);
		
}