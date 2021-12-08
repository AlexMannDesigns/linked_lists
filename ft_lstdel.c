#include "list.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *temp;

	if (*alst != NULL)
	{	
		temp = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		ft_lstdel(&temp, del);
		free(*alst);
		*alst = NULL;
	}
}
