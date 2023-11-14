#include "ft_list.h"
#include <stdlib.h>

void ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
    t_list  *temp;
    while (begin_list->next)
    {
        free_fct(begin_list->data);
        temp = begin_list->next;
        begin_list->next = NULL;
        begin_list = temp;
    }
}
