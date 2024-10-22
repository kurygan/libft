/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkettab <mkettab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:14:34 by mkettab           #+#    #+#             */
/*   Updated: 2024/10/22 18:41:31ettab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*last_occ;
	unsigned char char_c;
	
	char_c = (unsigned char)c;
	last_occ = NULL;
	while (*s)
	{
		if ((char)*s == char_c)
			last_occ = (char *)s;
		s++;
	}
	if ((char)*s == char_c)
		last_occ = (char *)s;	
	return (last_occ);
}

/* int main(){
	char src[] = "bonjour";
	char *str = ft_strrchr(src, '\0');

	return EXIT_SUCCESS;
}
 */