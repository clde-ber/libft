t_list	*ft_lstlast(t_list *lst)
{
	t_list *current;

	current = lst;
	if (current == 0)
		return (current);
	while (current->next)
		current = current->next;
	return (current);
}
