/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imback <imback@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 10:50:51 by imback            #+#    #+#             */
/*   Updated: 2024/03/25 21:28:47 by imback           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

static void iter(unsigned int i, char *s)
{
	*s += i;
}

void	ft_striteri_test(void)
{
	char	test1[] = "0000000000";
	char	test2[] = "0";
	char	test3[] = "";
	printf("\nSTRITERI_TEST\n\n");
	ft_striteri(test1, iter);
	ft_striteri(test2, iter);
	ft_striteri(test3, iter);
	check_string_eq(test1, "0123456789", 1);
	check_string_eq(test2, "0", 2);
	check_string_eq(test3, "", 3);
}
