/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykilicar <ykilicar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:24:56 by ykilicar          #+#    #+#             */
/*   Updated: 2022/12/25 15:26:17 by ykilicar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*temp;
	size_t	coun;

	coun = 0;
	temp = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (temp == NULL)
		return (NULL);
	while (*s1)
	{
		temp[coun] = *s1;
		s1++;
		coun++;
	}
	temp[coun] = '\0';
	return (temp);
}
