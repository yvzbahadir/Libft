/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykilicar <ykilicar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:38:43 by ykilicar          #+#    #+#             */
/*   Updated: 2022/12/28 14:18:24 by ykilicar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*string1;
	unsigned char	*string2;
	size_t			k;

	string1 = (unsigned char *)s1;
	string2 = (unsigned char *)s2;
	k = 0;
	while (k < n && *(string1 + k) == *(string2 + k))
		k++;
	if (k == n)
		return (0);
	return (*(string1 + k) - *(string2 + k));
}
