/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcariou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:25:03 by pcariou           #+#    #+#             */
/*   Updated: 2019/10/22 18:24:35 by pcariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;
	char*new_s;

	i = 0;
	new_s = (char *)s;
	while (new_s[i])
	{
		if (new_s[i] == (char)c)
			return (&(new_s[i]));
		i++;
	}
	if (c == '\0')
		return (&(new_s[i]));
	return (0);
}
