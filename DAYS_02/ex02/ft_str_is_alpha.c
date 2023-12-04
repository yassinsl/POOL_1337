#include <stdio.h>
int ft_str_is_alpha(char *str)
{
    int i = 0,j = 0;
    if(str == NULL)
    return (1);

        while(str[i])
        {
            if((str[i] <'a' || str[i] >'z') && (str[i] < 'A' || str[i] > 'Z'))
                j++;
            i++;
        }
        if(j == 0)
        return (1);
        else
        return (0);
}
void main(void)
{
     char a[110] = "hellowor4ld";
    char b[100] = "hellowoorld";
    int c,d;
    c =  ft_str_is_alpha(a);
     d =  ft_str_is_alpha(b);
    printf("%d\n",c);
    printf("%d\n",d);
}