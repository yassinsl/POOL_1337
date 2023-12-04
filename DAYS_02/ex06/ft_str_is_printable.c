#include <stdio.h>
int ft_str_is_printable(char *str)
{
    if(str == NULL)
    return (1);
    else
        {
            int i = 0,j = 0;
            while(str[i])
            {
                if(str[i] < ' ' || str[i] > '~')
                j++;
                i++;
            }
            if(j != 0)
                return(0);
            else
                return(1);
        }
}
void main ()
{
    char a[] =" |}{!^%*()}";
    char b[] ="€‰£";
    int a1 = ft_str_is_printable(a);
    int b1 = ft_str_is_printable(b);
    printf("%d\n", a1);
    printf("%d\n", b1);
}