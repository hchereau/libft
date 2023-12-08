/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imback <imback@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 11:06:24 by imback            #+#    #+#             */
/*   Updated: 2023/12/08 16:30:42 by imback           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void	ft_calloc_test(void)
{
	printf("\nCALLOC_TEST\n\n");
	check_array_eq(ft_calloc(1, sizeof(int)), calloc(1, sizeof(int)), 1);
	check_array_eq(ft_calloc(1, sizeof(char)), calloc(1, sizeof(char)), 2);
	check_array_eq(ft_calloc(0, sizeof(char)), calloc(0, sizeof(char)), 3);
	check_array_eq(ft_calloc(1000, sizeof(void *)), calloc(0, sizeof(void *)), 4);
}
