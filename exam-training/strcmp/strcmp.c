#include<unistd.h>
//#include<stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	int a= 0;
	while ((s2[a] == s1[a]) && (s2[a] != '\0') && (s1[a] != '\0'))
		a++;
		return (s1[a] - s2[a]);
}
/*int main()
{
	char a[] = "Nazlib";
	char b[] = "Nazlia";
	printf("%d\n",ft_strcmp(a,b));
	return 0;
}*/
