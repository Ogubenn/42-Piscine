#include<unistd.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int a= 0;
	while (s2[a])
	{
		s1[a] = s2[a];
		a++;
	}
	s1[a] = '\0';
	return s1;
}
/*#include<stdio.h>
int main()
{
	char a[]= "Nazli";
	char b[] = "ogu";
	printf("%s\n",ft_strcpy(a,b));
	return 0;
}*/
