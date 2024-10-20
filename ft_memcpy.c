/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tylerlover911 <tylerlover911@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 01:49:04 by mkettab           #+#    #+#             */
/*   Updated: 2024/10/20 18:49:45 by tylerlover9      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr_src;
	unsigned char	*ptr_dst;
	size_t			i;

	ptr_src = (unsigned char *)src;
	ptr_dst = (unsigned char *)dst;
	i = 0;
	if (ptr_src == NULL && ptr_dst == NULL)
		return (NULL);
	while (ptr_src[i] && i < n)
	{
		ptr_dst[i] = ptr_src[i];
		i++;
	}
	return (ptr_dst);
}

int main(){
	printf("caca");
}