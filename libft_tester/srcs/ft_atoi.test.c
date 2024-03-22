/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imback <imback@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:19:51 by hchereau          #+#    #+#             */
/*   Updated: 2024/03/20 15:58:54 by imback           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void ft_atoi_test(void)
{
	printf("\nATOI_TEST\n\n");
	check_int_eq(ft_atoi("+42"), atoi("+42"), 1);
	check_int_eq(ft_atoi("42"), atoi("42"), 2);
	check_int_eq(ft_atoi("-42"), atoi("-42"), 3);
	check_int_eq(ft_atoi("+++-42"), atoi("+++-42"), 4);
	check_int_eq(ft_atoi("--42"), atoi("--42"), 5);
	check_int_eq(ft_atoi("i42i"), atoi("i42i"), 6);
	check_int_eq(ft_atoi("		42i"), atoi("		42i"), 7);
}
