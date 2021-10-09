/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:04:33 by mkoyamba          #+#    #+#             */
/*   Updated: 2021/10/09 17:33:15 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*follow;
	t_list	*temp;

	if (!lst || !*lst)
		return ;
	follow = (*lst)->next;
	del(*lst);
	free(*lst);
	while (follow)
	{
		temp = follow->next;
		del(follow);
		free(follow);
		follow = temp;
	}
	*lst = NULL;
}
