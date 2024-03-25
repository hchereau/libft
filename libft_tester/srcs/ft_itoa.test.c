/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imback <imback@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 10:08:15 by imback            #+#    #+#             */
/*   Updated: 2024/03/25 18:37:29 by imback           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void	ft_itoa_test(void)
{
	printf("\nITOA_TEST\n\n");
	check_string_eq(ft_itoa(12), "12", 1);
	check_string_eq(ft_itoa(0), "0", 2);
	check_string_eq(ft_itoa(INT_MIN), "-2147483648", 2);
}
