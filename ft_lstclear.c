/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junylee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 12:18:38 by junylee           #+#    #+#             */
/*   Updated: 2021/05/11 13:06:16 by junylee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ele;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		ele = *lst;
		*lst = ele->next;
		ft_lstdelone(ele, del);
	}
	*lst = NULL;
}
