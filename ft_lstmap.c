/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:18:00 by abhimi            #+#    #+#             */
/*   Updated: 2024/11/02 11:40:48 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*l;

	l = malloc(sizeof(t_list) * ft_lstsize(lst));
	if (!l)
		return (NULL);
	while (lst)
	{
		l = f(list->content);
		del(list->content);
		lst = lst->next;
	}
	return (l);
}
