/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alortiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:41:15 by alortiz-          #+#    #+#             */
/*   Updated: 2024/10/11 13:41:40 by alortiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL || *s == '\0')
		return ;
	write(fd, s, 1);
	ft_putstr_fd(s + 1, fd);
}
/*
int	main(void)
{
	int	fd = 1;
	char	str[] = "Hola, mundo!";

	ft_putstr_fd(str, fd);
	return (0);
}*/
