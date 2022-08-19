/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 11:44:27 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/07/31 11:55:04 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size >= 0)
	{
		i = 0;
		while (i < size -1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}
/* #include<stdio.h>
int	main()
{
	int tab[6] = {7, 6, 3, 4, 2, 5};
	int size = 6;
	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d", tab[0],
   	tab[1], tab[2], tab[3], tab[4], tab[5]);
}*/
