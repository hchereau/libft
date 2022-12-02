/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 00:46:38 by hchereau          #+#    #+#             */
/*   Updated: 2022/12/02 01:04:54 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + DIFF_LOWER_UPPER);
	else
		return (c);
}
/*
tolower
process
	-> verifier si le int est majuscule
	-> return la lettre minuscule

*/
