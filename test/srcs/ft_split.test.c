/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 22:47:57 by hchereau          #+#    #+#             */
/*   Updated: 2022/12/10 00:17:02 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void	split_test(void)
{
	char **ptr;
	int n = 4;

 	ptr = (char**)malloc(sizeof(char*) * n);

 	for (int i = 0; i < n; i++) 
	{
    	ptr[i] = (char*)malloc(sizeof(char) * 6);
  	}
	strcpy(ptr[0], "salut");
	strcpy(ptr[1], "ca");
	strcpy(ptr[2], "va");
	ptr[3] = NULL;

	printf("\nSPLIT_TEST\n\n");
	check_string_array_eq(ft_split("salut&ca&va", '&'), ptr, 1);
	check_string_array_eq(ft_split("&&&&&&&&&&&salut&ca&va", '&'), ptr, 2);
	check_string_array_eq(ft_split("salut&ca&va", '&'), ptr, 3);
//	check_string_array_eq(ft_split(NULL, '&'), ptr, 4);
//	check_string_array_eq(ft_split("salut&ca&va", '\0'), ptr, 1);

	
}
