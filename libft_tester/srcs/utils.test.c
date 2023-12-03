/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imback <imback@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:47:48 by imback            #+#    #+#             */
/*   Updated: 2023/12/03 18:10:34 by imback           ###   ########.fr       */
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
