/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fadiallo <fadiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:34:59 by fadiallo          #+#    #+#             */
/*   Updated: 2022/02/09 15:42:49 by fadiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;

	i = 0;
	if (!dest[i] || !src[i])
		return (0);
	if (size > 0)
	{
		while (size && src[i])
		{	
			dest[i] = src[i];
			i++;
			size--;
		}
		dest[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
