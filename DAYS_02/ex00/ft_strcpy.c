
#include <stdio.h>
char *ft_strcpy(char *dest, char *src)
{
    int i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
     
    dest[i] = '\0';

    return dest;
}
void main ()
{
   char a[12];
   char b[12] = "hello world";
   ft_strcpy(a,b);
   printf("%s\n",a);
} 