/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imback <imback@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 11:21:52 by imback            #+#    #+#             */
/*   Updated: 2023/12/04 17:01:15 by imback           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

static void	check_create_array(int c, size_t size, size_t n)
{
	void	*array1[1000];
	void	*array2[1000];

	check_array_eq(ft_memset(array1, c, size), memset(array2, c, size),(const size_t) n);
}

void	ft_memset_test(void)
{
	printf("\nMEMSET_TEST\n\n");
	check_create_array('a', 5, 1);
	check_create_array(25, 10, 2);
	check_create_array('a', 0, 3);
	check_create_array('\0', 2, 4);
}
