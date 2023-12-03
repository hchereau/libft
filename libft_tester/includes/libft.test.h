/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.test.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imback <imback@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 12:03:26 by imback            #+#    #+#             */
/*   Updated: 2023/12/03 18:38:34 by imback           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TEST_H
# define LIBFT_TEST_H

# include "libft.h"
# include <stdio.h>
# include <ctype.h>

# define GREEN "\033[32;1m"
# define RED "\033[31;1m"
# define WHITE "\033[0m"

void	check_int_eq(const int function, const int res, const int n);
void	check_sign_eq(const int function, const int res, const int n);
void	ft_isalpha_test(void);
void	ft_isdigit_test(void);

#endif
