/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junylee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 12:43:03 by junylee           #+#    #+#             */
/*   Updated: 2021/05/11 13:06:37 by junylee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*ele;

	if (!lst || !f)
		return (NULL);
	if (!(ret = ft_lstnew(f(lst->content))))
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		if (!(ele = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&ret, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&ret, ele);
	}
	return (ret);
}
