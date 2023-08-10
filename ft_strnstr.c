/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamanzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:14:19 by jamanzan          #+#    #+#             */
/*   Updated: 2023/08/07 15:18:08 by jamanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (str[i] && (i < len))
	{
		while ((str[i + j] == substr[j]) && substr[j] && ((i + j) < len))
			j++;
		if (!substr[j])
			return ((char *) &str[i]);
		j = 0;
		i++;
	}
	if (!substr[0])
		return ((char *) &str[i]);
	return (NULL);
}
