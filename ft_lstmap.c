#include "list.h"

t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *temp;

	if (!lst || !f)
		return NULL;
	temp = f(ft_lstnew(lst->content, lst->content_size));
	if (!temp)
		return NULL;
	if (lst->next)
		temp->next = ft_lstmap(lst->next, f);
	return temp;
}
