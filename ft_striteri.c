/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fadiallo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:24:04 by fadiallo          #+#    #+#             */
/*   Updated: 2022/02/01 16:59:04 by fadiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
//#include "libft.h"

void	ft_striteri(char *s,void (*f)(unsigned int, char*))
{
	int i;

	if (s != NULL && f != NULL)
		return (NULL);
	i = 0;
	while(s[i])
	{
		(*f)(i, s + i);
		i++;
	}

}
