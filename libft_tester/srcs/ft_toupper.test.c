/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imback <imback@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 00:34:51 by hchereau          #+#    #+#             */
/*   Updated: 2023/12/07 23:50:20 by imback           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void ft_toupper_test(void)
{
	printf("\nTOUPPER_TEST\n\n");
	check_int_eq(ft_toupper('a'),toupper('a'), 1);
	check_int_eq(ft_toupper(13),toupper(13), 2);
	check_int_eq(ft_toupper(0),toupper(0), 3);
	check_int_eq(ft_toupper(' '),toupper(' '), 4);
	check_int_eq(ft_toupper('A'),toupper('A'), 5);
}
