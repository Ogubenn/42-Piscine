/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 19:00:19 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/08/09 19:00:41 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *a)
{
	int	i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;
	int		len;

	i = 0;
	len = ft_strlen(src);
	dest = (char *) malloc (sizeof(char) * (len + 1));
	if (dest == NULL)
		return (0);
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*def;

	i = 0;
	def = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (def == NULL)
		return (NULL);
	while (i < ac)
	{
		def[i].size = ft_strlen(av[i]);
		def[i].str = av[i];
		def[i].copy = ft_strdup(av[i]);
		i++;
	}
	def[i] = (t_stock_str){0, 0, 0};
	return (def);
}
