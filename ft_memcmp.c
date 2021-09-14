/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junylee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 21:03:08 by junylee           #+#    #+#             */
/*   Updated: 2021/05/05 21:13:32 by junylee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *t1;
	unsigned char *t2;

	if (!n)
		return (0);
	t1 = (unsigned char *)s1;
	t2 = (unsigned char *)s2;
	while (n-- > 0)
	{
		if (*t1 - *t2 != 0)
			return (*t1 - *t2);
		t1++;
		t2++;
	}
	return (0);
}
