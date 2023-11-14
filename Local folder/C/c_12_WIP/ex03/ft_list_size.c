#include "ft_list.h"
#include <stdlib.h>

int	ft_list_size(t_list *begin_list)
{
	int	count;

	count = 0;
	while (begin_list->next != NULL)
		count = 1 + ft_list_size(begin_list->next);
	return (count);
}
