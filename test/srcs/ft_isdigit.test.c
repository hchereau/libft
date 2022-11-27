/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:06:41 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/26 15:20:08 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void	isdigit_test(void)
{
	printf("\nISDIGIT_TEST:\n\n");
	check_int_sign_eq(ft_isdigit(5), isdigit(5), 1);
}

