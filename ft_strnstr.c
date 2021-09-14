/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junylee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:59:57 by junylee           #+#    #+#             */
/*   Updated: 2021/05/06 18:36:19 by junylee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n_len;
	size_t	j;
	int		i;

	if (!*needle)
		return ((char*)haystack);
	n_len = ft_strlen(needle);
	i = 0;
	j = len;
	while (len-- && haystack[i])
	{
		if (haystack[i] == *needle)
		{
			if (j - i >= n_len && !ft_strncmp(&haystack[i], needle, n_len))
				return ((char*)&haystack[i]);
		}
		i++;
	}
	return (0);
}
