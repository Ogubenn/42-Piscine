/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ultstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:05:29 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/08/08 13:11:14 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int main(int argc, char **argv)
{
	int a;
	char b;
	a = 0;
	if (argc == 2)
	{
		while (argv[1][a])
		{
			b = argv[1][a];	
			if (argv[1][a] <= 'A' && argv[1][a] >= 'Z')
				b += 32;
			if (argv[1][a] <= 'a' && argv[1][a] >= 'z')
				b -= 32;
			write(1,&b,1);
			a++;
		}
	}
	write(1,"\n", 1);
	return 0;
}
