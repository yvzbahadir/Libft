/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykilicar <ykilicar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:41:32 by ykilicar          #+#    #+#             */
/*   Updated: 2022/12/26 18:03:37 by ykilicar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	coun;

	if (!dstsize && !dst)
		return (0);
	if (dstsize <= (size_t)ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	i = ft_strlen(dst);
	coun = 0;
	while ((i + 1 < dstsize) && (src[coun] != '\0'))
	{
		dst[i] = src[coun];
		i++;
		coun++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[coun]));
}	
