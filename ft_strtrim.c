/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeeseek <kmeeseek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 15:52:50 by kmeeseek          #+#    #+#             */
/*   Updated: 2020/11/27 22:48:37 by kmeeseek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t i;
	size_t s1len;

	i = 0;
	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	s1len = ft_strlen(s1);
	while (s1len && ft_strchr(set, s1[s1len]))
		s1len--;
	return (ft_substr(s1, i, (s1len + 1)));
}
