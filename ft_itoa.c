/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alortiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:46:47 by alortiz-          #+#    #+#             */
/*   Updated: 2024/10/11 13:47:00 by alortiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_num_length(int n)
{
	int	len;

	len = 1;
	while (n / 10)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static void	fill_str(char *str, int n, int *i)
{
	if (n > 9)
		fill_str(str, n / 10, i);
	str[(*i)++] = n % 10 + '0';
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		i;
	int		sign;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = 0;
	if (n < 0)
		sign = 1;
	len = get_num_length(n) + sign;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	i = 0;
	if (sign)
	{
		str[i++] = '-';
		n = -n;
	}
	fill_str(str, n, &i);
	str[len] = '\0';
	return (str);
}
/*int main(void)
{
	int	n = -123456;
	char	*str = ft_itoa(n);
	if (str != NULL)
	{
        write(1, str, 7);
        write(1, "\n", 1);
        free(str);
    }
    return (0);
}*/
