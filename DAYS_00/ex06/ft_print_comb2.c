#include <unistd.h>

void ft_print_comb2(void);

int main(void)
{
    ft_print_comb2();
    return 0;
}

void ft_print_comb2(void)
{
    char i, b, c, d;
    i = '0';
    while (i <= '9')
    {
        b = '0';
        while (b <= '8')
        {
            c = '0';
            while (c <= '9')
            {
                d = '1'; 
                while (d <= '9')
                {
                    write(1, &i, 1);
                    write(1, &b, 1);
                    write(1, " ", 1);
                    write(1, &c, 1);
                    write(1, &d, 1);
                    if (i != '9' || b != '8' || c != '9' || d != '9')
                        write(1, ", ", 2);

                    d++;
                }
                c++;
            }
            b++;
        }
        i++;
    }
}
