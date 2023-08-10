/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamanzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:36:54 by jamanzan          #+#    #+#             */
/*   Updated: 2023/08/01 15:42:58 by jamanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*ptr1;
	const unsigned char	*ptr2;

	ptr1 = dest;
	ptr2 = src;
	i = 0;
	if (ptr2 < ptr1)
		while (++i <= n)
			ptr1[n - i] = ptr2[n - i];
	else
		while (n-- > 0)
			*(ptr1++) = *(ptr2++);
	return (dest);
}
