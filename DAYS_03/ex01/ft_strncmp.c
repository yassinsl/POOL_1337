#include <stdio.h>
int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i = 0 , j = 0;

	while(s1[i] && s2[i] &&  i < n)
	{
		if(s1[i] != s2[i])
		{
			j =	 s1[i] - s2[i];
			break;
		}
		i++;
	}
	return(j);
}
int main ()
{
	char a[] = "yassinlahssini";
	char b [] = "yassinlahssini";

	int j = ft_strncmp(a,b,14);
	printf("value is %d\n",j);

}
