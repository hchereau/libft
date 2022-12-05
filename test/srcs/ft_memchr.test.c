/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 22:31:18 by hchereau          #+#    #+#             */
/*   Updated: 2022/12/04 18:43:35 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void	memchr_test(void)
{
	printf("\nMEMCHR_TEST\n\n");
	char	array1[] = "salut";
	check_array_eq(ft_memchr(array1, 'c', 4),memchr(array1, 'c', 4), 1);
	check_array_eq(ft_memchr(array1, 'a', 3),memchr(array1, 'a', 3), 2);
	check_array_eq(ft_memchr(array1, 't', 5),memchr(array1, 't', 5), 3);
}
