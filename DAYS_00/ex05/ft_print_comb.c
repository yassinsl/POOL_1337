#include <unistd.h>
void ft_print_comb(void);
int main(void)
{
ft_print_comb();
}
void ft_print_comb(void)
{
    char a = '0',b = '0',c = '0',d =',';
    while(a <= '9')
    { 
        b = a + 1;
        while(b <= '9')
        {
            c =b + 1;
            while(c <= '9')
            {
                if(a < b && a!= b  && b < c && b != c)
                 {
                    write(1,&a,1);
                     write(1,&b,1);
                     write(1,&c,1);
                }
                if (!(a == '7' && b == '8' && c == '9'))
                {
                    write(1, &d, 1);
                    write(1, " ", 1);
                }
                c++;
            }
            b++;
        }
        a++;
    }
    write(1, "\n", 1);
}