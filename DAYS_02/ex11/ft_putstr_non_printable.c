#include <unistd.h>

void ft_putstr_non_printable(char *str)
{
    int i,a,b;
    char hex[16] = "0123456789abcdef";
    i = 0;
    while (str[i] != '\0')
    {
        if (!(str[i] >= ' ' && str[i] <= '~'))
        {
            write(1, "\\", 1);
            a = str[i] / 16;
             b = str[i] % 16;
            write(1,&hex[a], 1);
            write(1,&hex[b], 1);
        }
        else
        {
            write(1, &str[i], 1);
        }
        i++;
    }
}

int main()
{
    char str[] = "Coucou\ntu vas bien\t?";
    ft_putstr_non_printable(str);
    write(1,"\n",1);
    return 0;
}
