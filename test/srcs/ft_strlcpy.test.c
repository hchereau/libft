/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:15:07 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/29 19:54:39 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

static void	check_create_array(const char *src, size_t size, const int n)
{
	char	*array1 = calloc(1000, 1);
	char	*array2 = calloc(1000, 1);
	
	ft_strlcpy(array1, src, size);
	strlcpy(array2, src, size);
	check_array_eq(array1, array2, n);
}

void	strlcpy_test(void)
{
	printf("\n\nSTRLCPY_TEST\n\n");
	unsigned char src1[] = "salut";
	unsigned char src2[] = "";
	check_create_array(src1, 3, 1);
	check_create_array(src1, 7, 1);
	check_create_array(src2, 1, 1);
	check_create_array(src1, 5, 1);
	
}
