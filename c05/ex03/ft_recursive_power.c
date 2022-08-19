/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:14:13 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/08/03 13:42:49 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	say;

	say = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (say);
}

/*#include<stdio.h>
int main()
{
	printf("%d\n",ft_recursive_power(5,3));
	printf("%d\n",ft_recursive_power(0,3));
	return 0;
}*/
