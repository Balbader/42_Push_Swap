
# Calculate Cost b_nodes

## Goal
+ Calculate the total cost of finding the rignt b_node and sending it to the top of 'b'
+ The cost should include:
  1. The total amount of rb || rrb to bring b_node to top of 'b'

## Steps

### Store the cost of b_node
+ Initiate 'b_cost_arr':
  1. b_cost_arr.size = a_size
  2. ft_check_incoming(a_node);
  3. ft_which_b_node_to_look_for.c;
  4. int moves = 0;
  5. int i = 0;
  6. int mid = a_size / 2;
  7. while (i < a_size)
	{
		if (i <= mid)
			moves = i;
			cost_a[i] = moves
		if (i > mid)
			moves--;
			cost_a[i] = moves + 1  // ('+1' is for the ft_pb)
	}

+ 'a_cost_arr': contains the a_cost for each a_node
     + a_cost = rotate_count + ft_pb

## What I need

1. ft_init_a_cost_arr.c
2. ft_biggest.c : fct to calculate cost to bring biggest node to top of 'b'
3. ft_closest.c : fct to calculate cost to bring the closest && < incoming to top of 'b'
4. 