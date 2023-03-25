# Calculate Cost a_nodes

## Goal
+ Calculate the total cost of sending each a_node to b
+ The cost should include:
  1. The total amount of ra || rra to bring a_node to top of 'a'
  2. The total amount of rb || rrb to bring b_node to top of 'b'
  3. The push from a to b: *ft_pb*

## Steps

### Store the cost of each a_node
+ Initiate 'a_cost_arr':
  1. a_cost_arr.size = a_size
  2. int moves = 0;
  3. int i = 0;
  4. int mid = a_size / 2;
  5. while (i < a_size)
	{
		if (i <= mid)
			moves = i;
			cost_a[i] = moves + 1  // ('+1' is for the ft_pb)
		if (i > mid)
			moves--;
			cost_a[i] = moves + 1  // ('+1' is for the ft_pb)
	}

+ 'a_cost_arr': contains the a_cost for each a_node
     + a_cost = rotate_count + ft_pb

## What I need

1. ft_init_a_cost_arr.c