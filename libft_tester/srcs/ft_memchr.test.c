/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imback <imback@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 22:31:18 by hchereau          #+#    #+#             */
/*   Updated: 2023/12/08 01:08:37 by imback           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void	ft_memchr_test(void)
{
	printf("\nMEMCHR_TEST\n\n");
	char	array1[] = "salut";
	check_array_eq(ft_memchr(array1, 'c', 4),memchr(array1, 'c', 4), 1);
	check_array_eq(ft_memchr(array1, 'a', 3),memchr(array1, 'a', 3), 2);
	check_array_eq(ft_memchr(array1, 't', 5),memchr(array1, 't', 5), 3);
}
