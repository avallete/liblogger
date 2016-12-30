/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_logger.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallete <avallete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 15:17:00 by avallete          #+#    #+#             */
/*   Updated: 2016/12/12 15:17:00 by avallete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LOGGER_H
#define FT_LOGGER_H

#include <stdio.h>

#define LOGFILE "log.txt"
#define WHERESTR "[in <%s> at line %d]: "
#define WHEREARG __FILE__, __LINE__

#define DEBUG(...) fprintf(ft_getlog(), __VA_ARGS__); fflush(ft_getlog())
#define DEBUGPRINT_LOCATION(...) fprintf(ft_getlog(), __VA_ARGS__); fflush(ft_getlog())
#define DEBUGPRINT(_fmt, ...) DEBUGPRINT_LOCATION(WHERESTR _fmt, WHEREARG, __VA_ARGS__)

#define CALL_LOG_DEBUG(x) DEBUGPRINT("\n-------------------------\n[DEBUG] Call function: (%s)\n", #x);x;DEBUGPRINT("[DEBUG] Call end (%s) terminated.\n\n-------------------------\n", #x)

FILE*		ft_getlog();

#endif
