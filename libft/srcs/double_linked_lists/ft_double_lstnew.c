/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double_lstnew.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 13:44:22 by jopaning          #+#    #+#             */
/*   Updated: 2021/06/02 13:44:24 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

t_double_list	*ft_double_lstnew(int content)
{
	t_double_list	*new_list;

	new_list = malloc(sizeof(*new_list));
	if (new_list == NULL)
		return (NULL);
	new_list->content = content;
	new_list->next = NULL;
	new_list->previous = NULL;
	return (new_list);
}
