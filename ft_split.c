/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alortiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:19:10 by alortiz-          #+#    #+#             */
/*   Updated: 2024/10/08 13:19:39 by alortiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*malloc_word(const char *s, char c)
{
	const char	*start;
	size_t		len;
	char		*word;

	start = s;
	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, start, len + 1);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**split_array;
	int		i;

	if (!s)
		return (NULL);
	split_array = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!split_array)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			split_array[i] = malloc_word(s, c);
			if (!split_array[i])
				return (NULL);
			i++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	split_array[i] = NULL;
	return (split_array);
}
/*int	main(void)
{
	char	**result;
	char	str[] = "Hola World  42BCN";
	char	delimiter = ' ';
	int		i;

	result = ft_split(str, delimiter);
	i = 0;
	while (result[i])
	{
		printf("Subcadena %d: %s\n", i, result[i]);
		i++;
	}
	i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}*/
