/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 12:25:58 by hchereau          #+#    #+#             */
/*   Updated: 2022/12/04 23:15:17 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

int	main(void)
{
	isalpha_test();
	isdigit_test();
	isalnum_test();	
	isascii_test();
	isprint_test();
	strlen_test();
	memset_test();
	bzero_test();
	memcpy_test();
	memmove_test();
	strlcpy_test();
	strlcat_test();
	toupper_test();
	tolower_test();
	strchr_test();
	strrchr_test();
	strncmp_test();
	memchr_test();
	memcmp_test();
}
