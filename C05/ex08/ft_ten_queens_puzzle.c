/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 23:16:22 by tle-dref          #+#    #+#             */
/*   Updated: 2024/07/17 16:09:31 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>

bool	check_lines(int board[][10], bool check_rows)
{
	int	i;
	int	line_sum;
	int	j;

	i = 0;
	while (i < 10)
	{
		line_sum = 0;
		j = 0;
		while (j < 10)
		{
			if (check_rows)
				line_sum += board[i][j];
			else
				line_sum += board[j][i];
			j++;
		}
		if (line_sum > 1)
		{
			return (false);
		}
		i++;
	}
	return (true);
}

bool	check1diagonals(int board[][10])
{
	int	k;
	int	diag1_sum;
	int	diag2_sum;
	int	i;

	k = 0;
	while (k < 10)
	{
		diag1_sum = 0;
		diag2_sum = 0;
		i = 0;
		while (i + k < 10)
		{
			diag1_sum += board[i][i + k];
			diag2_sum += board[i + k][i];
			i++;
		}
		if (diag1_sum > 1 || diag2_sum > 1)
		{
			return (false);
		}
		k++;
	}
	return (true);
}

bool	check2diagonals(int board[][10])
{
	int	k;
	int	diag1_sum;
	int	diag2_sum;
	int	i;

	k = 0;
	while (k < 10)
	{
		diag1_sum = 0;
		diag2_sum = 0;
		i = 0;
		while (i + k < 10)
		{
			diag1_sum += board[i][9 - (i + k)];
			diag2_sum += board[i + k][9 - i];
			i++;
		}
		if (diag1_sum > 1 || diag2_sum > 1)
		{
			return (false);
		}
		k++;
	}
	return (true);
}

void	update_board_and_print_if_valid(int T[], int board[][10], int value)
{
	int	i;
	int	j;

	i = 0;
	while (i < 10)
	{
		board[i][T[i]] = value;
		i++;
	}
	if (value == 1 && ((check_lines(board, true) && check_lines(board, false)
				&& check1diagonals(board)
				&& check2diagonals(board))))
	{
		j = 0;
		while (j < 10)
		{
			printf("%d ", T[j]);
			j++;
		}
		printf("\n");
	}
}

void	permute(int T[], int index, bool used[], int board[][10])
{
	int	i;

	if (index == 10)
	{
		update_board_and_print_if_valid(T, board, 1);
		update_board_and_print_if_valid(T, board, 0);
	}
	else
	{
		i = 0;
		while (i < 10)
		{
			if (!used[i])
			{
				T[index] = i;
				used[i] = true;
				permute(T, index + 1, used, board);
				used[i] = false;
			}
			i++;
		}
	}
}

/*int main(void)
{
	int tab[10];
	bool tab2[10]  = {false};
	int tab3[10][10] = {{0}};
	permute(tab,0,tab2,tab3);
}*/
