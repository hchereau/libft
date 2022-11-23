/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:25:36 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/13 08:04:33 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	c = (unsigned char)c;
	while (i < n)
	{
		if (((uint8_t *)s)[i] == c)
			return ((void *)s + i);
		i++;
	}
	return (0);
}
