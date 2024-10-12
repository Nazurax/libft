/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alortiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 11:47:03 by alortiz-          #+#    #+#             */
/*   Updated: 2024/09/28 11:47:08 by alortiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char			*ptrd;
	const char		*ptrs;

	if (n && !dest && !src)
		return (NULL);
	ptrd = (char *)dest;
	ptrs = (const char *)src;
	while (n--)
	{
		*ptrd++ = *ptrs++;
	}
	return (dest);
}
/*int	main(void)
{
	char	src[30] = "B Y E O W O R L D";
	char	dest[30] = "H E L L O M U N D O";
	
	ft_strlcpy(dest, src, 8);
	printf("Resultado: %s\n", dest);
	return (0);
}*/
