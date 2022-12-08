#include "libft.h"

static	int	size_trim(const char *s1, const char *set)
{
	size_t i;
	size_t size;
	
	i = 0;
	size = 0;
	while (i < ft_strlen(s1))
	{
		if (!is_char_valid(s1[i], set))
			++size;
		++i;
	}
	return (size);
}

static bool is_char_valid(const char car, const char *set)
{
	size_t	i:
	bool	valid;
	
	i = 0;
	valid = true;
	while (i < ft_strlen(set))
	{
		if (car == set[i])
			valid = false;
		++i;
	}
	return (valid);
}


char *ft_strtrim(char const *s1, char const *set)
{
	char *trim;
	size_t i;

	i = 0;
	trim = (char *)malloc(size_trim(s1, set) * sizeof(char));
	if (trim != NULL)
	{
		while (i < ft_strlen(s1))
		{
			if (is_char_valid(s1[i], set))
				trim = s1[i];
			++i;
		}
	}
	return (trim);
}

					/*
process:
-> malloc trim;
-> parcours la chaine set
-> cherche un caractere de set dans s1
-> substr  

					 */
