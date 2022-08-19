/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 13:03:46 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/08/02 12:06:54 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_recursive_factorial(int nb)

{
	if (nb < 0)
		return (0);
	if (nb > 1)
		return (nb * ft_recursive_factorial(nb -1));
	return (1);
}
/*#include<stdio.h>
int main()
{
	printf("%d\n",ft_recursive_factorial(10));
	printf("%d\n",ft_recursive_factorial(0));
	printf("%d\n",ft_recursive_factorial(-123));
	return 0;	
}*/
