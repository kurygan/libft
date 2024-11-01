/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkettab <mkettab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 01:49:04 by mkettab           #+#    #+#             */
/*   Updated: 2024/11/02 00:13:30 by mkettab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr_src;
	unsigned char	*ptr_dst;
	size_t			i;

	ptr_src = (unsigned char *)src;
	ptr_dst = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		ptr_dst[i] = ptr_src[i];
		i++;
	}
	return (ptr_dst);
}

/* int main(){
	void *mem = malloc(30);
	if (!mem)
		return EXIT_FAILURE;
	mem = ft_memcpy(mem, "zy\0xw\0vu\0\0tsr", 11);
	return EXIT_SUCCESS;
} */
