/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junylee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 15:03:29 by junylee           #+#    #+#             */
/*   Updated: 2021/05/09 18:18:19 by junylee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t num)
{
	unsigned char *x;

	x = dest;
	if (!dest && !source)
		return (NULL);
	while (num-- > 0)
	{
		*x++ = *(unsigned char*)source++;
	}
	return (dest);
}
