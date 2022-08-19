#include <unistd.h>

void	ft_no_double(char *str)
{
	int	i;
	int	k;

	i = 0;
	while (str[i] != '\0')
	{
		k = i +1;
		while (str[k] != '\0')
		{
			if (str[i] == str[k])
			{
				i--;
				while (str[k + 1] != '\0')
				{
					str[k] = str [k + 1];
					k++;
				}
				str[k] = '\0';
			}
			k++;
		}
		i++;
	}
}
void	ft_search(char *a, char *b)
{
	int	i;
	int	j;

	i = 0;
	while (a[i] != '\0')
	{
		j = 0;
		while (b[j] != '\0')
		{
			if (a[i] == b[j])
			{
				write(1, &a[i], 1);
				break;
			}
			j++;
		}
		i++;
	}
}	
/*int	main(int c, char **a)
{
	int	i;
	
	i = 0;
	ft_no_double(a[1]);
	ft_search(a[1], a[2]);
	return (0);
}*/

