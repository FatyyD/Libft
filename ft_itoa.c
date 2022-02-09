/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fadiallo <fadiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:06:32 by fadiallo          #+#    #+#             */
/*   Updated: 2022/02/09 16:06:47 by fadiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int		size;

	if (n <= 0)
		size = 1;
	else
		size = 0;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char		*new;
	int			len;
	int long	c;

	c = n;
	if (c < 0)
		c = -c;
	len = ft_count(n);
	new = malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	new[len] = '\0';
	if (c == 0)
		new[0] = '0';
	while ((len - 1) >= 0)
	{
		new[len - 1] = c % 10 + '0';
		c = c / 10;
		len --;
	}
	if (n < 0)
		new[0] = '-';
	return (new);
}
