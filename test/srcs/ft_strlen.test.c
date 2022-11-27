/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:06:41 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/26 18:19:50 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void	strlen_test(void)
{
	printf("\nSTRLEN_TEST:\n\n");
	check_int_eq(ft_strlen("saluttt"), strlen("saluttt"), 1);
	check_int_eq(ft_strlen("A"), strlen("A"), 2);
	check_int_eq(ft_strlen("\0"), strlen("\0"), 3);
	check_int_eq(ft_strlen(""), strlen(""), 4);	
}

