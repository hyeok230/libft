/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junylee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 14:29:27 by junylee           #+#    #+#             */
/*   Updated: 2021/05/11 15:09:49 by junylee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isin(char const *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

static char		*ft_trim(char *front, int len)
{
	char	*ret;
	int		i;

	if (!(ret = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (len--)
	{
		ret[i] = front[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*front;
	char	*back;
	int		len;
	int		i;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1) - 1;
	i = 0;
	while (s1[i] && ft_isin(set, s1[i]))
		i++;
	front = (char*)&s1[i];
	while (s1[len] && ft_isin(set, s1[len]) && len > i)
		len--;
	back = (char*)&s1[len];
	len = back - front + 1;
	return (ft_trim(front, len));
}
