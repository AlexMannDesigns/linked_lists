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

void *ft_memcpy(void *dest, const void *src, size_t n);
t_list *ft_lstnew(void const *content, size_t content_size);
size_t ft_strlen(char *str);
#endif
