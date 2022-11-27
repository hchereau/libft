/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 12:43:44 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/26 15:19:58 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void	isalpha_test(void)
{
	printf("\nISALPHA_TEST:\n\n");
	check_int_sign_eq(ft_isalpha('l'), isalpha('l'), 1);
}
