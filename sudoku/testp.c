/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testp.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evatine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 17:59:23 by evatine           #+#    #+#             */
/*   Updated: 2017/03/21 18:08:23 by evatine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_grid_save(char **grid, char **grid_res)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			grid_res[i][j] = grid[i][j];
			j++;
		}
		i++;
	}
}

int		creat(char **grid, int row, int col, char **grid_res)
{
	int i;
	int count;

	count = 0;
	if (row = 9)
	{
		ft_grid_save(grid, grid_res);
		return (1);
	}
	if ((grid[row][col] != '0'))
		return (creat(grid, row + (col + 1)/9, (col + 1) % 9, grid_res));
