/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alortiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 13:01:10 by alortiz-          #+#    #+#             */
/*   Updated: 2024/10/06 13:01:16 by alortiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	i;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	sub_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub_str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub_str[i] = s[start + i];
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
/*int	main(void)
{
	char	str[] = "Testing chain for 42BCN";
	char	*sub;
	
	sub = ft_substr(str, 5, 8);
	if (sub)
	{
		printf("SubString: %s\n", sub);
		free(sub);	
	}
	else
	{
		printf("chain extraction cannot be performed");
	}
	sub = ft_substr(str, 50, 10);
	if (sub)
	{
		printf("SubString with start out of range:%s\n", sub);
		free(sub);	
	}
	else
	{
		printf("chain extraction cannot be performed");
	}
	return (0);
}*/
