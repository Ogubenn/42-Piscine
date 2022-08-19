#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main (int c, char **a)
{
	int	i;

	i = 0;
	if (c == 2)
	{
		while (a[1][i] != '\0')
		{
			if ((a[1][i] >= 'a' && a[1][i] <= 'm') || (a[1][i] >= 'A' && a[1][i] <= 'M'))
				a[1][i] += 13;
			else if ((a[1][i] >= 'n' && a[1][i] <= 'z') || (a[1][i] >= 'N' && a[1][i] <= 'Z'))
				a[1][i] -= 13;
			i++;
		}
		ft_putstr(a[1]);
		write(1, "\n", 1);
	}
	else
		write (1, "\n", 1);
	return (0);
}
