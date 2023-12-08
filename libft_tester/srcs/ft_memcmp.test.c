/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imback <imback@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 22:23:38 by hchereau          #+#    #+#             */
/*   Updated: 2023/12/08 01:13:03 by imback           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void	ft_memcmp_test(void)
{
	printf("\nMEMCMP_TEST\n\n");
	check_int_sign_eq(ft_memcmp("salut", "salut", 3), memcmp("salut", "salut", 3), 1);
	check_int_sign_eq(ft_memcmp("salut", "sulut", 4), memcmp("salut", "sulut", 3), 2);
	check_int_sign_eq(ft_memcmp("salut", "sulut", 0), memcmp("salut", "sulut", 0), 3);
	check_int_sign_eq(ft_memcmp("00", "000", 3), memcmp("00", "000", 3), 4);
}

