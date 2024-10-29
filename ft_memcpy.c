/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:29:10 by abhimi            #+#    #+#             */
/*   Updated: 2024/10/22 16:37:04 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t i;
	i = 0;
	unsigned char *p = (unsigned char char *)dst;
	unsigned char *s = (unsigned char *) src;
	while (i < n)
	{
		p[i] = s[i];
		i++;
	}
	return dst;
} 
