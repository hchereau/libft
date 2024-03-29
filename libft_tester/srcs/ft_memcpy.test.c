/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imback <imback@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:08:44 by imback            #+#    #+#             */
/*   Updated: 2023/12/05 15:58:53 by imback           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"


static void	check_create_array(size_t size, size_t n)
{
	uint8_t	array1[] = "saluttt";
	uint8_t	array1_dest[] = "au revoir yo";
	uint8_t	array2[] = "saluttt";
	uint8_t	array2_dest[] = "au revoir yo";

	check_array_eq(ft_memcpy(array1_dest, array1, size), memcpy(array2_dest, array2, size), n);
}
void	ft_memcpy_test(void)
{
	printf("\nMEMCPY_TEST\n\n");
	check_create_array(3, 1);
	check_create_array(0, 2);
	check_create_array(7, 3);
	// check_create_array(50, 4);
}
