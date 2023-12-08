/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imback <imback@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:47:48 by imback            #+#    #+#             */
/*   Updated: 2023/12/08 01:02:17 by imback           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void	check_int_eq(const int function, const int res, const int n)
{
	if (function == res)
		printf("%d : %sOK%s\n", n, GREEN, WHITE);
	else
	{
		printf("%d : %sKO%s\n", n, RED, WHITE);
		printf("(mine) [%d] : (expected) [%d] \n", function, res);
	}
}

void	check_int_sign_eq(const int function, const int res, const int n)
{
	if (function > 0 && res > 0)
		printf("%d : %sOK%s\n", n, GREEN, WHITE);
	else if (function < 0 && res < 0)
		printf("%d : %sOK%s\n", n, GREEN, WHITE);
	else if (function == 0 && res == 0)
		printf("%d : %sOK%s\n", n, GREEN, WHITE);
	else
	{
		printf("%d : %sKO%s\n", n, RED, WHITE);
		printf("(mine) [%d] : (expected) [%d] \n", function, res);
	}
}

void	check_size_t_eq(const size_t function, const size_t res, const int n)
{
	if (function == res)
		printf("%d : %sOK%s\n", n, GREEN, WHITE);
	else
	{
		printf("%d : %sKO%s\n", n, RED, WHITE);
		printf("(mine) [%zu] : (expected) [%zu] \n", function, res);
	}
}

void	check_array_eq(const void *ar1, const void *ar2, const int n)
{
	if (!ar1 && !ar2)
		printf("%d : %sOK%s\n", n, GREEN, WHITE);
	else if (memcmp(ar1, ar2, n) == 0)
		printf("%d : %sOK%s\n", n, GREEN, WHITE);
	else
	{
		printf("%d : %sKO%s\n", n, RED, WHITE);
		printf("(mine) [%p] : (expected) [%p] \n", ar1, ar1);
	}

}

void	check_char_eq(const char *a, const char *b, const size_t n)
{
	if (a == b)
		printf("%zu : %sOK%s\n", n, GREEN, WHITE);
	else
	{
		printf("%zu : %sKO%s\n", n, RED, WHITE);
		printf("(mine) [%s] : (expected) [%s] \n", a, b);
	}
}
