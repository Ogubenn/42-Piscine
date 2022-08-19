/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:13:24 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/07/21 12:20:33 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)

{
	write(1, &x, 1);
}

void	ft_print_reverse_alphabet(void)

{
	char	ogu;

	ogu = 'z';
	while (ogu >= 'a')
	{
		ft_putchar(ogu);
		ogu--;
	}
}
