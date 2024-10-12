/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alortiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:57:47 by alortiz-          #+#    #+#             */
/*   Updated: 2024/10/01 17:57:49 by alortiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	const unsigned char	*ptrs;
	unsigned char		let;

	ptrs = (const unsigned char *)src;
	let = (unsigned char )c;
	while (n > 0)
	{
		if (*ptrs == let)
		{
			return ((void *)ptrs);
		}
		ptrs++;
		n--;
	}
	return (NULL);
}
/*int	main(void)
{
	char	str[] = "42 Brcelona";
	char	let = 'a';
	int	size = 10;
	char	*found = (char *)ft_memchr(str, let, size);

	
	if (found)
		printf("Char '%c' found in the %ld\n byte ", *found, found - str);
	else
		printf("Char '%c' not found within first %d bytes\n", let, size);
	return(0);
}*/
