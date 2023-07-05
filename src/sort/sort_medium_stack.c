/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:00:14 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/05 09:11:42 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_medium_stack(t_stack_node **stack_a, t_stack_node **stack_b)
{
	t_sequence	*sequence;
	int			i;
	int			size;

	sequence = function_sequence(stack_a);
	makrup(stack_a, sequence);
	free(sequence);
	i = 0;
	size = stack_size(*stack_a);
	while (i <= size)
	{
		if (!((*stack_a)->nbr))
			pb(stack_a, stack_b);
		else
			ra(stack_a);
		i++;
	}
}