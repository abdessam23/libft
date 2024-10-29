/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:51:41 by abhimi            #+#    #+#             */
/*   Updated: 2024/10/26 11:12:37 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	int		i;
	int		j;
	int		l1;
	int		l2;

	l1 = strlen(s1);
	l2 = strlen(s2);
	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	p = (char *) malloc(sizeof(char) * (l1 + l2 + 1));
	if (!p)
		return (NULL);
	while (i < l1)
		p[j++] = s1[i++];
	i = 0;
	while (i < l2)
		p[j++] = s2[i++];
	p[j] = '\0';
	return (p);
}
