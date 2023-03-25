
# Calculate Cost b_nodes

## Goal
+ Calculate the total cost of finding the rignt b_node and sending it to the top of 'b'
+ The cost should include:
  1. The total amount of rb || rrb to bring b_node to top of 'b'

## Steps

### Store the cost of b_node
+ Initiate 'b_cost_arr':
  1. b_cost_arr.size = a_size
  2. int moves = 0;
  3. int i = 0;
  4. int mid = a_size / 2;
  5. while (i < a_size)
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