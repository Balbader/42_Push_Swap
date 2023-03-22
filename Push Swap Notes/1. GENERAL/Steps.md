# Steps to pushing from 'a' to 'b'

### Goal
The goal is to find the node of stack 'a' that will cost the least amount of moves to push to stack 'b'

### How
Calculate for each node of 'a', starting at the 1st, the cost of pushing it to 'b'.

### Rules
1. If the a_node to be pushed to 'b' is the *Biggest* or the *Smallest* node of 'a', 'b' must have its *Biggest* node at its top in order to receive a_node.<br>
2. For any other a_node with a value in between the *Biggest* and the *Smallest* a_node of 'a', the a_node will have to be positionned somewhere in 'b'. In this case, we will have to calculate the number of ra or rra necessery to bring the a_node to the top of 'a' and the number of rb or rrb to reposition 'b' in the right order to receive the a_node.<br>
3. The cost of each a_node will be stored in a cost array in order to be able find the cheapest one which will then allow us to select the a_node the is the cheapest and proceed to push it to 'b'.<br>
4. We will proceed with finding the cheapest move until there are only  3 nodes left in 'a'.<br>
5. We will apply ft_sort_3 on 'a' to sort it<br>
6. Once 'a' is sorted, we can start pushing b_nodes back to 'a'<br>

# Steps to pushing from 'b' to 'a'
1. At this point, 'a' is sorted.
2. Push b_nodes to 'a'.
3. Keep pushing as long as b_nodes are consecutives to each other
4. When not consecutive anymore, find a_node that is equal to b_node + 1
5. Find cheapest cost (ra || rra) to bring a_node to top
6. Repeat steps 2 to 5 until 'b' is empty

# Last Step
1. Find smallest a_node in 'a'
2. Find cheapest cost (ra || rra) to bring a_node to top

# Finito !!!