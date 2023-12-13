/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imback <imback@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 09:47:11 by imback            #+#    #+#             */
/*   Updated: 2023/12/13 10:02:51 by imback           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void	ft_strtrim_test(void)
{
	printf("\nSTRTRIM_TEST\n\n");
	check_string_eq(ft_strtrim("salut", "au"), "slt", 1);
}
