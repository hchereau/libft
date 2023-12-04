/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imback <imback@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:38:17 by imback            #+#    #+#             */
/*   Updated: 2023/12/04 11:16:59 by imback           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void	ft_strlen_test(void)
{
	// char	*str = NULL;
	printf("\nSTRLEN_TEST\n\n");
	check_size_t_eq(ft_strlen("bonjour"), strlen("bonjour"), 1);
	check_size_t_eq(ft_strlen(""), strlen(""), 2);
	check_size_t_eq(ft_strlen("\0"), strlen("\0"), 2);

}
