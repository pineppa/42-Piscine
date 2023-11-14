#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_last(t_list *begin_list)
{
	int	count;
	t_list	*last;

	count = 0;
	if (begin_list->next == NULL)
		return (begin_list);
	else
		last = ft_list_last(begin_list->next);
	return (last);
}
