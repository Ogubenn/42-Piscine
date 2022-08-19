/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:47:56 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/07/27 17:51:16 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)

{
	int	d;

	d = 0;
	while (str[d] != '\0')
	{
		if ((str[d] < 'a') || (str[d] > 'z'))
			return (0);
		d++;
	}
	return (1);
}
/*#include <stdio.h>
 * int    main()
{
    printf("%d", ft_str_is_lowercase("abcdefghijkl"));
        printf("\n%d", ft_str_is_lowercase("abcAdefghijkl"));
        printf("\n%d", ft_str_is_lowercase("-_134556efSghij67"));
}*/
