# Road Map

### Goal


### Process
In order to find the cheapest move, I need to emulate the entire proces of pushing a_node to 'b' for each node in 'a'.

### Guide Line for each a_node
1. if ( a_node = biggest(b) || smallest(b) )
{
	 if (a_node is 1st in 'a')
	  {
		cost of bringing biggest(b) to top of 'b' + ft_pa?
		store cost in *costs*
	  }
	 else if (a_node is not 1st in 'a')
	  {
		cost of bringing a_node to top of 'a' ?
		cost of bringing biggest(b) to top of 'b' + ft_pa?
		store cost in *costs*
	  }
}

2. if ( !(a_node = biggest(b) || smallest(b)) )
{
	 if (a_node is 1st in 'a')
	  {
		***cost of bringing biggest(b) to top of 'b' + ft_pa?***
		store cost in *costs*
	  }
	 else if (a_node is not 1st in 'a')
	  {
		cost of bringing a_node to top of 'a' ?
		***cost of bringing biggest(b) to top of 'b' + ft_pa?***
	  }
}

### What I need
1. Check if incoming will be the biggest(b): *ft_check_if_biggest_b.c*
2. Find idx of current biggest(b): *ft_find_biggest_node_idx.c* **Done**
3. Check if incoming will be the smallest(b): *ft_check_if_smallest_b.c*
4. Find idx of current smallest(b): *ft_find_smallest_node_idx.c* **Done**
5. Find middle node index: *ft_find_middle_idx.c* **Done**
6. Define the number of rotate || reverse_rotate needed to bring
   the node to the top: *ft_define_roatate_counts.c* **Done**
5. Store moves for each node in 'a':
   + Initiate an arr : int *costs
   + *costs* = malloc(a_size - 2) as we already pushed the 1st two a_nodes to 'b'

### Calculate cost
1. Need to store *rotate_count* for each node in *costs arr*
2. The *cost* of moving a node from 'a' to 'b' is:
   + *rotate_count* to bring a_node to top of 'a'
   + *rotate_count* to bring b_node to top of 'b'
   + *ft_pb* 
3. 

### ft_push_from_a_to_b.c
1. 
