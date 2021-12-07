#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	void *content;
	size_t content_size;
	struct s_list *next;
} t_list;

size_t ft_strlen(char *str);
void *ft_memcpy(void *dest, const void *src, size_t n);
void ft_lstadd_front(t_list **alst, t_list *new);
t_list *ft_lstnew(void const *content, size_t content_size);
void ft_lstadd_back(t_list **alst, t_list *new);

#endif
