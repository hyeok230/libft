/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junylee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:59:01 by junylee           #+#    #+#             */
/*   Updated: 2021/05/09 18:44:50 by junylee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;

	if (!dest && !src)
		return (NULL);
	if (dest == src || !len)
		return (dest);
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (dest > src)
	{
		while (len-- > 0)
		{
			*(d + len) = *(s + len);
		}
	}
	else
	{
		while (len-- > 0)
		{
			*d++ = *s++;
		}
	}
	return (dest);
}
