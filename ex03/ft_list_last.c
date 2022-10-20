/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:25:28 by ghuertas          #+#    #+#             */
/*   Updated: 2022/10/20 19:46:44 by ghuertas         ###   ########.fr       */
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

t_list	*ft_list_last(t_list *begin_list)
{
	while (begin_list && begin_list->next != NULL)
		begin_list = begin_list->next;
	return (begin_list);
}
/*Not working properly
Check why is not printing*/

int	main(void)
{
	t_list	*new_list;

	new_list = ft_create_elem("Women in crypto");
	new_list->next = ft_create_elem("Its raining brains");
	printf("%s\n", ft_list_last(new_list));
	return (0);
}
