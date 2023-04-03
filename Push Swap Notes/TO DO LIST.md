# TO DO LIST
1. ft_calculate_cost_arr.c:
   + I can already optimize with rr || rrr based on a_cost and b_cost
2. The cheapest (cost[i].idx + 1) = cheapest a_node.idx
3. after finding the cheapest cost[i] check:
	+ if (ft_is_pos(a_cost[i], b_cost[i]) || ft_is_neg(a_cost[i], b_cost[i]))
		-->opt instructions
	+ else
		--> reg instructions