/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double_lstsize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 13:44:27 by jopaning          #+#    #+#             */
/*   Updated: 2021/06/02 13:44:28 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_double_lstsize(t_double_list *lst)
{
	int				compt;
	t_double_list	*temp;

	compt = 0;
	if (lst == NULL)
		return (0);
	temp = lst;
	while (temp != NULL)
	{
		compt++;
		temp = temp->next;
	}
	return (compt);
}
