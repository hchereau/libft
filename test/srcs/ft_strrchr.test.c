/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:58:25 by hchereau          #+#    #+#             */
/*   Updated: 2022/12/03 14:50:50 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void	strrchr_test(void)
{
	printf("\nSTRRCHR_TEST\n\n");
	check_char_eq(ft_strrchr("", 'a'), strrchr("", 'a'), 1);
	check_char_eq(ft_strrchr("salut", 'a'), strrchr("salut", 'a'), 2);
	check_char_eq(ft_strrchr("salut", 't'), strrchr("salut", 't'), 3);		
	check_char_eq(ft_strrchr("salut", 'w'), strrchr("salut", 'w'), 4);		
}
