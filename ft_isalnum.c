/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junylee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 12:31:44 by junylee           #+#    #+#             */
/*   Updated: 2021/05/06 18:43:47 by junylee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_isalnum(int c)
{
	return ((ft_isalpha(c) || ft_isdigit(c)) ? 1 : 0);
}
