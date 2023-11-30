#include <stdio.h>
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
int main (void)
{
    int a;
    char str[] = "hello world";
    a = ft_strlen(str);
    printf("%d\n", a);

}