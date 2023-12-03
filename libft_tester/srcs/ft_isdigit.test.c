/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imback <imback@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 18:26:51 by imback            #+#    #+#             */
/*   Updated: 2023/12/03 18:39:13 by imback           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_isdigit_test(void)
{
	printf("\nISDIGIT_TEST\n\n");
	check_sign_eq(ft_isdigit(1), isdigit(1), 1);
	check_sign_eq(ft_isdigit('a'), isdigit('a'), 2);
	check_sign_eq(ft_isdigit('A'), isdigit('A'), 3);
}
