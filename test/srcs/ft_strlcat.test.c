/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:15:07 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/30 23:23:19 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

static void	check_create_string(const char *src, size_t size, const int n)
{
	char	*array1 = malloc(100 * sizeof(char));
	char	*array2 = malloc(100 * sizeof(char));
	char	*dest = "bonsoir";
	size_t		i;

	i = 0;
	while (i < ft_strlen(dest))
	{
		array1[i] = dest[i];
		array2[i] = dest[i];
		++i;
	}
	ft_strlcat(array1, src, size);
	strlcat(array2, src, size);
	check_array_eq(array1, array2, n);
}

void	strlcat_test(void)
{
	printf("\n\nSTRLCAT_TEST\n\n");
	const char src1[] = "salut";
	const char src2[] = "";
	check_create_string(src1, 3, 1);
	check_create_string(src1, 7, 2);
	check_create_string(src2, 1, 3);
	check_create_string(src1, 5, 4);
	
}
