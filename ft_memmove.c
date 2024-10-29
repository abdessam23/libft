/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:42:08 by abhimi            #+#    #+#             */
/*   Updated: 2024/10/29 20:30:08 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*p;
	const unsigned char	*s;
	int					i;

	i = 0;
	p = (unsigned char *) dst;
	s = (const unsigned char *)src;
	if (!p && !s)
		return (NULL);
	if (p > s)
	{
		while (len > 0)
		{
			p[len - 1] = s[len - 1];
			len--;
		}
	}
	else
		while (i < len)
			p[i++] = s[i++];
	return (dst);
}
