#include <stdio.h>
char *ft_strncpy(char *dest, char *src,unsigned int n)
{
    int i = 0;
    while(src[i] != '\0')
    {
        if(i < n)
        {
            dest[i] = src[i];
        }
         i++;
    }
    dest[i] = '\0';
    return(dest);
}
 void main ()
 {
      char a[12];
   char b[12] = "hello world";
   ft_strncpy(a,b,4);
   printf("%s\n",a);
 }
