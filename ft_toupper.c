/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 00:46:38 by hchereau          #+#    #+#             */
/*   Updated: 2022/12/02 00:56:33 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - DIFF_LOWER_UPPER);
	else
		return (c);
}
/*
toupper
process
	-> verifier si le int est minuscule
	-> return la lettre majuscule

*/
