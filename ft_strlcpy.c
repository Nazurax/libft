/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alortiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 15:47:40 by alortiz-          #+#    #+#             */
/*   Updated: 2024/09/28 15:47:45 by alortiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (size > 0)
	{
		i = 0;
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}
/*int	main(void)
{
	char	src[30] = "B Y E O W O R L D";
	char	dest[30] = "H E L L O M U N D O";
	
	ft_strlcpy(dest, src, 8);
	printf("Resultado: %s\n", dest);
	return (0);
}*/
