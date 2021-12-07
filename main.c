#include "list.h"

void ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *temp;

	//save front of the list into a tmp variable
	temp = *alst;
	//iterate through list until next = NULL
	while ((*alst)->next != NULL)
		(*alst) = (*alst)->next;
	//set next pointer of last node to new node
	(*alst)->next = new;
	//reset list address to front node
	(*alst) = temp;
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
	printf("%s %d\n", list->content, list->content_size);
	printf("%s %d\n", list->next->content, list->next->content_size);
	printf("%s %d\n", list->next->next->content, list->next->next->content_size);
	printf("%s %d\n", list->next->next->next->content, list->next->next->next->content_size);
	printf("%s %d\n", list->next->next->next->next->content, list->next->next->next->next->content_size);
	printf("%s %d\n", list->next->next->next->next->next->content, list->next->next->next->next->next->content_size);
	return (0);
}
