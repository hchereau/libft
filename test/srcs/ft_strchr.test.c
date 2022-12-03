/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:58:25 by hchereau          #+#    #+#             */
/*   Updated: 2022/12/02 17:01:37 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void	strchr_test(void)
{
	printf("\nSTRCHR_TEST\n\n");
	check_char_eq(ft_strchr("", 'a'), strchr("", 'a'), 1);
	check_char_eq(ft_strchr("salut", 'a'), strchr("salut", 'a'), 2);
	check_char_eq(ft_strchr("salut", 't'), strchr("salut", 't'), 3);		
	check_char_eq(ft_strchr("salut", 'w'), strchr("salut", 'w'), 4);		
}
