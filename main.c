#include "list.h"

void print_content(t_list *elem)
{
	printf("%s\n", elem->content);
}

int main(void)
{
	t_list *list;

	//setting up the list
	list = ft_lstnew("hello", 6);
	ft_lstadd_front(&list, ft_lstnew("my string", ft_strlen("my string") + 1));
	ft_lstadd_front(&list, ft_lstnew("this is the front of the list", ft_strlen("this is the front of the list") + 1));
	ft_lstadd_back(&list, ft_lstnew("this is the back of the list", ft_strlen("this is the back of the list") + 1));
	ft_lstadd_front(&list, ft_lstnew("this is the new front", ft_strlen("this is the new front") + 1));
	ft_lstadd_back(&list, ft_lstnew("this is the new back", ft_strlen("this is the new back") + 1));

	//printing each node sequentially
	printf("ft_lstnew, add_front & add_back tests...\n\n");
	printf("%s %d\n", list->content, list->content_size);
	printf("%s %d\n", list->next->content, list->next->content_size);
	printf("%s %d\n", list->next->next->content, list->next->next->content_size);
	printf("%s %d\n", list->next->next->next->content, list->next->next->next->content_size);
	printf("%s %d\n", list->next->next->next->next->content, list->next->next->next->next->content_size);
	printf("%s %d\n", list->next->next->next->next->next->content, list->next->next->next->next->next->content_size);

	t_list *n_list = NULL;
	t_list *o_list = NULL;
	ft_lstadd_back(&n_list, ft_lstnew("this is a NULL test for back", ft_strlen("this is a NULL test for back") + 1));
	ft_lstadd_front(&o_list, ft_lstnew("this is a NULL test for front", ft_strlen("this is a NULL test for front") + 1));
	printf("\n%s\n", n_list->content);
	printf("%s\n", o_list->content);
	//printing each node again...
	printf("\nft_lstiter tests...\n\n");
	ft_lstiter(list, print_content);
	n_list = NULL;
	ft_lstiter(n_list, print_content);
	return (0);
}
