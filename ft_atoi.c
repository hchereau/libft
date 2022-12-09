/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:56:11 by hchereau          #+#    #+#             */
/*   Updated: 2022/12/09 15:49:21 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

#define CHAR_TO_INT 48 

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		nb;

	i = 0;
	nb = 0;
	while (i < ft_strlen(nptr))
	{
		nb = nb * 10 + (nptr[i] - CHAR_TO_INT);
		++i;
	}
	return (nb);
}


/*
process
	-> parcourir le char pour le transformer en nombre
	-> renvoyer le int
*/
