#include<unistd.h>

int main(int ac, char **av)
{
	int a=0;
	if (ac > 1)
	{
		while (av[1][a])
		{
			write(1, &av[1][a], 1);
			a++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}
