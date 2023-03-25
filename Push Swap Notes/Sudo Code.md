### ft_push_from_a_to_b.c: Sudo Code
1. Check for each a_node if (a_node > biggest(b) || a_node < smallest(b)): *ft_check_incoming.c*
2. if : yes
   + Find biggest(b) idx
   + is biggest(b) at top of 'b'
   + yes: cool
   + no: calculate cost to bring biggest(b) to top of 'b'

if (*ft_check_incoming(a_node) == 1*)
{
	*ft_find_biggest_node_idx(b)* 
	if (*ft_find_biggest_node_idx(b)* == 1)
		. do notning
	if (*ft_find_biggest_node_idx(b)* != 1)
		. calculate cost to move biggest(b) to top
}