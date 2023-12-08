/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imback <imback@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:45:15 by hchereau          #+#    #+#             */
/*   Updated: 2023/12/08 00:58:09 by imback           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void ft_strncmp_test(void)
{
	printf("\nSTRNCMP_TEST\n\n");
	check_int_sign_eq(ft_strncmp("salut","saluy", 3), strncmp("salut","saluy", 3), 1);
	check_int_sign_eq(ft_strncmp("salut","", 3), strncmp("salut","", 3), 2);
	check_int_sign_eq(ft_strncmp("salut","sayut", 4), strncmp("salut","sayut", 4), 3);
	check_int_sign_eq(ft_strncmp("salut","rololo", 3), strncmp("salut","rololo", 3), 4);
	check_int_sign_eq(ft_strncmp("salut","sluyo", 5), strncmp("salut","sluyo", 5), 5);
}
