/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 22:31:18 by hchereau          #+#    #+#             */
/*   Updated: 2022/12/04 13:49:45 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.testh"

void	memchr_test(void)
{
	char	array1 = "salut";
	check_array_eq(ft_memchr(array1, 'c', 4),memchr(array1, 'c', 4), 1);
	check_array_eq(ft_memchr(array1, 'a', 3),memchr(array1, 'a', 4), 3);
	check_array_eq(ft_memchr(array1, 't', 5),memchr(array1, 't', 4), 5);
}
