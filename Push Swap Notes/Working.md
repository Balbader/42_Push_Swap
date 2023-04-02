# Working
+ **ft_find_cheapest_a_node_idx.c** :
  -> runs through cost array and returns the index of the cheapest a_node to be pushed to 'b'.
  
+ **ft_init_b_cost_arr.c** :
  returns an array that contains the tot amount of rb || rrb that needs to occur to bringing the right b_node to the top of 'b', based on if the incoming a_node is going to be the new biggest(b) || the new smallest(b) or not.