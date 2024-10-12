/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alortiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:47:35 by alortiz-          #+#    #+#             */
/*   Updated: 2024/10/03 11:47:39 by alortiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sig;
	int	num;

	i = 0;
	sig = 1;
	num = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-')
	{
		sig = -1;
		i++;
	}
	else if (nptr[i] == '+')
	{
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num = num * 10 + (nptr[i] - '0');
		i++;
	}
	return (num * sig);
}
/*int	main(void)
{
	char	str1[] = " \r 55Hello";
	char	str2[] = "+42BCN";
	char	str3[] = "PrintTest";
	char	str4[] = "-8569BCN";
	int	num1 = ft_atoi(str1);
	int	num2 = ft_atoi(str2);
	int	num3 = ft_atoi(str3);
	int	num4 = ft_atoi(str4);
	printf("Number 1 is: %d\n", num1);
	printf("Number 2 is: %d\n", num2);
	printf("Number 3 is: %d\n", num3);
	printf("Number 4 is: %d\n", num4);
	return (0);
}*/
