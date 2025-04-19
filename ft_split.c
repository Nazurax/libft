/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alortiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:19:10 by alortiz-          #+#    #+#             */
/*   Updated: 2024/10/19 21:04:27 by alortiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
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

static char	*malloc_word(char const *s, char c)
{
	int		len;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s, len + 1);
	return (word);
}

static void	free_memory(char **split, int i)
{
	while (i >= 0)
	{
		free(split[i]);
		i--;
	}
	free(split);
}

static char	**fill_split(char **split, char const *s, char c, int words)
{
	int	i;

	i = 0;
	while (*s && i < words)
	{
		if (*s != c)
		{
			split[i] = malloc_word(s, c);
			if (!split[i])
			{
				free_memory(split, i - 1);
				return (NULL);
			}
			i++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	split[i] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		words;

	if (!s)
		return (NULL);
	words = word_count(s, c);
	split = (char **)malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (NULL);
	return (fill_split(split, s, c, words));
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
