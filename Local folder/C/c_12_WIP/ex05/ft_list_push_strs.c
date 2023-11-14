#include "ft_list.h"
#include <stdlib.h>

t_list *ft_create_elem(void *data)
{
	t_list	*elem;

	elem = (struct s_list *)malloc(sizeof(t_list));
	elem->next = NULL;
	elem->data = data;
	return (elem);
}

t_list *ft_list_push_strs(int size, char **strs)
{
	t_list	*begin_list;
	t_list	*temp;

	begin_list = ft_create_elem(strs[size - 1]);
	temp = begin_list;
	while (--size > 0)
	{
		temp->next = ft_create_elem(strs[size - 1]);
		temp = temp->next;
	}
	return (begin_list);
}