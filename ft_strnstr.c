/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:18:40 by hchereau          #+#    #+#             */
/*   Updated: 2022/12/05 22:02:02 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while( big[i] != '\0' && i < len)
	{
		if (ft_strncmp(&big[i], little, (ft_strlen(little) - 1)) == 0)
			return ((char *)(big + i));
			
		++i;
	}
	return (0);
}

/*
process:
	-> parcourir big jusqu'a trouver le premier c de little;
	-> parcourir little et big 
	-> return *p sur premiere occu de little
*/
