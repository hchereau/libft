/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.test.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 12:22:33 by hchereau          #+#    #+#             */
/*   Updated: 2022/12/09 15:05:48 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TEST_H

# include <stdio.h>
# include <ctype.h>
# include <stdlib.h>
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
void	memset_test(void);
void	bzero_test(void);
void	memcpy_test(void);
void	memmove_test(void);
void	strlcpy_test(void);
void	strlcat_test(void);
void	toupper_test(void);
void	tolower_test(void);
void	strchr_test(void);
void	strrchr_test(void);
void	strncmp_test(void);
void	memchr_test(void);
void	memcmp_test(void);
void	substr_test(void);
void	strjoin_test(void);
void	strtrim_test(void);
void	strnstr_test(void);
void	atoi_test(void);
// utils

void	check_int_eq(const int a, const int b, const size_t n);
void	check_int_sign_eq(const int a, const int b, const size_t n);
void	check_array_eq(const void *ar1, const void *ar2, const size_t n);
void	check_ptr_eq(const void *a, const void *b, const size_t n);
void	check_string_eq(const char *a, const char *b, const size_t n);

#endif
