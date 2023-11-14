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
