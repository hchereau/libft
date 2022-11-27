/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 18:22:40 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/27 13:57:52 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"


static	void	check_create_array(size_t size, size_t n)
{
	void	*array1[1000];
	void	*array2[1000];

	ft_bzero(array1, size);
	bzero(array2, size);
	check_array_eq(array1, array2, n);
}

void	bzero_test(void)
{
	printf("\nBZERO_TEST:\n\n");
	check_create_array(5, 1);	
	check_create_array(500, 2);
	check_create_array(0, 3);
	check_create_array(25, 4);


	
}
