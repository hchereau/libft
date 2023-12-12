/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imback <imback@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:20:19 by imback            #+#    #+#             */
/*   Updated: 2023/12/12 18:43:19 by imback           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void	ft_substr_test(void)
{
	printf("\nSUBSTR_TEST\n\n");
	check_string_eq(ft_substr("salut", 1, 2), "al", 1);
	check_string_eq(ft_substr("salut", 0, 5), "salut", 2);
	check_string_eq(ft_substr("salut", 5, 4), "", 3);
	check_string_eq(ft_substr("salut", 1, 0), "", 4);
	check_string_eq(ft_substr("", 3, 2), "", 5);
}
