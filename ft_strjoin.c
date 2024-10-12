/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alortiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 15:27:20 by alortiz-          #+#    #+#             */
/*   Updated: 2024/10/06 15:27:47 by alortiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	total_length;

	if (!s1 || !s2)
		return (NULL);
	total_length = ft_strlen(s1) + ft_strlen(s2);
	new_str = (char *)malloc(total_length + 1);
	if (!new_str)
		return (NULL);
	if (new_str)
	{
		ft_strlcpy(new_str, s1, total_length + 1);
		ft_strlcat(new_str, s2, total_length + 1);
	}
	new_str[total_length] = '\0';
	return (new_str);
}
/*int	main(void)
{
	char	str1[] = "Se me lengua ";
	char	str2[] = "la traba";
	char	*final;

	final = ft_strjoin(str1, str2);
	if (final)
	{
		printf("The final string is: %s\n", final);
		free(final);  // Liberar la memoria asignada por ft_strjoin
	}
	else
	{
		printf("Error: Could not concatenate strings.\n");
	}
	return (0);
}*/
