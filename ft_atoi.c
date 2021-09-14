/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junylee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 18:31:03 by junylee           #+#    #+#             */
/*   Updated: 2021/05/11 21:22:23 by junylee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	return (((c >= 9 && c <= 13) || c == 32) ? 1 : 0);
}

static int	ft_isnum(char c)
{
	return ((c >= '0' && c <= '9') ? 1 : 0);
}

static int	ft_isoper(char c)
{
	return (((c == '-') || (c == '+')) ? 1 : 0);
}

int			ft_atoi(const char *str)
{
	int			i;
	int			negative;
	long long	result;

	i = 0;
	result = 0;
	negative = 1;
	while (ft_isspace(str[i]))
	{
		i++;
	}
	if (ft_isoper(str[i]))
	{
		if (str[i] == '-')
			negative *= -1;
		i++;
	}
	while (ft_isnum(str[i]))
	{
		result = result * 10 + (str[i] - '0');
		if (result > 2147483648)
			return ((negative == 1) ? -1 : 0);
		i++;
	}
	return (negative * result);
}
