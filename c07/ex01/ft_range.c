/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 12:26:39 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/08/07 15:29:46 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int		*sayi;
	int		i;

	i = 0;
	if (min >= max)
		return (0);
	sayi = (int *)malloc(sizeof(int) * (max - min));
	if (sayi == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		sayi[i] = min;
		i++;
		min++;
	}
	return (sayi);
}
/*#include <stdio.h>
int main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;
	min = 10;
	max = 999;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}*/
