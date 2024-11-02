/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 09:38:34 by abhimi            #+#    #+#             */
/*   Updated: 2024/11/02 11:51:43 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*crnt;
	t_list	*nx;

	crnt = lst;
	if (!lst || !*lst)
		return (NULL);
	while (lst)
	{
		nx = crnt->next;
		del (crnt->content);
		ft_lstdelone (crnt);
		crnt = nx;
	}
	*lst = (NULL);
}
