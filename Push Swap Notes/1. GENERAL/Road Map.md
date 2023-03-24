# Road Map

### Goal


### Process
In order to find the cheapest move, I need to emulate the entire proces of pushing a_node to 'b' for each node in 'a'.
There need to be a Process 

### Guide Line for each a_node
1. if ( a_node = biggest(a) || smallest(a) )
{
	 if (a_node is 1st in 'a')
	  {
		cost of bringing biggest(b) to top of 'b' + ft_pa?
		store cost in 'cost arr'
	  }
	 else if (a_node is not 1st in 'a')
	  {
		cost of bringing a_node to top of 'a' ?
		cost of bringing biggest(b) to top of 'b' + ft_pa?
		store cost in 'cost arr'
	  }
}

2. if ( !(a_node = biggest(a) || smallest(a)) )
{
	 if (a_node is 1st in 'a')
		cost of bringing biggest(b) to top of 'b' + ft_pa?
	 else if (a_node is not 1st in 'a')
	  {
		cost of bringing a_node to top of 'a' ?
		cost of bringing biggest(b) to top of 'b' + ft_pa?
	  }
}

### What I need
1. fct to check if node is biggest in stack: *ft_check_if_biggest.c*
2. fct to check if node is smallest in stack: *ft_check_if_smallest.c*
3. fct to find middle node index: *ft_find_middle_idx.c*
4. fct to define the number of rotate || reverse_rotate needed to bring
   the node to the top: *ft_define_roatate_couts.c*
5. fct to store moves for each node in 'a': 
