/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:54:14 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/08/03 13:45:58 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	tut;
	int	cikar;

	if (nb < 0)
		return (0);
	tut = 0;
	cikar = 1;
	while (nb > 0)
	{
		nb -= cikar;
		cikar += 2;
		tut++;
	}
	if (nb == 0)
		return (tut);
	else
		return (0);
}
/*#include"stdio.h"
int main()
{
	printf("%d\n",ft_sqrt(64));
	printf("%d\n",ft_sqrt(0));
	printf("%d\n",ft_sqrt(-81));
	printf("%d\n",ft_sqrt(231));
	return 0;
}*/
