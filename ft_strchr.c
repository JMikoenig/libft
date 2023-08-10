/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamanzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:56:53 by jamanzan          #+#    #+#             */
/*   Updated: 2023/08/03 15:57:51 by jamanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int i)
{
	char	*res;

	res = NULL;
	while (*s)
	{
		if (*s == (char)i)
			res = (char *) s;
		s++;
	}
	if (!i)
		return((char *) s);
	return (res);
}
