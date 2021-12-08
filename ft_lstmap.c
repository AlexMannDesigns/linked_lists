#include "list.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	//iterate list and apply 'f' to each link, creating a 'fresh' list from the result
	//remember malloc protection
	t_list	*temp;
	temp = f(ft_lstnew(lst->content, lst->content_size));
	return temp;
}

