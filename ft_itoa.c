/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junylee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:26:24 by junylee           #+#    #+#             */
/*   Updated: 2021/05/11 17:01:40 by junylee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_len(int n)
{
	int		len;

	len = 0;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char		*ft_zero(void)
{
	char	*ret;

	if (!(ret = (char*)malloc(sizeof(char) * 2)))
		return (NULL);
	ret[0] = '0';
	ret[1] = '\0';
	return (ret);
}

static char		*ft_make(long num, char *ret, int len, int i)
{
	while (num)
	{
		ret[i] = (num % 10) + '0';
		num /= 10;
		i--;
	}
	ret[len] = '\0';
	return (ret);
}

char			*ft_itoa(int n)
{
	int		len;
	int		i;
	long	num;
	char	*ret;

	if (n == 0)
		return (ft_zero());
	if (n < 0)
		len = ft_len(n) + 1;
	else
		len = ft_len(n);
	if (!(ret = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	num = n;
	if (num < 0)
	{
		ret[0] = '-';
		num = -num;
	}
	i = len - 1;
	return (ft_make(num, ret, len, i));
}
