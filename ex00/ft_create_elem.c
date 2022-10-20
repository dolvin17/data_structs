/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:06:11 by ghuertas          #+#    #+#             */
/*   Updated: 2022/10/20 13:28:30 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);
}

int	main(void)
{
	t_list	*new;

	new = ft_create_elem("I love Karol G\n"); //create content
	printf("%s", new->data); //print content
	printf("%s", new->next); //print null reference
	printf("\n");
	return (0);
}
