/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imback <imback@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:47:48 by imback            #+#    #+#             */
/*   Updated: 2023/12/06 17:00:57 by imback           ###   ########.fr       */
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

void	check_sign_eq(const int function, const int res, const int n)
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

void	check_string_eq(const char *s1, const char *s2, const int n)
{
	int			i;
	int			same;
	const int	size1 = strlen(s1);
	const int	size2 = strlen(s2);

	same = 0;
	if (size1 == size2)
	{
		while (i < size1 - 1)
		{
			if (s1[i] != s2[i])
			{
				++same;
				break;
			}
			++i;
		}
	}
	if (same == 1)
	{
		printf("%d : %sKO%s\n", n, RED, WHITE);
		printf("(mine) [%s] : (expected) [%s] \n", s1, s2);
	}
	else
		printf("%d : %sOK%s\n", n, GREEN, WHITE);
}
