/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:08:38 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/08/11 16:09:29 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char c, char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_wordlen(char *str, char *charset)
{
	int	len;

	len = 0;
	while (str[len] && !(is_charset(str[len], charset)))
		len++;
	return (len);
}

int	ft_countlen(char *str, char *charset)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] != '\0' && is_charset(str[i], charset))
			i++;
		if (str[i] != '\0')
			len++;
		while (str[i] && !(is_charset(str[i], charset)))
			i++;
	}
	return (len);
}

char	*ft_putword(char *str, char *charset)
{
	int		i;
	int		len_word;
	char	*word;

	i = 0;
	len_word = ft_wordlen(str, charset);
	word = (char *)malloc(len_word + 1);
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**finaltab;
	int		i;
	int		len_arrays;

	i = 0;
	len_arrays = ft_countlen(str, charset) + 1;
	finaltab = (char **)malloc(sizeof(char *) * len_arrays);
	if (!finaltab)
		return (0);
	while (*str != '\0')
	{
		while (*str != '\0' && is_charset(*str, charset))
			str++;
		if (*str != '\0')
		{
			finaltab[i] = ft_putword(str, charset);
			i++;
		}
		while (*str && !(is_charset(*str, charset)))
			str++;
	}
	finaltab[i] = 0;
	return (finaltab);
}
