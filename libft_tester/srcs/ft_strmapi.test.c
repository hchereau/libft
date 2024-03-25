/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imback <imback@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 10:25:19 by imback            #+#    #+#             */
/*   Updated: 2024/03/25 19:21:31 by imback           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

static char	to_upper(unsigned int i, char c)
{
	return (c + i);
}

void	ft_strmapi_test(void)
{
	printf("\nSTRMAPI_TEST\n\n");
	check_string_eq(ft_strmapi("1234", to_upper), "1357", 1);
}
