/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 10:38:27 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/07/27 20:52:30 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)

{
	int	c;

		c = 0;
	while (src[c] != '\0')
	{
			dest[c] = src[c];
			c++;
	}
		dest[c] = '\0';
	return (dest);
}
/*#include <stdio.h>
int    main()
{
    char src[] = "beautiful";
    char dest[] = "Wo";
    printf("%s", ft_strcpy(dest, src));

}*/
