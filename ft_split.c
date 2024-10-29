/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:30:13 by abhimi            #+#    #+#             */
/*   Updated: 2024/10/27 20:17:38 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(char const *str, char c)
{
	int	countw;

	countw = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str)
			countw++;
		while (*str != c && *str)
			str++;
	}
	return (countw);
}

void	ft_fill(char *dst, char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
	{
		dst[i] = str[i];
		i++;
	}
	dst[i] = '\0';
}

void	ft_allocat(char **tab, char const *str, char c)
{
	int	i;
	int	count;
	int	j;

	i = 0;
	j = 0;
	while (str[j])
	{
		count = 0;
		while (str[j + count] && str[count + j] != c)
			count++;
		if (count > 0)
		{
			tab[i] = malloc(sizeof(char) * (count + 1));
			if (!tab)
				return ;
			ft_fill(tab[i], (str + j), c);
			i++;
			j = j + count;
		}
		else
			j++;
	}
	tab[i] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	cword;

	cword = count_word(s, c);
	arr = malloc(sizeof(char **) * (cword + 1));
	if (!arr)
		return (NULL);
	ft_allocat(arr, s, c);
	return (arr);
}
