/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.test.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imback <imback@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 12:03:26 by imback            #+#    #+#             */
/*   Updated: 2023/12/08 00:12:28 by imback           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TEST_H
# define LIBFT_TEST_H

# include "libft.h"
# include <stdio.h>
# include <ctype.h>
# include <string.h>
# include <bsd/string.h>

# define GREEN "\033[32;1m"
# define RED "\033[31;1m"
# define WHITE "\033[0m"

void	check_int_eq(const int function, const int res, const int n);
void	check_sign_eq(const int function, const int res, const int n);
void	check_size_t_eq(const size_t function, const size_t res, const int n);
void	check_array_eq(const void *ar1, const void *ar2, const int n);
void	check_string_eq(const char *s1, const char *s2, const int n);
void	ft_isalpha_test(void);
void	ft_isdigit_test(void);
void	ft_isalnum_test(void);
void	ft_isascii_test(void);
void	ft_isprint_test(void);
void	ft_strlen_test(void);
void	ft_memset_test(void);
void	ft_bzero_test(void);
void	ft_memcpy_test(void);
void	ft_memmove_test(void);
void	ft_strlcpy_test(void);
void	ft_strlcat_test(void);
void	ft_toupper_test(void);
void	ft_strchr_test(void);

#endif
