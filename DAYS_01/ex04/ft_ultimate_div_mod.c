#include <stdio.h>
void ft_ultimate_div_mod(int *a, int *b)
{
	int result = *a;
		
		if(*b != 0)
		{
		 *a = result / *b;
		  *b = result % *b;
		}

}
int main (void)
{
	int a =10;
	int b = 3;
  ft_ultimate_div_mod(&a,&b);
      printf("%d %d\n",a,b);

}

