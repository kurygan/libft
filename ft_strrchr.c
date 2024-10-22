/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkettab <mkettab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 01:39:22 by mkettab           #+#    #+#             */
/*   Updated: 2024/10/23 01:41:52 by mkettab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*last_occ;

	last_occ = NULL;
	while (*s)
	{
		if ((char)*s == (char)c)
			last_occ = (char *)s;
		s++;
	}
	if ((char)*s == (char)c)
		last_occ = (char *)s;
	return (last_occ);
}

/* int main(){
	char src[] = "bonjour";
	char *str = ft_strrchr(src, '\0');

	return EXIT_SUCCESS;
}
 */