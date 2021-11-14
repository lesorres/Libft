/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:24:53 by kmeeseek          #+#    #+#             */
/*   Updated: 2020/11/27 22:41:54 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	cc;
	unsigned char	*res;

	cc = (unsigned char)c;
	res = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*res == cc)
			return (res);
		res++;
		i++;
	}
	return (NULL);
}
