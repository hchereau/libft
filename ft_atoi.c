/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:56:11 by hchereau          #+#    #+#             */
/*   Updated: 2022/12/05 22:05:40 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

#define ZERO_ASCII 48 

int	ft_atoi(const char *nptr)
{
	int nb;
	int i;

	i = 0;
	while (nptr[i] != '\0')
	{
		nb = nptr[i] - ZERO_ASCII;
		nb *= 10;
		++i;
	}
	return (nb);
}


/*
process
	-> parcourir le char pour le transformer en nombre
	-> renvoyer le int
*/
