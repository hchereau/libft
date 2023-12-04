/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imback <imback@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 23:01:00 by imback            #+#    #+#             */
/*   Updated: 2023/12/03 23:19:28 by imback           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void	ft_isprint_test(void)
{
	printf("\nISPRINT_TEST\n\n");
	check_sign_eq(ft_isprint('1'), isprint('1'), 1);
	check_sign_eq(ft_isprint(1), isprint(1), 2);
	check_sign_eq(ft_isprint('!'), isprint('!'), 3);
	check_sign_eq(ft_isprint('A'), isprint('A'), 4);
	check_sign_eq(ft_isprint('z'), isprint('z'), 5);
	check_sign_eq(ft_isprint(-25), isprint(-25), 6);
}
