/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 22:23:38 by hchereau          #+#    #+#             */
/*   Updated: 2022/12/05 01:27:52 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void	memcmp_test(void)
{
	printf("\nMEMCMP_TEST\n\n");
	check_int_sign_eq(ft_memcmp("salut", "salut", 3), memcmp("salut", "salut", 3), 1);
	check_int_sign_eq(ft_memcmp("salut", "sulut", 4), memcmp("salut", "sulut", 3), 2);
	check_int_sign_eq(ft_memcmp("salut", "sulut", 0), memcmp("salut", "sulut", 0), 3);
	check_int_sign_eq(ft_memcmp("00", "000", 3), memcmp("00", "000", 3), 4);
}

