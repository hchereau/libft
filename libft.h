/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 11:25:53 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/26 12:39:01 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFT_H
# define LIBFT_H

# include <ctype.h>
# include <stdio.h>

typedef struct  s_list                                                           
{                                                                                
	void            *content;                                                    
	struct s_list   *next;                                                       
}					t_list;

int	ft_isalpha(int c);

#endif
