#include <stdio.h>
int ft_strcmp(char *s1, char *s2)
{
		int i = 0,j = 0;
		while(s1[i] && s2[i] )
		{
			if(s1[i] != s2[i])
			{
				j = s1[i] -  s2[i];
				break;
			}
			i++;
		}
return (j);
}
int main ()
{
		char a[] = "yassina";
		char b[] = "yassinr";
		int j = ft_strcmp(a,b);

		printf("value is %d\n",j);

return (0);
}
