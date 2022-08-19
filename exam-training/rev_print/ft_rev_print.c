#include<unistd.h>

int	ft_strlen(char *str)
{
	int	i;
	i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}
char	*ft_rev_print(char *str)
{
	int a= 0;
	int b = ft_strlen(str);
	b--;
	while (b >= a)
	{
		write(1, &str[b], 1);
		b--;
	}
	return str;
}
/*#include<stdio.h>
int main()
{
	char a[] ="nazliiikalppkeeee";
	ft_rev_print(a);
	return 0;
}*/
