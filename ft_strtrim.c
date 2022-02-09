/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fadiallo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:17:12 by fadiallo          #+#    #+#             */
/*   Updated: 2022/02/09 15:17:16 by fadiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*sbis;
	unsigned int	i;
	int				len;

	sbis = (char *)s1;
	if (!sbis || !set)
		return (NULL);
	i = 0;
	while (sbis[i] && ft_strchr(set, sbis[i]))
		i++;
	len = ft_strlen(sbis + i);
	if (len)
	{
		while (sbis[i + len - 1] != '\0' && ft_strchr(set, sbis[i + len - 1]))
			len--;
	}
	return (ft_substr(sbis, i, len));
}
