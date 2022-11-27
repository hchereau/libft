/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 11:25:53 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/26 18:02:43 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFT_H
# define LIBFT_H

# include <ctype.h>
# include <stdio.h>
# include <string.h>

typedef struct  s_list                                                           
{                                                                                
	void            *content;                                                    
	struct s_list   *next;                                                       
}					t_list;

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t ft_strlen(const char *s);
#endif
