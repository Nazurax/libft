/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alortiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 18:48:13 by alortiz-          #+#    #+#             */
/*   Updated: 2024/09/27 18:48:17 by alortiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/*int	main(void)
{
	char	str1[20] = "Hello student";
	
	ft_bzero(str1, 8);
	printf("%s\n", str1);
	return  (0);
}*/
