/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:59:06 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/07/28 15:13:11 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	say;

	say = 0;
	while (str[say] != '\0')
	{
		say++;
	}
	return (say);
}

char	*ft_strcat(char *dest, char *src)

{
	int		a;
	int		b;

	a = 0;
	b = ft_strlen(dest);
	while (src[a] != '\0')
	{
		dest[a + b] = src[a];
		a++;
	}
	dest[a + b] = '\0';
	return (dest);
}
/*#include <stdio.h>
int main()
{
	char *t;
	char a[30] = "og";
	char b[30] = "durkan";
	t = ft_strcat(a, b);
	printf("%s\n", a);
	return (0);
}*/
