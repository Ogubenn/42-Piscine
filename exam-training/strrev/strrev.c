#include<unistd.h>
int	ft_strlen(char *str)
{
	int a= 0;
	while (str[a])
		 a++;
	return (a);
}

char	*ft_strrev(char *str)
{
	char tut;
	int a=0;
	int b = ft_strlen(str) - 1;
	while(a < b)
	{
			tut = str[b];
			str[b] = str[a];
			str[a] = tut;
			b--;
			a++;
	}
	return (str);
}
/*#include<stdio.h>
int main()
{
	char a[] = "Nazliii";
	printf("%s\n",ft_strrev(a));
	return 0;
}*/
