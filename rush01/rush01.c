#include <unistd.h>
#include <stdlib.h>

static int	visible_count(int *line, int len)
{
	int	i;
	int	max;
	int	count;

	max = 0;
	count = 0;
	i = 0;
	while (i < len)
	{
		if (line[i] > max)
		{
			max = line[i];
			count++;
		}
		i++;
	}
	return (count);
}

static void	print_board(int board[4][4])
{
	int		r;
	int		c_i;
	char	c;

	r = 0;
	while (r < 4)
	{
		c_i = 0;
		while (c_i < 4)
		{
			c = board[r][c_i] + '0';
			write(1, &c, 1);
			if (c_i < 3)
				write(1, " ", 1);
			c_i++;
		}
		write(1, "\n", 1);
		r++;
	}
}

static int	solve(int pos, int board[4][4], int *hints)
{
	int	r;
	int	c;
	int	val;
	int	i;
	int	ok;
	int	rev[4];
	int	col[4];

	if (pos == 16)
		return (1);
	r = pos / 4;
	c = pos % 4;
	val = 1;
	while (val <= 4)
	{
		board[r][c] = val;
		ok = 1;
		i = 0;
		while (i < c)
		{
			if (board[r][i] == val)
				ok = 0;
			i++;
		}
		i = 0;
		while (i < r)
		{
			if (board[i][c] == val)
				ok = 0;
			i++;
		}
		if (ok && c == 3)
		{
			if (visible_count(board[r], 4) != hints[8 + r])
				ok = 0;
			i = 0;
			while (i < 4)
			{
				rev[i] = board[r][3 - i];
				i++;
			}
			if (visible_count(rev, 4) != hints[12 + r])
				ok = 0;
		}
		if (ok && r == 3)
		{
			i = 0;
			while (i < 4)
			{
				col[i] = board[i][c];
				i++;
			}
			if (visible_count(col, 4) != hints[c])
				ok = 0;
			i = 0;
			while (i < 4)
			{
				col[i] = board[3 - i][c];
				i++;
			}
			if (visible_count(col, 4) != hints[4 + c])
				ok = 0;
		}
		if (ok && solve(pos + 1, board, hints))
			return (1);
		board[r][c] = 0;
		val++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	*hints;
	int	idx;
	int	i;
	char	c;
	int	board[4][4];

	if (argc != 2)
		return (write(1, "Error\n", 6), 0);
	hints = malloc(16 * sizeof(int));
	if (!hints)
		return (write(1, "Error\n", 6), 0);
	idx = 0;
	i = 0;
	while (argv[1][i])
	{
		c = argv[1][i];
		if (c >= '1' && c <= '4')
		{
			if (idx >= 16)
				return (write(1, "Error\n", 6), free(hints), 0);
			hints[idx++] = c - '0';
		}
		else if (c != ' ')
			return (write(1, "Error\n", 6), free(hints), 0);
		i++;
	}
	if (idx != 16)
		return (write(1, "Error\n", 6), free(hints), 0);
	i = 0;
	while (i < 4)
	{
		int j = 0;
		while (j < 4)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
	if (solve(0, board, hints))
		print_board(board);
	else
		write(1, "Error\n", 6);
	free(hints);
	return (0);
}
