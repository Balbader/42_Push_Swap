
### b to a

+ Find the cheapest b_node to push to a
	1. Calculate the cost of bringing each a_node to the top of stack_a
		+ need to define the a_node to be selected to receive incoming
		+ find the smallest && greater && and closest a_node->pos to incoming
		***DONE***

	2. Calculate the cost of bringing each b_node to the top of stack_b
		***DONE***
 
	3. Calculate the total cost of pushing each b_node to stack_a:
		a_cost + b_cost:
		***DONE***

+ Push the cheapest b_node to a
	1. Get the cheapest element of final_cost
	   + the idx of cheapest 
	   + = the (idx + 1) of the b_node to be pushed to a
	   + = the (idx + 1) of the a_node to be brought to top of a

	2. Re_order a_stack if necessary
	3. Rotate b to bring cheapest to top
	4. push to b_node to a_stack