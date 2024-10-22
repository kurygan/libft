/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkettab <mkettab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 22:00:36 by mkettab           #+#    #+#             */
/*   Updated: 2024/10/22 01:55:05 by mkettab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*char_s1;
	unsigned char	*char_s2;
	size_t			i;

	char_s1 = (unsigned char *)s1;
	char_s2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (char_s1[i] == char_s2[i] && i < n - 1)
		i++;
	return (char_s1[i] - char_s2[i]);
}

/* int main(){
	char s[] = {-128, 0, 127, 0};
	char sCpy[] = {-128, 0, 127, 0};
	int result = ft_memcmp(s, sCpy, 4);
	return EXIT_SUCCESS;

}
 */