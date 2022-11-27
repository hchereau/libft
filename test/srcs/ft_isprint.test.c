/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:26:00 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/26 17:35:45 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void isprint_test(void)
{	
	printf("\nISPRINT_TEST:\n\n");
	check_int_sign_eq(ft_isprint(32), isprint(32), 1);
	check_int_sign_eq(ft_isprint(10), isprint(10), 2);
	check_int_sign_eq(ft_isprint(127), isprint(127), 3);
}

