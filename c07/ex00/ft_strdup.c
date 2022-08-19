/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 11:48:26 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/08/06 12:12:00 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		uzun;
	int		i;
	char	*dest;

	uzun = 0;
	i = 0;
	while (src[uzun] != '\0')
		uzun++;
	dest = (char *)malloc(sizeof(char) * (uzun + 1));
	if (dest == NULL )
		return (0);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include<stdio.h>
int main()
{
	char a[] = "nazli";
	ft_strdup(a);
	printf("%s\n",a);
	return 0;
}*/
