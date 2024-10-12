/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alortiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 15:52:27 by alortiz-          #+#    #+#             */
/*   Updated: 2024/09/28 15:52:29 by alortiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ptrd;
	const unsigned char	*ptrs;

	if ((!dest && !src) || n == 0)
		return (dest);
	ptrd = (unsigned char *)dest;
	ptrs = (const unsigned char *)src;
	if (ptrd > ptrs && ptrd < ptrs + n)
	{
		ptrd += n;
		ptrs += n;
		while (n--)
		{
			*(--ptrd) = *(--ptrs);
		}
	}
	else
	{
		while (n--)
		{
			*ptrd++ = *ptrs++;
		}
	}
	return (dest);
}
/*int	main(void)
{
	char	src[25] = "Tetero for the baby";
	char	dest[25] = "Esquila Sunrise";

	ft_memmove(dest, src, 2);
	printf("Resultado: %s\n", dest);
	return (0);
}*/
