/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:23:18 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/07/23 14:48:55 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_print_numbers(void)

{
	char	ogu;

	ogu = '0';
	while (ogu <= '9')
	{
		ft_putchar(ogu);
		ogu++;
	}
}
