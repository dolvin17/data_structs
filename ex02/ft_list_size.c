/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:03:29 by ghuertas          #+#    #+#             */
/*   Updated: 2022/10/20 15:29:49 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*new;
	t_list	*second_elem;

	new = malloc(sizeof(t_list));
	second_elem = malloc(sizeof(t_list));
	if (!new || !second_elem)
		return (NULL);
	new->data = data;
	new->next = second_elem;
	second_elem->next = NULL;
	return (new);
}

int	ft_list_size(t_list *begin_list)
{
	t_list	*list;//declare a list to asign begin_list
	int		i;//declare an iterator

	i = 0;
	list = begin_list;
	while (list)//while list exists
	{
		i++;//iter each element
		list = list->next;//pointing next element after iteration.
	}
	return (i);//total iterations.
}
int	main(void)
{
	t_list	*new_list;

	new_list = ft_create_elem("I love Karol G\n");
	ft_list_size(new_list);
	printf("%d\n", ft_list_size(new_list));
	return (0);
}