/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 00:34:51 by hchereau          #+#    #+#             */
/*   Updated: 2022/12/02 01:00:40 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void toupper_test(void)
{
	printf("\n TOUPPER_TEST\n\n");
	check_int_eq(ft_toupper('a'),toupper('a'), 1); 	
	check_int_eq(ft_toupper(13),toupper(13), 2); 	
	check_int_eq(ft_toupper(0),toupper(0), 3);
	check_int_eq(ft_toupper(' '),toupper(' '), 4);		
	check_int_eq(ft_toupper('A'),toupper('A'), 5);		
}
