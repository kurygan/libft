/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkettab <mkettab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:19:13 by mkettab           #+#    #+#             */
/*   Updated: 2024/10/30 20:11:05 by mkettab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*non_const_s;
	char			*subbed;

	if (!s)
		return (NULL);
	i = 0;
	non_const_s = (char *)s;
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	if (len > ft_strlen(&s[start]))
		len = ft_strlen(&s[start]);
	subbed = malloc(sizeof(char) * len + 1);
	if (!subbed)
		return (NULL);
	while (i < start && non_const_s[i])
		i++;
	ft_strlcpy(subbed, &non_const_s[i], len + 1);
	return (subbed);
}

/*int main(void)
{
	char *dest = ft_substr("hola", 0, 18446744073709551615);
	printf("%s\n", dest);
	return 0;
}
*/
