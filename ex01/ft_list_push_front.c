/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:53:09 by ghuertas          #+#    #+#             */
/*   Updated: 2022/10/20 14:53:22 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
/*
* Create the function ft_list_push_front which adds a new element of type t_list to the beginning of the list. 
*  It should assign data to the given argument. 
*  If necessary, it’ll update the pointer at the beginning of the list. */
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

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new;

	if (*begin_list)//check if list exist
	{
		new = ft_create_elem(data);//adding new elem called new
		new->next = *begin_list; //set new pointing next = begin list
		*begin_list = new;//set new at begin list
	}
	else//create the new element directly
		*begin_list = ft_create_elem(data);
}

int	main(void)
{
	t_list	*begin;

	begin = 0;
	ft_list_push_front(&begin, "principio de lista");
	printf("%s\n", begin->data);//print first and unic element
	printf("%s\n", begin->next);//ref to null.
	return (0);
}