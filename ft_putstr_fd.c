/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaakson <alaakson@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:04:25 by alaakson          #+#    #+#             */
/*   Updated: 2024/04/24 16:27:22 by alaakson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		write (fd, &str[i], 1);
		str++;
	}
}