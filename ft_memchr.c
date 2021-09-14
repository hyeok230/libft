/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junylee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 20:41:54 by junylee           #+#    #+#             */
/*   Updated: 2021/05/09 21:06:25 by junylee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	unsigned char *tmp;

	tmp = (unsigned char *)ptr;
	while (n-- > 0)
	{
		if (*tmp == (unsigned char)c)
			return (tmp);
		tmp++;
	}
	return (NULL);
}
