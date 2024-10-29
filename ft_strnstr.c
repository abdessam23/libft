/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:22:22 by abhimi            #+#    #+#             */
/*   Updated: 2024/10/24 17:30:44 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strnstr(const char *haystack, const char *needle,size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);

	while (haystack[i] != '\0'  && i < len )
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i+j] == needle[j] && i+j < len)
			j++;
		if (needle != '\0')
			return ((char *) haystack + j);
		i++;
	}
	j = 0;
	return (NULL);
}