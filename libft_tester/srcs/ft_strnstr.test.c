/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imback <imback@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 13:58:58 by hchereau          #+#    #+#             */
/*   Updated: 2023/12/08 01:13:53 by imback           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void	ft_strnstr_test(void)
{
	printf("\nSTRNSTR_TEST\n\n");
	check_char_eq(ft_strnstr("salut", "", 4), strnstr("salut", "", 4), 1);
	check_char_eq(ft_strnstr("salut", "alu", 5), strnstr("salut", "alu", 5), 2);
	check_char_eq(ft_strnstr("salut", "avion", 4), strnstr("salut", "avion", 4), 3);
}
