/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:05:18 by abhimi            #+#    #+#             */
/*   Updated: 2024/10/24 09:34:55 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char b;
	int i;
	
	b = (char) c;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == b)
			return ((char *) s+i);
		i--;
	}
	if (s[i] == '\0')
			return ((char *) s+i);
	return  (NULL);
}
