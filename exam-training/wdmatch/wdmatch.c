#include <unistd.h>

int	ft_len(char *a)
{
	int	i;

	i = 0;
	while (a[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr(char *b)
{
	int	j;
	
	j = 0;
	while (b[j] != '\0')
	{
		write (1, &b[j], 1);
		j++;
	}
}

int main(int c, char **a)
{
	int	x;
	int	y;
	int	k;

	x = 0;
	y = 0;
	k = 0;

	if (c == 3)
	{
		while(a[1][x] != '\0')
		{
			while(a[2][y] != '\0')
			{
				if (a[1][x] == a[2][y])
				{
					k++;
					break;
				}
				y++;
			}
			x++;
		}
		if (k == ft_len(a[1]))
		{
			ft_putstr(a[1]);
		}
	}
	write (1, "\n", 1);
	return (0);
}
