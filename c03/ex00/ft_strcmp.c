/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:20:12 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/07/28 14:32:27 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	l;

	l = 0;
	while ((s1[l] == s2[l]) && (s1[l] != '\0') && (s2[l] != '\0'))
		l++;
	return (s1[l] - s2[l]);
}
/*#include<stdio.h>
int main()

{
	char s1[] = "yata";
	char s2[] = "yat";

	printf("%d",ft_strcmp(s1,s2));
}*/
