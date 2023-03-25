# Calculate Cost

## Goal
+ Calculate the total cost of sending each a_node to b
+ The cost should include:
  1. The total amount of ra || rra to bring a_node to top of 'a'
  2. The total amount of rb || rrb to bring b_node to top of 'b'
  3. The push from a to b: *ft_pb*

## What I Know
+ a_node.idx = The total amount of ra || rra to bring a_node to top of 'a'
  1. if a_node.idx <= mid_idx : ra : rot_count = a_node.idx (includes the final ft_pb)
  2. if a_node.idx > mid_idx : rra : rot_count = a_node.idx - (a_node.idx - 1) + 2 (includes the final ft_pb)
  
+ b_node.idx = The total amount of rb || rrb to bring b_node to top of 'b'
  1. if b_node.idx <= mid_idx : rb : rot_count = b_node.idx - 1 (as there is no ft_pa required)
  2. if b_node.idx > mid_idx : rrb : rot_count = b_node.idx + 1 (as there is no ft_pa required)

## What I need
### Store the cost of each a_node
+ Initiate 'a_cost_arr':
  1. a_cost_arr.size = a_size
  2. from a_cost_arr[0] -> a_cost_arr[a_size / 2] :
     + a_cost_arr[i] = i + 2; (this is equal to a_node.idx + ft_pb);
  3. from a_cost_arr[a_size / 2] -> a_cost_arr[a_size] :
     + a_cost_arr[i] = i + 3; (this is equal to a_node.idx + 1 + ft_pb);

### Store the cost of each b_node
+ Initiate 'b_copy_arr'
  1. b_copy_arr.size = b_size
  
+ Initiate 'b_cost_arr':
  1. b_cost_arr.size = a_size
  
+ Case 1: if a_node = new.biggest(b) || new.smallest(b)
  1. find current.biggest(b).idx
  2. b_cost :
     + if (current.biggest(b).idx <= b_arr[b_size / 2]) : rb : b_cost_arr[i] = i + 1
     + if (current.biggest(b).idx > b_arr[b_size / 2]) : rrb : b_cost_arr[i] = i + 2

+ Case 2: if a_node != new.biggest(b) || new.smallest(b)
  1. find current.closest_to_a_node(b).idx
  2. b_cost :
     + if (current.closest_to_a_node(b).idx <= b_arr[b_size / 2]) : rb : b_cost_arr[i] = i + 1
     + if (current.closest_to_a_node(b).idx > b_arr[b_size / 2]) : rrb : b_cost_arr[i] = i + 2

### Get final cost for each a_node
+ Initiate 'final_cost_arr'

+ final_cost_arr.size = a_size 

+ final_cost_arr[i] = a_cost_arr[i] + b_cost_arr[i];
