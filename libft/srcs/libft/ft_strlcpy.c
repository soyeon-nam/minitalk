/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snam <snam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 15:00:55 by snam              #+#    #+#             */
/*   Updated: 2021/05/20 21:00:33 by snam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	size_src;
	unsigned int	i;

	size_src = ft_strlen(src);
	i = 0;
	while ((i + 1 < dstsize) && src[i])
	{
		dst[i] = src[i];
		++i;
	}
	if (dstsize != 0)
		dst[i] = 0;
	return (size_src);
}
