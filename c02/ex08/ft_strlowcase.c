/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 15:31:46 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/07/27 17:53:42 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)

{
	int		u;

	u = 0;
	while (str[u] != '\0')
	{
		if ((str[u] >= 'A') && (str[u] <= 'Z'))
			str[u] += 'a' - 'A';
		u++;
	}
	return (str);
}
/*#include<stdio.h>
 * int    main()
{
    char str[] = "ABCDEFGH";
    printf("%s", ft_strlowcase(str));
}*/
