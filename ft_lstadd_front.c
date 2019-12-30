void	ft_lstadd_front(t_list **alst, t_list *new)
{
	t_list	*ptr;

	ptr = new->next;
	*alst = new;
	while (ptr)
		new->next = ptr->next;
}
