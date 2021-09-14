/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junylee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 14:10:46 by junylee           #+#    #+#             */
/*   Updated: 2021/05/10 14:29:09 by junylee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	size_t	len1;
	size_t	len2;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!(ret = (char*)malloc(sizeof(char) * (len1 + len2 + 1))))
		return (NULL);
	i = 0;
	while (len1--)
	{
		ret[i++] = *s1++;
	}
	while (len2--)
	{
		ret[i++] = *s2++;
	}
	ret[i] = '\0';
	return (ret);
}
