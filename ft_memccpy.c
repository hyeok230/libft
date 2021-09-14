/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junylee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 17:32:56 by junylee           #+#    #+#             */
/*   Updated: 2021/05/11 14:34:13 by junylee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	int		flag;

	if (!dest && !src)
		return (NULL);
	i = 0;
	flag = 0;
	while (i < n && !flag)
	{
		if (((unsigned char *)src)[i] == (unsigned char)c)
			flag = 1;
		i++;
	}
	if (flag == 1)
	{
		ft_memcpy(dest, src, i);
		return (dest + i);
	}
	else
	{
		ft_memcpy(dest, src, n);
		return (NULL);
	}
}
