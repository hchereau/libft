/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 07:48:45 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/13 07:50:29 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	
	i = 0;
	while(i < n)
	{
		if (((uint8_t *)s1)[i] != ((uint8_t *)s2)[i])
			return (((uint8_t *)s1)[i] - ((uint8_t *)s2)[i]);
		i++;
	}
	return (0);
}
