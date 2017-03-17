/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evatine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 18:08:57 by evatine           #+#    #+#             */
/*   Updated: 2017/03/17 12:24:07 by evatine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int		y;
	int		x;

	y = hour + 1;
	x = hour - 12;
	if (hour == 0)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 P.M AND 1.00 A.M\n");
	if (hour == 12)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 A.M AND 1.00 P.M\n");
	if (hour == 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 A.M AND 12.00 P.M\n");
	if (hour == 23)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 P.M AND 12.00 A.M\n");
	if (hour >= 1 && hour < 11)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN %i,00 ", hour);
		printf("A.M AND %i.00 A.M", y);
	}
	if (hour >= 13 && hour < 23)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN %i,00 ", x);
		printf("P.M AND %i.00 P.M", x + 1);
	}
}
