#include "list.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*cur;
	int		temp;
	int		sorted;

	cur = lst;
	while (sorted)
	{
		sorted = 0;
		while (cur && cur->next)
		{
			if (cmp(cur->data, cur->next->data) == 0)
			{
				temp = cur->data;
				cur->data = cur->next->data;
				cur->next->data = temp;
				sorted = 1;
			}
			cur = cur->next;
		}
		cur = lst;
	}
	return (lst);
}
