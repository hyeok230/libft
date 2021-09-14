/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junylee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 12:21:18 by junylee           #+#    #+#             */
/*   Updated: 2021/05/05 18:16:38 by junylee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *ptr, size_t size)
{
	unsigned char *tmp;

	tmp = (unsigned char*)ptr;
	while (size-- > 0)
	{
		*tmp++ = 0;
	}
	return (ptr);
}
