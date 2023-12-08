/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imback <imback@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:38:33 by imback            #+#    #+#             */
/*   Updated: 2023/12/08 18:16:43 by imback           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void ft_strdup_test(void)
{
	printf("\nSTRDUP_TEST\n\n");
	check_string_eq(ft_strdup("salut"), strdup("salut"), 1);
	check_string_eq(ft_strdup(""), strdup(""), 2);
	check_string_eq(ft_strdup("a"), strdup("a"), 3);
}
