/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 00:15:49 by hchereau          #+#    #+#             */
/*   Updated: 2022/12/05 01:19:22 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*comp1;
	char	*comp2;

	comp1 = (char *)s1;
	comp2 = (char *)s2;
	if (n != 0)
	{
		i = 0;
		while (i < n)
		{
			if (comp1[i] != comp2[i])
				return (comp1[i] - comp2[i]);
			++i;
		}
	}
	return (0);
}

/*
process:
-> verifier si n = 0;
-> parcourir les 2 chaines pour voir une difference 
-> return negatif ou positf
 */
