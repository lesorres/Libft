/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 21:07:35 by kmeeseek          #+#    #+#             */
/*   Updated: 2020/11/27 22:51:52 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void				*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*csrc;
	unsigned char	*cdst;

	if (!dst && !src)
		return (NULL);
	csrc = (unsigned char *)src;
	cdst = (unsigned char *)dst;
	i = 0;
	while (i != n)
	{
		cdst[i] = csrc[i];
		i++;
	}
	return (dst);
}
