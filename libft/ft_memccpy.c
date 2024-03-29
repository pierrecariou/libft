/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcariou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 09:55:48 by pcariou           #+#    #+#             */
/*   Updated: 2019/10/28 14:40:20 by pcariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	size_t			a;
	unsigned char	*new_dest;
	unsigned char	*new_src;

	i = 0;
	a = 0;
	new_dest = (unsigned char *)dst;
	new_src = (unsigned char *)src;
	while (i < n)
	{
		new_dest[i] = new_src[i];
		if (new_src[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (0);
}
