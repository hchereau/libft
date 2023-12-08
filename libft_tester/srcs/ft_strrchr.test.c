/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imback <imback@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:58:25 by hchereau          #+#    #+#             */
/*   Updated: 2023/12/08 00:53:10 by imback           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void	ft_strrchr_test(void)
{
	printf("\nSTRRCHR_TEST\n\n");
	check_char_eq(ft_strrchr("", 'a'), strrchr("", 'a'), 1);
	check_char_eq(ft_strrchr("salut", 'a'), strrchr("salut", 'a'), 2);
	check_char_eq(ft_strrchr("salut", 't'), strrchr("salut", 't'), 3);
	check_char_eq(ft_strrchr("salut", 'w'), strrchr("salut", 'w'), 4);
}
