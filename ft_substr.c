/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junylee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 12:21:37 by junylee           #+#    #+#             */
/*   Updated: 2021/05/11 15:03:58 by junylee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_ret(void)
{
	char	*ret;

	ret = ft_strdup("");
	return (ret);
}

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	char			*ret;
	int				i;
	unsigned int	l;
	unsigned int	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (slen <= start)
	{
		return (ft_ret());
	}
	l = (slen - start + 1 > len) ? len : slen - start + 1;
	if (!(ret = (char*)malloc(sizeof(char) * (l + 1))))
		return (NULL);
	str = (char *)&s[start];
	i = 0;
	while (len-- && str[i])
	{
		ret[i] = str[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
