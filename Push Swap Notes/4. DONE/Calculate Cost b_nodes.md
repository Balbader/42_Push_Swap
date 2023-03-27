
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

## To Check
1. The cost of moving b_node to top: 
   + if (b_node < mid.idx) : ra
   + if (b_node > mid.idx) : rra
2. verify the calculation of cost calculation for b_node
   + **ft_cost_biggest_b.c**
   + **ft_cost_closest_b.c**

## Leaks
1. *ft_find_closest_node_idx.c* : need to free 'b_idx_arr'