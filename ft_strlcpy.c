/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:18:14 by abhimi            #+#    #+#             */
/*   Updated: 2024/10/24 11:43:51 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	int i;
	size_t sl;

	i = 0;
	sl = ft_strlen(src);
	if (dstsize == 0)
		return (sl);
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (sl);
}

int main()
{
	char s[] = "hello world ";
	char d[6] = "hello";
	size_t t = ft_strlcpy(d,s,sizeof(d));
	printf("%s\n",d);
	printf("%zu",t);
}
