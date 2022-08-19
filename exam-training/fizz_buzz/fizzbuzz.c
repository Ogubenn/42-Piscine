#include<unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}
void	ft_nazli(int nbr)
{
	if (nbr <= 9)
		ft_putchar(nbr + 48);
	else
	{
		ft_nazli(nbr / 10);
		ft_nazli(nbr % 10);
	}
}
void fizzbuzz(void)

{
	int a=1;
	while (a <= 100)
	{	
		if (a % 3 == 0 && a % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if(a % 3 == 0)
			write(1, "fizz", 4);
		else if(a % 5 == 0)
			write (1, "buzz", 4);
		else
			ft_nazli(a);
		a++;
		write(1,"\n", 1);
	}
}
int main(void)
{
	fizzbuzz();
	return 0;
}
