/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 00:34:51 by hchereau          #+#    #+#             */
/*   Updated: 2022/12/02 01:02:22 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void tolower_test(void)
{
	printf("\n TOLOWER_TEST\n\n");
	check_int_eq(ft_tolower('a'),tolower('a'), 1); 	
	check_int_eq(ft_tolower(13),tolower(13), 2); 	
	check_int_eq(ft_tolower(0),tolower(0), 3);
	check_int_eq(ft_tolower(' '),tolower(' '), 4);		
	check_int_eq(ft_tolower('A'),tolower('A'), 5);		
}
