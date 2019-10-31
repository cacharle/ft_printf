/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_uint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 23:25:40 by cacharle          #+#    #+#             */
/*   Updated: 2019/10/30 23:26:05 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "header.h"

char	*convert_uint(va_list ap, t_pformat *pformat)
{
	char					*str;
	long long unsigned int	n;

	if (pformat->flags & FLAG_SHORT)
		n = va_arg(ap, int);
	else if (pformat->flags & FLAG_SHORT_SHORT)
		n = va_arg(ap, int);
	else if (pformat->flags & FLAG_LONG)
		n = va_arg(ap, long unsigned int);
	else if (pformat->flags & FLAG_LONG_LONG)
		n = va_arg(ap, long long unsigned int);
	else
		n = va_arg(ap, unsigned int);
	str = ft_itoa_unsigned_base(n, "0123456789");
	str = handle_precision(pformat, str);
	str = handle_padding(pformat, str);
	return (str);
}