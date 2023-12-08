/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imback <imback@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:56:11 by hchereau          #+#    #+#             */
/*   Updated: 2023/12/08 01:17:51 by imback           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static bool	is_whitespace(const char c)
{
	return (c == SPACE || (FIRST_WHITESPACE <= c && c <= LAST_WHITESPACE));
}

int	ft_atoi(const char *nptr)
{
	long	nb;
	size_t	i;

	nb = 0;
	while (is_whitespace(*nptr) == true)
		++nptr;
	i = 0;
	if (nptr[0] == '-' || nptr[0] == '+')
		++i;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nb = nb * 10 + (nptr[i] - '0');
		++i;
	}
	if (nptr[0] == '-')
		nb *= -1;
	return ((int)nb);
}
