/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 13:11:08 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/08/01 14:11:29 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int		res;

	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
			res *= nb;
			power--;
	}
	return (res);
}
/*#include<stdio.h>
int main()
{
	printf("%d\n",ft_iterative_power(5,3));
	printf("%d\n",ft_iterative_power(6,22));
	return 0;
}*/
