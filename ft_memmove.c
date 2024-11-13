/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkettab <mkettab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 18:53:32 by mkettab           #+#    #+#             */
/*   Updated: 2024/11/11 20:42:55 by mkettab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;
	int				i;

	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	i = 0;
	if (dst == src || len == 0)
		return (ptr_dst);
	if (dst > src)
	{
		i = (int)len - 1;
		while (i >= 0)
		{
			ptr_dst[i] = ptr_src[i];
			i--;
		}
	}
	else
		ft_memcpy(ptr_dst, ptr_src, len);
	return (ptr_dst);
}
