/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 18:01:46 by hchereau          #+#    #+#             */
/*   Updated: 2022/12/03 20:14:16 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i]!= '\0' && s1[i] == s2[i])
		++i;
	return (s1[i] - s2[i]);
}

/*
process:
	-> parcourt les chaines de caractere jusqu'a trouver une diff
	-> s1 - s2
	-> return (s1 - s2)
*/
