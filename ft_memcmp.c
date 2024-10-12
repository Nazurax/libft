/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alortiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 20:59:59 by alortiz-          #+#    #+#             */
/*   Updated: 2024/10/01 21:00:03 by alortiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t size)
{
	const unsigned char	*ptrs1;
	const unsigned char	*ptrs2;
	size_t				i;

	ptrs1 = (const unsigned char *)s1;
	ptrs2 = (const unsigned char *)s2;
	i = 0;
	while (i < size)
	{
		if (ptrs1[i] != ptrs2[i])
			return ((int)(ptrs1[i] - ptrs2[i]));
		i++;
	}
	return (0);
}
/*int main(void)
{
	char	str1[] = "look_fck_the_size";
	char	str2[] = "look_fck_the_size";
	size_t	size = 8;
	int	result = ft_memcmp(str1, str2, size);

	if (result > 0)
		printf("%d str1 is greater than str2\n", ft_memcmp(str1, str2, size));
	else if (result < 0)
		printf("%d str1 is less than str2\n", ft_memcmp(str1, str2, size));
	else
		printf("%d str1 is the same as str2\n", ft_memcmp(str1, str2, size));
	return (0);
}*/
