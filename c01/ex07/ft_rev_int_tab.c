/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 15:47:53 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/07/24 16:32:33 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	a;

	a = 0;
	while (a < size -1)
	{
		temp = tab[a];
		tab[a] = tab[size - 1];
		tab[size - 1] = temp;
		size--;
		a++;
	}
}
