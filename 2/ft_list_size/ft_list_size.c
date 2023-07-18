typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

int	ft_list_size(t_list *begin_list)
{
	t_list	*node;
	int		i;

	i = 0;
	node = begin_list;
	while (node)
	{
		i++;
		node = node->next;
	}
	return (i);
}
