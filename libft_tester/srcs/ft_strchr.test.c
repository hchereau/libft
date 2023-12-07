/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imback <imback@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:58:25 by hchereau          #+#    #+#             */
/*   Updated: 2023/12/08 00:02:48 by imback           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void	ft_strchr_test(void)
{
	printf("\nSTRCHR_TEST\n\n");
	check_char_eq(ft_strchr("", 'a'), strchr("", 'a'), 1);
	check_char_eq(ft_strchr("salut", 'a'), strchr("salut", 'a'), 2);
	check_char_eq(ft_strchr("salut", 't'), strchr("salut", 't'), 3);
	check_char_eq(ft_strchr("salut", 'w'), strchr("salut", 'w'), 4);
}
