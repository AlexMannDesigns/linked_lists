#include "list.h"

void ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (!(*alst))
		return ;
	//memory freed in the del pointer function
	del((*alst)->content, (*alst)->content_size);
	//dont free the memory of next
	free(*alst);
	//set pointer to NULL
	*alst = NULL;
}
