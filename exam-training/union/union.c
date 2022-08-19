#include <unistd.h>

void ft_putstr(char *a)
{
	int	i;

	i = 0;
	while (a[i] != '\0')
	{
		write (1, &a[i], 1);
		i++;
	}
}

void	ft_nd(char *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		j = i + 1;
		while (s[j] != '\0')
		{
			if (s[i] == s[j])
			{
				i--;
				while (s[j] != '\0')
				{
					s[j] = s[j + 1];
					j++;
				}
				s[j] = '\0';
			}
			j++;
		}
		i++;
	}
}

int	ft_src(char a, char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == a)
			return (1);
		i++;
	}
	return (0);
}
int main (int c, char **a)
{
	int	i;

	i = 0;
	if (c == 3)
	{
		ft_nd(a[1]);
		ft_nd(a[2]);
		ft_putstr(a[1]);
		while (a[2][i] != '\0')
		{
			if (ft_src(a[2][i], a[1]) == 0)
				write(1, &a[2][i], 1);
			i++;
		}
	}
	write(1, "\0", 1);
	return(0);
}


















