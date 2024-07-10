#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *first = lst;
	t_list *lst1;
	int tmp;

	while(lst)
	{
		lst1 = lst->next;
		while(lst1)
		{
			if(!(cmp(lst->data,lst1->data)))
			{
				tmp =lst1->data;
				lst1->data = lst->data;
				lst->data = tmp;
			}
			lst1=lst1->next;
		}
		lst=lst->next;
	}
	return first;
}
