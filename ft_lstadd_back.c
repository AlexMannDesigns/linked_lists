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
