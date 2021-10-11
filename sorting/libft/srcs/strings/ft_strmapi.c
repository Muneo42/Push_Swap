/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopaning <jopaning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 13:49:48 by jopaning          #+#    #+#             */
/*   Updated: 2021/06/02 13:49:49 by jopaning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	unsigned int				i;
	char						*final;

	final = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (final == NULL)
		return (NULL);
	ft_strlcpy(final, s, ft_strlen(s));
	i = 0;
	while (s[i] != '\0')
	{
		final[i] = f(i, s[i]);
		i++;
	}
	final[i] = '\0';
	return (final);
}
