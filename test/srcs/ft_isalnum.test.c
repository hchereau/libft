/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:06:41 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/26 16:22:06 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void	isalnum_test(void)
{
	printf("\nISALNUM_TEST:\n\n");
	check_int_sign_eq(ft_isalnum(-1), isalnum(-1), 1);
	check_int_sign_eq(ft_isalnum('A'), isalnum('A'), 2);
	check_int_sign_eq(ft_isalnum('5'), isalnum('5'), 3);
	check_int_sign_eq(ft_isalnum('a'), isalnum('a'), 4);
	
}

