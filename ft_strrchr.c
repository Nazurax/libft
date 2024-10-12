/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alortiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:55:22 by alortiz-          #+#    #+#             */
/*   Updated: 2024/10/01 14:55:24 by alortiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	const char	*ptrs;
	int			i;
	int			pos;

	ptrs = (const char *)src;
	i = 0;
	pos = -1;
	c = (unsigned char)c;
	while (ptrs[i] != '\0')
	{
		if (ptrs[i] == (char)c)
			pos = i;
		i++;
	}
	if (c == '\0')
		return ((char *)(ptrs + i));
	if (pos != -1)
		return ((char *)(ptrs + pos));
	return (NULL);
}
/*int	main(void)
{
	char	str[] = "lalocadesantiago";
	char	let = 'g';
	char	*found = ft_strrchr(str, let);
	
	if (found)
		printf("Char '%c' found in the %ld byte\n", *found, found - str);
	else
		printf("Char not found\n");
	return(0);
}*/
