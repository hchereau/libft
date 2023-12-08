/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imback <imback@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 18:26:51 by imback            #+#    #+#             */
/*   Updated: 2023/12/08 01:02:59 by imback           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void	ft_isdigit_test(void)
{
	printf("\nISDIGIT_TEST\n\n");
	check_int_sign_eq(ft_isdigit('1'), isdigit('1'), 1);
	check_int_sign_eq(ft_isdigit(1), isdigit(1), 2);
	check_int_sign_eq(ft_isdigit(25), isdigit(25), 3);
	check_int_sign_eq(ft_isdigit('A'), isdigit('A'), 4);
}
