#include "list.h"

void ft_lstadd_front(t_list **alst, t_list *new)
{
	//check alst contains a value, if not, set it to new
	if (!(*alst))
	{
		*alst = new;
		return;
	}
	//next of new points to node at front of the list
	new->next = *alst;
	//alst now points to new node
	*alst = new;
}