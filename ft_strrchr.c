/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykilicar <ykilicar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 18:32:28 by ykilicar          #+#    #+#             */
/*   Updated: 2022/12/25 16:12:28 by ykilicar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	coun;

	coun = 0;
	while (s[coun])
		coun++;
	while (coun >= 0)
	{
		if (s[coun] == (char)c)
			return ((char *)(s + coun));
		coun--;
	}
	return (NULL);
}
