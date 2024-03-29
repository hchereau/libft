/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imback <imback@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:02:05 by imback            #+#    #+#             */
/*   Updated: 2023/12/05 10:54:54 by imback           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

static void	check_create_array(size_t size, size_t n)
{
	uint8_t	array1[] = "saluttt";
	uint8_t	array2[] = "saluttt";

	ft_bzero(array1, size);
	bzero(array2, size);
	check_array_eq(array1, array2,(const size_t) n);
}

void	ft_bzero_test(void)
{
	printf("\nBZERO_TEST\n\n");
	check_create_array(4, 1);
	check_create_array(20, 2);
	check_create_array(0, 3);
}
