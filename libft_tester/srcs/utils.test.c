/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imback <imback@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:47:48 by imback            #+#    #+#             */
/*   Updated: 2024/03/25 18:13:57 by imback           ###   ########.fr       */
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

void	check_string_array_eq(const char **array1, const char **array2, const int n)
{
	size_t	i = 0;
	if (array1 == NULL && array2 == NULL)
	{
		printf("%d : %sOK%s\n", n, GREEN, WHITE);
	}
	while (array1[i] != NULL && array2[i] != NULL)
	{
		if (strcmp(array1[i], array2[i]))
		{
			printf("%d : %sKO%s\n", n, RED, WHITE);
			for (size_t y = 0; y <= i; ++y)
			{
				printf("(mine) [%s] : (expected) [%s] \n", array1[y], array2[y]);
			}
			return ;
		}
		++i;
	}
	if (array1[i] == NULL && array2[i] == NULL)
	{
		printf("%d : %sOK%s\n", n, GREEN, WHITE);
	}
	else
	{
		printf("%d : %sKO%s\n", n, RED, WHITE);
		printf("(mine) [%s] : (expected) [%s] \n", array1[i], array2[i]);
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
		printf("(mine) [%p] : (expected) [%p] \n", ar1, ar2);
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

void	check_string_eq(const char *a, const char *b, const size_t n)
{
	if (!strcmp(a, b))
		printf("%zu : %sOK%s\n", n, GREEN, WHITE);
	else
	{
		printf("%zu : %sKO%s\n", n, RED, WHITE);
		printf("(mine) [%s] : (expected) [%s] \n", a, b);
	}
}
