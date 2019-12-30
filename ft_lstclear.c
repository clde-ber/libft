void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list **tmp;

	tmp = lst;
	if (*tmp)
	{
	while ((*tmp)->next)
	{
		while((*tmp)->next)
			(*del)((*lst)->content);
		(*del)(*lst);
		*lst = (*tmp)->next;
	}
	(*del)(*lst);
	free(lst);
	}
	*lst = NULL;
}
