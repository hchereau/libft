/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imback <imback@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 09:51:57 by imback            #+#    #+#             */
/*   Updated: 2024/03/25 18:30:10 by imback           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void	ft_split_test(void)
{
	const char	*test1[] = {"salut", "cnu", "alors", NULL};
	const char	*test2[] = {"/salut/cnu/alors", NULL};
	const char	*string1 = "/salut/cnu/alors";
	printf("\nSPLIT_TEST\n\n");
	check_string_array_eq((const char **)ft_split(string1, '/'), test1, 1);
	check_string_array_eq((const char **)ft_split(NULL, '/'), (const char **)NULL, 2);
	check_string_array_eq((const char **)ft_split(string1, '\0'), test2, 3);
}
