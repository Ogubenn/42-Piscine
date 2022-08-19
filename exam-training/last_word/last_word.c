#include<unistd.h>

int main(int ac, char **av)
{
	int a = 0;
	if (ac >= 2)
	{
		ac--;
		while (av[ac][a])
		{
			write(1, &av[ac][a], 1);
			a++;
		}
	}
	write(1,"\n", 1);
	return 0;
}
