/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alortiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 19:18:34 by alortiz-          #+#    #+#             */
/*   Updated: 2024/10/03 19:18:52 by alortiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*strd;
	size_t	i;

	i = 0;
	strd = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!strd)
		return (NULL);
	while (str[i])
	{
		strd[i] = str[i];
		i++;
	}
	strd[i] = '\0';
	return (strd);
}

/*int main(void)
{
	char	original[] = "paRAngaRIcutIRIMIcuaro";
	char	*dupl = ft_strdup(original);

	if (dupl)
	{
		printf("La cadena duplicada es: %s\n", dupl);
		free(dupl);
	}
	else
		printf("Error al duplicar la cadena\n");
}*/
