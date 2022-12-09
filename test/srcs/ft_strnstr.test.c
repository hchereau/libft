/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 13:58:58 by hchereau          #+#    #+#             */
/*   Updated: 2022/12/05 15:46:23 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void	strnstr_test(void)
{
	printf("\nSTRNSTR_TEST\n\n");
	check_char_eq(ft_strnstr("salut", "", 4), strnstr("salut", "", 4), 1);
	check_char_eq(ft_strnstr("salut", "alu", 5), strnstr("salut", "alu", 5), 2);
	check_char_eq(ft_strnstr("salut", "avion", 4), strnstr("salut", "avion", 4), 3);
}
