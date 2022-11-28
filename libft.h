/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 11:25:53 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/28 20:34:08 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFT_H
# define LIBFT_H

# include <ctype.h>
# include <stdio.h>
# include <string.h>
# include <stdint.h>

typedef struct  s_list                                                           
{                                                                                
	void            *content;                                                    
	struct s_list   *next;                                                       
}					t_list;

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void	*src, size_t n); 
void	*ft_memmove(void *dest, const	void	*src, size_t n); 
#endif
