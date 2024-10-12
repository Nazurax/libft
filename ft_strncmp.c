/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alortiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:20:09 by alortiz-          #+#    #+#             */
/*   Updated: 2024/10/01 17:20:12 by alortiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (str1[i] != '\0' || str2[i] != '\0'))
	{
		if (str1[i] != str2[i])
		{
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		}
		i++;
	}
	return (0);
}
/*int	main(void)
{
	char str1[] = "Hola Mundo";
	char str2[] = "Hola ";
	size_t n = 8;
	int result = ft_strncmp(str1, str2, n);
	
	if (result < 0)
		printf("str1 < str2: %d\n", result);
	else if (result > 0)
		printf("str1 > str2: %d\n", result);
	else
		printf("str1 = str2: %d\n", result);
	return (0);	
}*/
