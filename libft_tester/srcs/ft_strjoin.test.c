/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imback <imback@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 22:32:11 by imback            #+#    #+#             */
/*   Updated: 2023/12/12 23:45:47 by imback           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void	ft_strjoin_test(void)
{
	printf("\nSTRJOIN_TEST\n\n");
	check_string_eq(ft_strjoin("sal", "ut"), "salut", 1);
	check_string_eq(ft_strjoin("", ""), "", 2);
	check_string_eq(ft_strjoin("salut", (char *)'\0'), "salut", 3);
	check_string_eq(ft_strjoin((char *)'\0', (char *)'\0'), "", 4);
}
