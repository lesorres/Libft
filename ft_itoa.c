/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 20:39:31 by kmeeseek          #+#    #+#             */
/*   Updated: 2020/11/26 15:41:37 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	int		temp;
	int		len;
	int		ngt;
	char	*str;

	temp = n;
	len = 1;
	ngt = n < 0;
	while ((temp = temp / 10))
		len++;
	str = (char *)malloc(sizeof(*str) * (len + ngt + 1));
	if (!(str))
		return (NULL);
	if (ngt)
		*str++ = '-';
	str = str + len;
	*str-- = '\0';
	if (n == 0)
		*str-- = '0';
	while (n)
	{
		*str-- = (n % 10) * (ngt ? -1 : 1) + 48;
		n = n / 10;
	}
	return (str + 1 - ngt);
}
