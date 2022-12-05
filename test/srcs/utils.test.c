/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 12:20:33 by hchereau          #+#    #+#             */
/*   Updated: 2022/12/04 18:36:03 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void	check_int_eq(const int a, const int b, const size_t n)
{
	if (a == b)
		printf("%zu : %sOK%s\n", n, GREEN, WHITE);
	else
		printf("%zu : %sKO%s\n", n, RED, WHITE);
}

void	check_int_sign_eq(const int a, const int b, const size_t n)
{
	if ((a > 0 && b > 0) || (a == 0 && b == 0) || (a < 0 && b < 0))
		printf("%zu : %sOK%s\n", n, GREEN, WHITE);
	else
		printf("%zu : %sKO%s\n", n, RED, WHITE);
}

void	check_char_eq(const char *a, const char *b, const size_t n)
{
	if (a == b)
		printf("%zu : %sOK%s\n", n, GREEN, WHITE);
	else
		printf("%zu : %sKO%s\n", n, RED, WHITE);
}
void	check_array_eq(const void *ar1, const void *ar2, const size_t n)
{
	if (!ar1 && !ar2) 
		printf("%zu : %sOK%s\n", n, GREEN, WHITE);
	else if (memcmp(ar1, ar2, n) == 0)	
		printf("%zu : %sOK%s\n", n, GREEN, WHITE);
	else	
		printf("%zu : %sKO%s\n", n, RED, WHITE);
}
