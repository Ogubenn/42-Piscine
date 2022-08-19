/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:27:15 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/08/02 15:18:54 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	a;

	a = 2;
	if (nb < 2)
		return (0);
	while (a < nb)
	{
		if (nb % a == 0)
			return (0);
		a++;
	}
	return (1);
}
/*#include<stdio.h>
int main()
{
	printf("%d\n",ft_is_prime(18));
	printf("%d\n",ft_is_prime(109));
	printf("%d\n",ft_is_prime(16));
	printf("%d\n",ft_is_prime(49));
	printf("%d\n",ft_is_prime(121));
	return 0;
}*/
