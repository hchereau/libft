/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:19:51 by hchereau          #+#    #+#             */
/*   Updated: 2022/12/09 15:17:24 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void atoi_test(void)
{
	printf("\nATOI_TEST\n\n");
//	check_int_eq(ft_atoi("+42"), atoi("+42"), 1);
	check_int_eq(ft_atoi("42"), atoi("42"), 2);
//	check_int_eq(ft_atoi("-42"), atoi("-42"), 3);	
//	check_int_eq(ft_atoi("+++-42"), atoi("+++-42"), 4);
//	check_int_eq(ft_atoi("--42"), atoi("--42"), 5);
//	check_int_eq(ft_atoi("i42i"), atoi("i42i"), 6);
//	check_int_eq(ft_atoi("		42i"), atoi("		42i"), 7);
}


