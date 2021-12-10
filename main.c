#include "list.h"

void print_content(t_list *elem)
{
	printf("%s\n", (char *)(elem)->content);
}

void delete_node(void *content, size_t size)
{
	free(content);
	size = size * 0;
}

t_list *list_toupper(t_list *elem)
{
	size_t len;
	size_t i;
	char *str;

	len = elem->content_size;
	str = (char *)(elem->content);
	i = 0;
	while (i < len)
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
	return elem;
}

int main(void)
{
	t_list *list;
	t_list *seven;
	//setting up the list
	list = ft_lstnew("4 hello", 6);
	seven = ft_lstnew("7 test", 7);
	ft_lstadd_front(&list, ft_lstnew("3 my string", ft_strlen("3 my string") + 1));
	ft_lstadd_front(&list, ft_lstnew("2 this is the front of the list", ft_strlen("2 this is the front of the list") + 1));
	ft_lstadd_back(&list, ft_lstnew("5 this is the back of the list", ft_strlen("5 this is the back of the list") + 1));
	ft_lstadd_front(&list, ft_lstnew("1 this is the new front", ft_strlen("1 this is the new front") + 1));
	ft_lstadd_back(&list, ft_lstnew("6 this is the new back", ft_strlen("6 this is the new back") + 1));
	ft_lstadd_back(&list, seven);
	ft_lstadd_back(&list, ft_lstnew("8 this is the new new back", ft_strlen("8 this is the new new back") + 1));

	//printing each node sequentially
	// printf("ft_lstnew, add_front & add_back tests...\n\n");
	// printf("%s %d\n", list->content, list->content_size);
	// printf("%s %d\n", list->next->content, list->next->content_size);
	// printf("%s %d\n", list->next->next->content, list->next->next->content_size);
	// printf("%s %d\n", list->next->next->next->content, list->next->next->next->content_size);
	// printf("%s %d\n", list->next->next->next->next->content, list->next->next->next->next->content_size);
	// printf("%s %d\n", list->next->next->next->next->next->content, list->next->next->next->next->next->content_size);

	t_list *n_list = NULL;
	t_list *o_list = NULL;
	ft_lstadd_back(&n_list, ft_lstnew("this is a NULL test for back", ft_strlen("this is a NULL test for back") + 1));
	ft_lstadd_front(&o_list, ft_lstnew("this is a NULL test for front", ft_strlen("this is a NULL test for front") + 1));
	// printf("\n%s\n", n_list->content);
	// printf("%s\n", o_list->content);
	//printing each node again...
	printf("\nft_lstiter tests...\n\n");
	ft_lstiter(list, print_content);

	t_list *new_list;
	new_list = ft_lstmap(list, list_toupper);
	printf("\n\nMapped list:\n");
	ft_lstiter(new_list, print_content);
	printf("\n\noriginal list:\n");
	ft_lstiter(list, print_content);
	printf("\n\n%s\n", (char *)new_list->next->next->content);
	printf("%s\n", (char *)list->next->next->content);

	// n_list = NULL;
	// ft_lstiter(n_list, print_content);
	//printf("\n\ndeleting node 6 and printing again...\n\n");
	//ft_lstdelone(&list->next->next->next->next->next, delete_node);
	//ft_lstiter(list, print_content);

	//printf("\n\ndeleting list from node 5 and printing again...\n\n");
	//ft_lstdel(&list->next->next->next->next, delete_node);
	//ft_lstiter(list, print_content);
	//printf("\n\nprinting list from node 7...\n\n");
	//ft_lstiter(seven, print_content);

	return (0);
}
