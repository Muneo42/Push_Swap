/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 11:20:36 by jopaning          #+#    #+#             */
/*   Updated: 2021/10/11 11:20:39 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_find_size(long n)
{
	int	compt;

	compt = 0;
	if (n <= 0)
	{
		n = n * -1;
		compt++;
	}
	while (n > 0)
	{
		n = n / 10;
		compt++;
	}
	return (compt);
}

char	*ft_itoa(int n)
{
	char		*rslt;
	long		store;
	int			i;
	int			j;

	store = n;
	rslt = malloc(sizeof(char) * ft_find_size(n) + 1);
	if (rslt == NULL)
		return (NULL);
	i = ft_find_size(n) - 1;
	j = 0;
	if (store < 0)
	{
		rslt[j] = '-';
		store = store * -1;
		j++;
	}
	while (i >= j)
	{
		rslt[i] = '0' + store % 10;
		store = store / 10;
		i--;
	}
	rslt[ft_find_size(n)] = '\0';
	return (rslt);
}
