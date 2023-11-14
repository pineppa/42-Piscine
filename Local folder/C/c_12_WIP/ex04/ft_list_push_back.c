#include "ft_list.h"
#include <stdlib.h>

void ft_list_push_back(t_list **begin_list, void *data)
{
    t_list  *temp;
    t_list  *new_data;

    new_data->data = data;
    new_data->next = NULL;
    if (*begin_list)
    {
        temp = *begin_list;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = new_data;
    }
    else
    {
        *begin_list = new_data;
    }
}