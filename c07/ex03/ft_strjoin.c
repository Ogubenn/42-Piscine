/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 14:29:15 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/08/07 15:06:54 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		c;

	s = malloc(sizeof(strs));
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			s[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			s[c++] = sep[j++];
		}
		i++;
	}	
	s[c] = '\0';
	return (s);
}
/*#include<stdio.h>
int	main(void)
{
	char	*tab[5];
	tab[0] = "nazli";
	tab[1] = "tyru";
	tab[2]	= "tytert";
	tab[3] = "sadas";
	tab[4] = "asd";
	printf("%s", ft_strjoin(5, tab, "ogubenn"));
	return (0);
}*/
