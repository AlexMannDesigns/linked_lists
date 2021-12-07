#include "list.h"

t_list *ft_lstnew(void const *content, size_t content_size)
{
	t_list *res;

	res = (t_list *)malloc(sizeof(t_list));
	if (!res)
		return NULL;
	//check if content == NULL
	if (content)
	{
		//malloc fresh mem, return null if fail
		res->content = malloc(content_size);
		if (!(res->content))
		{
			free(res);
			return (NULL);
		}
		//initialise content and content size by copying params
		ft_memcpy(res->content, content, content_size);
		res->content_size = content_size;
	}
	else //if content == NULL, content_size = 0
	{
		res->content = NULL;
		res->content_size = 0;
	}
	res->next = NULL;
	return (res);
}
