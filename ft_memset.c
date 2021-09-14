/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junylee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 14:48:23 by junylee           #+#    #+#             */
/*   Updated: 2021/05/05 18:14:57 by junylee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t size)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)ptr;
	while (size-- > 0)
	{
		*tmp++ = value;
	}
	return (ptr);
}
