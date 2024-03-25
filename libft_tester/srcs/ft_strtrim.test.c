/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imback <imback@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 09:47:11 by imback            #+#    #+#             */
/*   Updated: 2024/03/25 15:21:05 by imback           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void	ft_strtrim_test(void)
{
	printf("\nSTRTRIM_TEST\n\n");
	check_string_eq(ft_strtrim("asaaluutu", "au"), "saaluut", 1);
	check_string_eq(ft_strtrim("ausaaluutua", "au"), "saaluut", 2);
	check_string_eq(ft_strtrim("ausaaluutua", ""), "ausaaluutua", 3);
	check_string_eq(ft_strtrim("", ""), "", 4);
	check_string_eq(ft_strtrim("\0", ""), "\0", 5);
}
