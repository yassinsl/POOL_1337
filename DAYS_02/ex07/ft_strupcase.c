#include <stdio.h>
char *ft_strupcase(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        str[i] -= 32;
        i++;
    }
    str[i] = '\0';
    return str; 
}
int main(void)  
{
        char a1[] ="helloworld";
        char a2[] ="YASSINlahssini";
        char *up1 = ft_strupcase(a1);
        char *up2 = ft_strupcase(a2);
        printf("%s\n", up1);    
        printf("%s\n", up2);    
        return(0);
}