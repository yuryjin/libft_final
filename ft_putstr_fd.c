/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlucan <zlucan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 18:24:42 by zlucan            #+#    #+#             */
/*   Updated: 2019/09/20 16:32:16 by zlucan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	char	*s11;
	int		i;

	s11 = (char *)s;
	i = 0;
	while (s11[i])
	{
		ft_putchar_fd(s11[i++], fd);
	}
}