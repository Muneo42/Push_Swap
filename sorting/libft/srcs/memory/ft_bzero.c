/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 13:45:37 by jopaning          #+#    #+#             */
/*   Updated: 2021/06/02 13:45:38 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	ft_bzero(void *s, size_t n)
{
	char				*temp;
	unsigned int		i;

	temp = s;
	i = 0;
	if (n == 0)
		return ;
	while (i < n)
	{
		temp[i] = 0;
		i++;
	}
}
