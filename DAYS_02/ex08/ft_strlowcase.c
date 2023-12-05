#include <stdio.h>
char *ft_strlowcase(char *str)
{
      int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        str[i] += 32;
        i++;
    }
    str[i] = '\0';
    return str; 
}
void main()
{
     char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXY";
     char b[] = "abcdefghijklmnAJOO";
     char *c = ft_strlowcase(a);
     char *d = ft_strlowcase(b);
     printf("%s\n", c);
     printf("%s\n", d);
}