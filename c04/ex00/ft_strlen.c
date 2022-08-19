/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 11:01:49 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/07/30 11:12:21 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strlen(char *str)
{
	int		p;

	p = 0;
	while (str[p] != '\0')
	{
		p++;
	}
	return (p);
}
/*#include<stdio.h>
int	main()
{
	char a[] = "nazlı";
	printf("%d",ft_strlen(a));
}*/
