/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:10:17 by abhimi            #+#    #+#             */
/*   Updated: 2024/10/31 11:29:41 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	sl;
	size_t	dl;

	sl = ft_strlen(src);
	dl = ft_strlen(dst);
	if (dstsize <= dl)
		return (sl + dstsize);
	i = 0;
	while (src[i] != '\0' && i + dl < dstsize - 1)
	{
		dst[i + dl] = src[i];
			i++;
	}
	dst[i + dl] = '\0';
	return (sl + dl);
}
