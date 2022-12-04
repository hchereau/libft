/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 13:54:15 by hchereau          #+#    #+#             */
/*   Updated: 2022/12/04 16:16:19 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	
	i = 0;
	while (i < n)
	{
		if ((int)(s[i]) == c)
			return ((void *)(s + i));
		++i;
	}
	return (NULL);
}

/*
process:
	-> parcours la liste a la recherche de l'octet
	-> renvoie l'octet 
*/
