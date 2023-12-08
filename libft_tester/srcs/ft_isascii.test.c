/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imback <imback@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 21:24:39 by imback            #+#    #+#             */
/*   Updated: 2023/12/08 01:03:13 by imback           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void	ft_isascii_test(void)
{
	printf("\nISASCII_TEST\n\n");
	check_int_sign_eq(ft_isascii('1'), isascii('1'), 1);
	check_int_sign_eq(ft_isascii(1), isascii(1), 2);
	check_int_sign_eq(ft_isascii('!'), isascii('!'), 3);
	check_int_sign_eq(ft_isascii('A'), isascii('A'), 4);
	check_int_sign_eq(ft_isascii('z'), isascii('z'), 5);
	check_int_sign_eq(ft_isascii(-25), isascii(-25), 6);
}
