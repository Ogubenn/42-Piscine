/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:54:35 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/07/27 17:49:09 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*#include < stdio.h>
 * int    main()
{
    char src[] = "Hello";
    char dest[] = "World1";
    char dest1[] = "World2";

    printf("%s", ft_strncpy(dest, src, 3));
    printf("\n%s", ft_strncpy(dest, src, 5));
    printf("\n%s", ft_strncpy(dest, src, 7));
}*/
