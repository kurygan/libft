/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkettab <mkettab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 22:00:36 by mkettab           #+#    #+#             */
/*   Updated: 2024/10/19 00:12:23 by mkettab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *char_s1 = (unsigned char *)s1;
	unsigned char *char_s2 = (unsigned char *)s2;
	size_t i;

	i = 0;
	if(n == 0)
		return (NULL);
	while (char_s1[i] && char_s2[i] && *char_s1 == *char_s2 && i < n - 1)
	{
		char_s1++;
		char_s2++;
	}
	return (*char_s1 - *char_s2);
}
