/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imback <imback@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:00:36 by imback            #+#    #+#             */
/*   Updated: 2024/03/26 11:05:50 by imback           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

static void	check_create_array(size_t size, size_t n)
{
	uint8_t	array1[] = "saluttt";
	uint8_t	array1_dest[] = "au revoir yo";
	uint8_t	array2[] = "saluttt";
	uint8_t	array2_dest[] = "au revoir yo";

	check_array_eq(ft_memmove(array1_dest, array1, size), memmove(array2_dest, array2, size), n);
}

static void	check_create_array_overlap(size_t size, size_t n)
{
	uint8_t	array1[] = "saluttt";
	uint8_t	array2[] = "saluttt";

	// (void)n;
	// write(STDOUT_FILENO, ft_memmove(array1 + 3, array1, size), size);
	// write(1, "\n_____________________________________\n", 41);
	// write(STDOUT_FILENO, memmove(array2 + 3, array2, size), size);
	check_string_eq(ft_memmove(array1 + 3, array1, size), memmove(array2 + 3, array2, size), n);
}

void	ft_memmove_test(void)
{
	printf("\nMEMMOVE_TEST\n\n");
	check_create_array(3, 1);
	check_create_array(0, 2);
	check_create_array(7, 3);
	check_create_array_overlap(5, 4);
	check_create_array_overlap(7, 5);
	check_create_array_overlap(2, 6);
}
