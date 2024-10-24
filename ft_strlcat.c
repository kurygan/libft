/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkettab <mkettab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:11:09 by mkettab           #+#    #+#             */
/*   Updated: 2024/10/24 01:40:43 by mkettab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;
	size_t	len_src;

	len_src = ft_strlen(src);
	i = 0;
	j = 0;
	if (dstsize == 0)
		return (len_src);
	while (dst[j])
		j++;
	len_dst = ft_strlen(dst);
	if (dstsize < len_dst)
		return (dstsize + len_src);
	while (src[i] && j + i < dstsize - 1)
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[j + i] = 0;
	return (len_dst + len_src);
}
