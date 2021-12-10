#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>

/* struct prototypes */
typedef struct s_list
{
	void *content;
	size_t content_size;
	struct s_list *next;
} t_list;

/* lib functions */
size_t ft_strlen(const char *str);
void *ft_memcpy(void *dest, const void *src, size_t n);
int ft_toupper(int c);
int ft_islower(int c);

/* list functions */
void ft_lstadd_front(t_list **alst, t_list *new);
t_list *ft_lstnew(void const *content, size_t content_size);
void ft_lstadd_back(t_list **alst, t_list *new);
void ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void ft_lstdel(t_list **alst, void (*del)(void *, size_t));
t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
#endif
