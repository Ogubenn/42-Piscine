/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:34:35 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/07/27 17:50:21 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] < '0') || (str[a] > '9'))
			return (0);
		a++;
	}
	return (1);
}
/*#include<stdio.h>
 * int    main()
{
    printf("%d", ft_str_is_numeric("01948987493"));
    printf("\n%d", ft_str_is_numeric("0484882j8995489"));
    printf("\n%d", ft_str_is_numeric("-_jsdsdc67sdlkc,"));
}*/
