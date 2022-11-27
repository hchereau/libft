/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 18:22:40 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/26 19:43:40 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"


void	check_create_array(int c, size_t size, size_t n)
{
	void	array1[1000];
	void	array2[1000];

	check_array_eq(ft_memset(array1, c, size), memset(array2, c, size), n);
}

void	memset_test(void)
{
	printf("\nMEMSET_TEST:\n\n");
	check_create_array('a', 5, 1);	
	check_create_array('z', 100, 2);
	check_create_array(12, 0, 3);
	check_create_array`(500, 25, 4);


	
}
