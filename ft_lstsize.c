#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size_lst;

	size_lst = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		++size_lst;
	}
	return (size_lst);
}
