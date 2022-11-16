/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 13:33:40 by hchereau          #+#    #+#             */
/*   Updated: 2022/07/28 19:21:01 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

char	**ft_order(char *str, char *charset, char **tab);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
			i++;
	return (i);
}

int	ft_encounter(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
			if (str[i] == c)
					return (1);
			i++;
	}
	return (0);
}

int	ft_word_count(char *str, char *charset)
{
	int		i;
	bool	last_is_separator;
	int		count;

	i = 0;
	count = 0;
	last_is_separator = true;
	while (str[i])
	{
			if (ft_encounter(str[i], charset))
					last_is_separator = true;
			else
			{
					if (last_is_separator)
							count++;
					last_is_separator = false;
			}
			printf("count --> %d\n", count);
			i++;
	}
	printf("\n");
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char		**tab;

	tab = (char **)malloc(sizeof(char *) * (ft_word_count(str, charset) + 1));
	if (tab == NULL)
			return (NULL);
	return (ft_order(str, charset, tab));
}

char	**ft_order(char *str, char *charset, char **tab)
{
	const int count_word = ft_word_count(str, charset);
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (j < count_word)
	{
			tab[j] = malloc(sizeof(char) * (ft_strlen(str) + 1));
			if (tab[j] != NULL)
					return (NULL);
			k = 0;
			while (ft_encounter(str[i], charset) == 1)
					i++;
			while (ft_encounter(str[i], charset) == 0)
			{
					tab[j][k] = str[i];
					i++;
					k++;
			}
			tab[j][k] = '\0';
			j++;
	}
	tab[j] = NULL;
	return (tab);
}


int	main(int argc, char **argv)
{
	if (argc > 2)
	{
			char **words = ft_split(argv[1], argv[2]);
			int i;
//			printf("%d \n", ft_word_count(argv[1], argv[2]));
			i = 0;
			while (words[i])
			{
					printf("%s \n", words[i]);
					i++;
			}
	}
}
