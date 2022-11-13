/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:10:40 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/13 07:57:04 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>
# include <bsd/string.h>

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_ascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memset(void *s, int c, size_t n);
size_t	ft_strlen(const char *s);
void	bzero(void *s, size_t n);
size_t	ft_strlcpy(char *dest, char *src, size_t size);
char	*strchr(const char *s, int c);
int		ft_atoi(char *str);
void	*memchr(const void *s, int c, size_t n);
int		memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
size_t	ft_strlcat(char *dest, char *src, unsigned int size);
size_t	ft_strlcpy(char *dest, char *src, size_t size);
int		ft_strncmp(const char *s1, const char *s2);
char	*strnstr(const char *s1, const char *s2);
char	*strchr(const char *s, nt c);
int		toupper(int c);
int		tolower(int c);
#endif
