#include <stdio.h>
int ft_str_is_numeric(char *str)
{
    int i,j = 0;
    i = 0;
    if(str == NULL) return(1);
   
         while(str[i])
    {
        if(str[i] < '0' || str[i] > '9')
        {
         j++;
        }
            i++;
    }
    
    if(j != 0)
    return(0);
else
     return(1);
}
void main()
{
    char a[10]= "12345678";
    char b[10]= "hell111";
    int a1 = ft_str_is_numeric(&a[0]);
   int b1 = ft_str_is_numeric(&b[0]);
   printf("%d\n", a1);
   printf("%d\n", b1);

}
