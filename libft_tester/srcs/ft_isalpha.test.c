/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imback <imback@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:41:47 by imback            #+#    #+#             */
/*   Updated: 2023/12/03 18:22:57 by imback           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void	ft_isalpha_test(void)
{
	printf("\nISALPHA_TEST\n\n");
	check_sign_eq(ft_isalpha('a'), isalpha('a'), 1);
	check_sign_eq(ft_isalpha(2), isalpha(2), 2);
	check_sign_eq(ft_isalpha('A'), isalpha('A'), 3);
}
