/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mxlength.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbahaddi <sbahaddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 12:11:19 by sbahaddi          #+#    #+#             */
/*   Updated: 2019/07/11 12:13:01 by sbahaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_mxlength(char **mx)
{
	int		i;

	i = -1;
	while (mx[++i])
		;
	return (i);
}