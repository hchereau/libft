/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:06:41 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/26 16:14:56 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void	isascii_test(void)
{
	printf("\nISASCII_TEST:\n\n");
	check_int_sign_eq(ft_isascii(-1), isascii(-1), 1);
	check_int_sign_eq(ft_isascii('A'), isascii('A'), 2);
	check_int_sign_eq(ft_isascii(127), isascii(127), 3);
	check_int_sign_eq(ft_isascii(0), isascii(0), 4);
	
}

