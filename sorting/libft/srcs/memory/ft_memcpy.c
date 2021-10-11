/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 13:48:07 by jopaning          #+#    #+#             */
/*   Updated: 2021/06/02 13:48:08 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int		i;
	const char			*tempsrc;
	char				*tempdest;

	i = 0;
	tempsrc = src;
	tempdest = dst;
	if (tempsrc == (void *)0 && tempdest == (void *)0)
		return (NULL);
	while (i < n)
	{
		tempdest[i] = tempsrc[i];
		i++;
	}
	return (tempdest);
}
