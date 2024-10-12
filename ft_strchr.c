/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alortiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:52:37 by alortiz-          #+#    #+#             */
/*   Updated: 2024/10/01 10:52:46 by alortiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *src, int c)
{
	const char	*ptrs;

	ptrs = (const char *)src;
	while (*ptrs != (char)c && *ptrs != '\0')
	{
		ptrs++;
	}
	if (*ptrs == (char)c)
		return ((char *)ptrs);
	else
		return (NULL);
}
/*int	main(void)
{
	char	str[] = "42 Barcelona";
	char	let = 'l';
	char	*found = ft_strchr(str, let);
	
	if (found)
		printf("Char '%c' found in the %ld byte ", *found, found - str);
	else
		printf("Char not found");
	return(0);
}*/
