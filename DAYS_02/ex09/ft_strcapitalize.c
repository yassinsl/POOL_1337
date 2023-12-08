#include <stdio.h>
char *ft_strcapitalize(char *str)
{
    int i = 0;
    while(str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
              str[i] -= 32;
        }
            break;
    }
    while(str[i])
    {
            if (!((str[i] >= 'a' && str[i] <= 'z') ||
              (str[i] >= 'A' && str[i] <= 'Z') ||
              (str[i] >= '0' && str[i] <= '9')))
              {
                 if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
                str[i + 1] -= 32;
              }
        i++;
    }
    str[i] = '\0';
    return str;
}
void main()
{
     char a[] = "+alut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
     char *c = ft_strcapitalize(a);
     printf("%s\n", c);

}
