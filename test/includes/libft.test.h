/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.test.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 12:22:33 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/26 17:54:18 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TEST_H

# include <stdio.h>
# include <ctype.h>
# include "libft.h"

# define GREEN "\033[32;1m"
# define RED "\033[31;1m"
# define WHITE "\033[0m"

// test

void	isalpha_test(void);
void	isdigit_test(void);
void	isalnum_test(void);
void	isascii_test(void);
void	isprint_test(void);
void	strlen_test(void);
// utils

void	check_int_eq(const int a, const int b, const size_t n);
void	check_int_sign_eq(const int a, const int b, const size_t n);

#endif
