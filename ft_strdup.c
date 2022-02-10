/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fadiallo <fadiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:46:54 by fadiallo          #+#    #+#             */
/*   Updated: 2022/02/09 18:54:27 by fadiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		len;

	len = 0;
	while (src[len])
		len++;
	cpy = (char *) malloc(sizeof(char) * (len +1));
	if (cpy == NULL)
		return (NULL);
	len = 0;
	while (src[len])
	{
		cpy[len] = src[len];
		len++;
	}	
	cpy[len] = '\0';
	return (cpy);
}
