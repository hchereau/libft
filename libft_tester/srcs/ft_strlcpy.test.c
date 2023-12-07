/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imback <imback@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:07:09 by imback            #+#    #+#             */
/*   Updated: 2023/12/07 22:35:09 by imback           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

static void	check_create_array(size_t size, const char *src,size_t n)
{
	char	*array1 = calloc(1000, 1);
	char	*array2 = calloc(1000, 1);

	ft_strlcpy(array1, src, size);
	strlcpy(array2, src, size);
	check_array_eq(array1, array2, n);
}

void	ft_strlcpy_test(void)
{
	printf("\nSTRLCPY_TEST\n\n");
	const char	*s1 = "salut";
	const char	*s2 = "";
	check_create_array(3, s1, 1);
	check_create_array(7, s1, 2);
	check_create_array(5, s1, 3);
	check_create_array(1, s2, 4);

}
