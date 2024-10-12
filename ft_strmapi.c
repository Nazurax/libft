/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alortiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:45:09 by alortiz-          #+#    #+#             */
/*   Updated: 2024/10/11 13:45:56 by alortiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	length;
	char			*new_str;

	if (s == NULL || f == NULL)
		return (NULL);
	length = 0;
	while (s[length] != '\0')
		length++;
	new_str = (char *)malloc((length + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

char	ft_toupper_map(unsigned int index, char c)
{
	(void)index;
	return (ft_toupper(c));
}
/*int	main(void)
{
	char	str[] = "Hola mundo";
	char	*new_str = ft_strmapi(str, ft_toupper_map);

	if (new_str != NULL)
	{
		write(1, new_str, 11);
		free(new_str);
	}
	return (0);
}*/
