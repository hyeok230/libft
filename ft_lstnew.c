/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junylee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 20:58:32 by junylee           #+#    #+#             */
/*   Updated: 2021/05/10 21:21:05 by junylee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ret;

	if (!(ret = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	ret->content = content;
	ret->next = NULL;
	return (ret);
}
