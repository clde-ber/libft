t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;

	if (!(new_lst = malloc(sizeof(t_list))))
		return (0);
	while (lst++)
	{
		*new_lst = *lst;
		if ((*f)(new_lst->content) != lst->content)
			(*del)(lst->content);
		else
			new_lst->content = lst->content;
		free(lst);
	}
	return (new_lst);
}
