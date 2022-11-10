/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:10:40 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/09 14:28:59 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_isalnum(int	c);
int	ft_isalpha(int	c);
int	ft_ascii(int	c);
int	ft_isdigit(int	c);
int	ft_isprint(int	c);
void	*	ft_memset(void	*s, int c, size_t n);
size_t	ft_strlen(const char *s);
void	bzero(void *s, size_t n);
