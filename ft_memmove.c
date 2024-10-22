/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkettab <mkettab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 18:53:32 by mkettab           #+#    #+#             */
/*   Updated: 2024/10/22 02:27:47 by mkettab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;
	size_t			i;

	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	i = 0;
	if (dst == src || len == 0)
		return (ptr_dst);
	if (dst > src)
	{
		i = len - 1;
		while (i >= 0 && ptr_src[i])
		{
			ptr_dst[i] = ptr_src[i];
			i--;
		}
	}
	else
		ft_memcpy(ptr_dst, ptr_src, len);
	return (ptr_dst);
}
