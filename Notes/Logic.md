
### b to a

+ Find the cheapest b_node to push to a
	1. Calculate the cost of bringing each a_node to the top of stack_a
		+ need to define the a_node to be selected to receive incoming
		+ find the smallest && greater && and closest a_node->pos to incoming
  
	2. Calculate the cost of bringing each b_node to the top of stack_b
 
	3. Calculate the total cost of pushing each b_node to stack_a:
		a_cost + b_cost
  
	4. 