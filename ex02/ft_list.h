/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:03:18 by ghuertas          #+#    #+#             */
/*   Updated: 2022/10/20 15:03:24 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

/*Declaration vs Definition of Structures
There is a technical difference:
A declaration simply specifies the name and format of the structure, but without memory storage reservation.
The definition specifies a new data type: struct s_list.
Each variable definition for a given structure creates an area */
typedef struct	s_list //struct name
{
	struct s_list	*next;//data type followed member name
	void			*data;//data type followed member name
}					t_list;

t_list	*ft_create_elem(void *data);
#endif