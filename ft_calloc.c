#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*ptr;

	i = 0;
	if (!(ptr = (void *)malloc(count * size)))
		return (0);
	while (i < count)
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}

int	main(void)
{
	printf("%s", (char *)ft_calloc(5, 0));
	return (0);
}
