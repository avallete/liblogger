/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_logger.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallete <avallete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 15:17:00 by avallete          #+#    #+#             */
/*   Updated: 2016/12/12 15:17:00 by avallete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_logger.h"

FILE*		ft_getlog()
{
	static FILE *fd = NULL;

	if (fd == NULL) {
		fd = fopen(LOGFILE, "a+");
		return (fd);
	}
	return (fd);
}