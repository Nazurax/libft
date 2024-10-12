/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alortiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 20:51:03 by alortiz-          #+#    #+#             */
/*   Updated: 2024/10/07 20:51:39 by alortiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	f;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	f = ft_strlen(s1);
	while (f > i && ft_strchr(set, s1[f - 1]))
		f--;
	return (ft_substr(s1, i, f - i));
}
/*int	main(void)
{
	char	str[] = "ooHello Worldooooo";
	char	set[] = "odr";
	char	*result;

	result = ft_strtrim(str, set);
	if (result)
	{
		printf("Cadena recortada: '%s'\n", result);
		free(result);
	}
	else
	{
		printf("Error al recortar la cadena\n");
	}
	return (0);
}*/
