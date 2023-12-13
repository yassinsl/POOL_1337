int ft_atoi(char *str)
{
	int i = 0 ,j = 0,negative = 0;
		while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
		++i;
	if (str[i] == '-') 
	{
        negative = 1;
        ++i;
    } 
	else if (str[i] == '+') 
        ++i;
	
	while(str[i])
	{
		if(str[i] >= '0' && str[i] <= '9')
		j = j * 10 + str[i] - '0';
		i++;
	}
	 if (negative) 
        return -j;
	else 
        return j;
}
#include <stdio.h>
int main (void)
{
	char a[] = "--1234ab567";
	int b = ft_atoi(a);
	printf("%d\n",b);

}
