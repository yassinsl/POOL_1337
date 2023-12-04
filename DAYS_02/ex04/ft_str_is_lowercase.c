#include <stdio.h>
int ft_str_is_lowercase(char *str)
{
    
    int i = 0,j = 0;
    
    if (str == NULL)
    return (1);
else    
{
    while(str[i] != '\0')
    {
        if(str[i] < 'a' || str[i] > 'z')
           j++;
        i++;
    }
    if(j == 0)
        return(1);
        else
        return(0);
}
        
}
void main()
{
    char a[] = "yassinlahssini";
    char b[] = "YASSINLAHSSSINI";
    int n1 = ft_str_is_lowercase(a);
    int b1 = ft_str_is_lowercase(b);
printf("%d\n", n1);
printf("%d\n", b1);
}