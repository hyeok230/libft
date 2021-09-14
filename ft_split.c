/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junylee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 15:46:08 by junylee           #+#    #+#             */
/*   Updated: 2021/05/11 15:47:16 by junylee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_fall(char **ret)
{
	int	i;

	i = 0;
	while (ret[i])
	{
		free(ret[i]);
		i++;
	}
	free(ret);
}

static int		ft_isdeli(char c, char deli)
{
	if (c == deli || c == '\0')
		return (1);
	return (0);
}

static int		ft_count(char *s, char c)
{
	int		count;
	char	*next;
	char	*previous;

	count = 0;
	next = s;
	previous = s;
	while (1)
	{
		if (!ft_isdeli(s[0], c) && ft_isdeli(s[1], c))
		{
			count++;
			next = &s[1];
			previous = &s[1];
		}
		if (ft_isdeli(*s, c))
			next = s;
		if (next - previous > 1)
			count++;
		if (*s == '\0')
			break ;
		previous = next;
		s++;
	}
	return (count);
}

static char		*ft_cpy(char *s, char c, int *offset)
{
	char	*ret;
	char	*start;
	int		len;
	int		i;

	len = 0;
	while (ft_isdeli(s[*offset], c) && s[*offset])
		*offset += 1;
	if (!(ft_isdeli(s[*offset], c)) && s[*offset])
		start = &s[*offset];
	while (!(ft_isdeli(s[*offset], c)) && s[*offset])
	{
		*offset += 1;
		len++;
	}
	if (!(ret = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (len--)
	{
		ret[i] = start[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

char			**ft_split(char const *s, char c)
{
	int		count;
	int		i;
	int		offset;
	char	**ret;

	if (!s)
		return (NULL);
	count = ft_count((char*)s, c);
	if (!(ret = (char**)malloc(sizeof(char*) * (count + 1))))
		return (NULL);
	i = 0;
	offset = 0;
	while (count--)
	{
		if (!(ret[i] = ft_cpy((char*)s, c, &offset)))
		{
			ft_fall(ret);
			return (NULL);
		}
		i++;
	}
	ret[i] = NULL;
	return (ret);
}
