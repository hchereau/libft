
#include "libft.h"

static bool	is_size_correct(const char *s, unsigned int start)
{
	return (s !=NULL && strlen(s) >= start);
}


char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char *substr;

	if (is_size_correct(s, start))	
	{
		substr = (char *)malloc((len + 1) * sizeof(char));
		if (substr != NULL)
			ft_strlcpy(substr, s + start, len + 1);
	}
	else
		substr = NULL;
	return (substr);
}
/*
process:
-> malloc substr (protection)
-> strlcpy
 */

