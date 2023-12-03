/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imback <imback@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 19:12:21 by imback            #+#    #+#             */
/*   Updated: 2023/12/03 19:27:00 by imback           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void	ft_isalnum_test(void)
{
	printf("\nISALNUM_TEST\n\n");
	check_sign_eq(ft_isdigit('1'), isdigit('1'), 1);
	check_sign_eq(ft_isdigit(1), isdigit(1), 2);
	check_sign_eq(ft_isdigit('!'), isdigit('!'), 3);
	check_sign_eq(ft_isdigit('A'), isdigit('A'), 4);
	check_sign_eq(ft_isdigit('z'), isdigit('z'), 5);
}
