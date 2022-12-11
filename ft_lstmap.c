#include "libft.h"

static t_list *lst_fill(t_list *lst, void *(*f)(void *))
{
	t_list	*fill;

	if (f == NULL)
		fill = lstnew(lst->content);
	else
		fill = ft_lstnew(f(lst->content));
	return (fill);
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_first;
	t_list	*lst_new;

	if (lst == NULL)
		return (NULL);
	new_first = lst_fill(lst, f);
	lst_new = new_first;
	while (lst->next != NULL && lst_new != NULL)
	{
		lst_new->next = lst_fill(lst->next, f);
		if (lst_new->next == NULL)
		{
			ft_lstclear(&new_head, del);
			break ;
		}
		lst_new = lst_new->next;
	}
	return (new_head);
}
