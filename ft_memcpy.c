/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykilicar <ykilicar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:33:49 by ykilicar          #+#    #+#             */
/*   Updated: 2022/12/26 15:41:46 by ykilicar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{	
	char	*x;
	char	*y;

	x = (char *)src;
	y = (char *)dst;
	if (!dst && !src)
		return (0);
	while (n--)
	{
		*y++ = *x++;
	}
	return (dst);
}
