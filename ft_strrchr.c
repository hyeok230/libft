/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junylee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:40:45 by junylee           #+#    #+#             */
/*   Updated: 2021/05/09 22:22:50 by junylee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ret;
	int		i;

	i = 0;
	ret = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			ret = (char *)&s[i];
		i++;
	}
	if (!c)
		return ((char *)&s[i]);
	return (ret);
}
