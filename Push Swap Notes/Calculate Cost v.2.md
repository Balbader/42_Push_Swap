# Calculate Cost v.2

## Goal
+ Calculate the total cost of sending each a_node to b
+ The cost should include:
  1. The total amount of ra || rra to bring a_node to top of 'a'
  2. The total amount of rb || rrb to bring b_node to top of 'b'
  3. The push from a to b: *ft_pb*

## Main Idea
+ Initiate an array that is the size of stack 'a'
+ int mid = a_size / 2
+ int moves = 0;
+ int i = 0;
while (i < a_size)
{
	if (i <= mid)
		moves = i;
		cost_a = ( moves + 1 ('+1' is for the ft_pb) )
	if (i > mid)
		moves--;
		cost_a = ( moves + 1 ('+1' is for the ft_pb) )
}
