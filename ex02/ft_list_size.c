/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:03:29 by ghuertas          #+#    #+#             */
/*   Updated: 2022/10/20 16:55:29 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*new;

	new = malloc(sizeof(t_list));//Reserve space for new element
	if (!new)
		return (NULL);
	new->data = data;//pointing new element to struct
	new->next = NULL;//seting next position to NULL
	return (new);//return new element created
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
	printf("%d\n", ft_list_size(new_list));//print 2 elements
	return (0);
}