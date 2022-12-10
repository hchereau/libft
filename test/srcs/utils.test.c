/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 12:20:33 by hchereau          #+#    #+#             */
/*   Updated: 2022/12/10 00:22:59 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void	check_int_eq(const int a, const int b, const size_t n)
{
	if (a == b)
		printf("%zu : %sOK%s\n", n, GREEN, WHITE);
	else
	{
		printf("%zu : %sKO%s\n", n, RED, WHITE);
		printf("(mine) [%d] : (expected) [%d] \n", a, b);
	}
}

void	check_int_sign_eq(const int a, const int b, const size_t n)
{
	if ((a > 0 && b > 0) || (a == 0 && b == 0) || (a < 0 && b < 0))
		printf("%zu : %sOK%s\n", n, GREEN, WHITE);
	else
	{
		printf("%zu : %sKO%s\n", n, RED, WHITE);
		printf("(mine) [%d] : (expected) [%d] \n", a, b);
	}
}

void	check_ptr_eq(const void *a, const void *b, const size_t n)
{
	if (a == b)
		printf("%zu : %sOK%s\n", n, GREEN, WHITE);
	else
	{
		printf("%zu : %sKO%s\n", n, RED, WHITE);
		printf("(mine) [%p] : (expected) [%p] \n", a, b);
	}
}
void	check_array_eq(const void *ar1, const void *ar2, const size_t n)
{
	if (ar1 == NULL && ar2 == NULL) 
		printf("%zu : %sOK%s\n", n, GREEN, WHITE);
	else if (ar1 != NULL && ar2 != NULL && memcmp(ar1, ar2, n) == 0)	
		printf("%zu : %sOK%s\n", n, GREEN, WHITE);
	else
	{	
		printf("%zu : %sKO%s\n", n, RED, WHITE);
		printf("(mine) [%p] : (expected) [%p] \n", ar1, ar2);
	}
}

void	check_string_eq(const char *a, const char *b, const size_t n)
{
	if (strcmp(a, b) == 0)
		printf("%zu : %sOK%s\n", n, GREEN, WHITE);
	else
	{
		printf("%zu : %sKO%s\n", n, RED, WHITE);
		printf("(mine) [%s] : (expected) [%s] \n", a, b);			
	}
}
void	check_string_array_eq(char **a, char **b, const size_t n)
{
	size_t i;

	i = 0;
	while (a[i] != NULL && b[i] != NULL && strcmp(a[i], b[i]) == 0)
		++i;
	if (a[i] == NULL && b[i] == NULL)
		printf("%zu : %sOK%s\n", n, GREEN, WHITE);			
	else
	{
		printf("%zu : %sKO%s\n", n, RED, WHITE);
		printf("(mine) [%s, %s, %s] : (expected) [%s, %s, %s] \n", a[0], a[1], b[2], b[0], b[1], b[2]);			
	}
}
