/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:49:52 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/08/03 13:40:06 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_iterative_factorial(int nb)
{
	int		res;

	res = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	while (nb > 0)
	{
		res *= nb;
		nb--;
	}
	return (res);
}
/*#include<stdio.h>
int main()
{
	printf("%d\n",ft_iterative_factorial(10));
	printf("%d\n",ft_iterative_factorial(-3));
	printf("%d\n",ft_iterative_factorial(0));
	return 0;
}*/
