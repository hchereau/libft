/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 00:28:38 by hchereau          #+#    #+#             */
/*   Updated: 2022/12/10 00:34:10 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t get_next_sep(char *s, c)
{
	
}
static char *get_next_words(char **s,char c)
{
	size_t	i;
	size_t	start;
	char	*word;
	
	i = 0;
	while (i < ft_strlen(s))
	{
		if(s[i] != c)
		{
			start = i;
			i = get_next_sep(s + start, c);
			word = (char *)
			ft_strlcpy(word, s + start, i - start);
			break;
		}
	}
	return (word);
}

static size_t	get_size(const char *s,char c)
{
	size_t	i;
	size_t	size_split;
	bool	is_sep;
	
	
	i = 0;
	size_split = 1;
	is_sep = false;
	while (i < ft_strlen(s))
	{
		if (s[i] == c && is_sep == false)
		{
			++size_split;
			is_sep = true;
		}
		else if( s[i] != c) 
			is_sep = false;
		++i;
	}
	return (size_split);
}

char	**ft_split(const char *s, char c)
{
	const size_t	size_split = get_size(s, c);
	size_t			i;
	char			**split;

	split = (char **)malloc((size_split + 1) * sizeof(char *));
	if (split != NULL)
	{	
		i = 0;
		while(i < size_split)
		{
			split[i] = get_next_word(&s, c);
			++i;
		}
		split[i] = NULL;
	}
	return (split); 
}

/*
process:
-> parcourir chaine
-> separe la chaine quand il y a un separateur
-> add le mocreau dnas un tableau de char**
-> return char **
 */
