/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 15:24:27 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/07/27 17:53:08 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int		h;

	h = 0;
	while (str[h] != '\0')
	{
		if ((str[h] >= 'a') && (str[h] <= 'z'))
			str[h] -= 'a' - 'A';
		h++;
	}
	return (str);
}
/*#include<stdio.h>
 * int    main()
{
    char str[] = "abcdefghj";
    printf("%s", ft_strupcase(str));
}*/
