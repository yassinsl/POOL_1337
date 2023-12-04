#include <stdio.h>
int ft_str_is_uppercase(char *str)
{
    if (str == NULL)
    return(1);
        else
        {
            int i = 0,j = 0;
            while(str[i] != '\0')
            {
                if(str[i] < 'A' || str[i] > 'Z')
                j++;
            i++;
            }
            if(j != 0)
            return(0);
            else
            return (1);
        }
}
void main()
{
      char a[] = "yassinlahssin53iA";
    char b[] = "YASSINLAHSSSINI";
    int c = ft_str_is_uppercase(a);
    int d = ft_str_is_uppercase(b);
         printf("%d\n",c);
    printf("%d\n",d);
}