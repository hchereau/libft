/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 14:12:12 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/30 21:40:50 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

static void	check_create_array(const void *src, size_t size, const int n)
{
	void	*array1 = calloc(1000, 1);
	void	*array2 = calloc(1000, 1);
	
	check_array_eq(ft_memmove(array1, (void *)src, size), memmove(array2, (void *)src, size), n);
}
	
static void	check_overlap_array(const void *src, size_t size, const int n)
{	
	check_array_eq(ft_memmove((void *)(src + 1), (void *)src, size), memmove((void *)(src + 1), (void *)src, size), n);
}

void	memmove_test(void)
{
	printf("\nMEMMOVE_TEST\n\n");
	unsigned char src[] = "salut";
	unsigned char src02[] = "salut hey";
	unsigned int src1[] = {1, 5, 3};                                                 
//	unsigned int src2[] = {1300};                                                
	unsigned int src3[] = {0};                                                   
	check_create_array(src, 3, 1);                
	check_overlap_array(src02, 4, 2);                                                                                             
	check_create_array(src1, 2, 4);                                              
	check_overlap_array(src1, 1, 5);                                              
	check_create_array(src3, 1, 6);
}
/*
check_array_eq
but: comparer fonction memcpy et ft_memcpy
inputs: un const void, un const int
process:
	-> cree deux pointeurs dest
	-> applique les deux fonctions
	-> print
*/
