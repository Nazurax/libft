/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alortiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:27:40 by alortiz-          #+#    #+#             */
/*   Updated: 2024/10/02 17:27:42 by alortiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (big[i + j] == little[j] && little[j] && (i + j) < len)
			{
				j++;
			}
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
/*int	main(void)
{
	const char	big[22] = "42 Barcelona es genial";
	const char	little[3] = "es";
	size_t	len = 18;
	char	*result = ft_strnstr(big, little, len);

	if (result)
		printf("Substring found: %s\n", result);
	else
		printf("Substring not found within the first %zu characters.\n", len);
	return (0);
}*/
