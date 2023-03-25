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

## Move Cost if incoming is going to be biggest(b) || smalllest(b)

### Calculate moves to bring a_node to top:

if (a_node_idx <= mid_idx)
{
	cost = a_node_idx
	. this includes: ft_pb
}
if (a_node_idx > mid_idx)
{
	cost = a_node_idx + 1 + 1
	. +1 : rra
	. +1 : ft_pb
}

### Calculate moves to bring b_node to top:

if (b_node_idx <= mid_idx)
{
	cost = a_node_idx - 1
}
if (a_node_idx > mid_idx)
{
	cost = a_node_idx + 1
	. +1 : rra
}

## Move Cost if incoming is NOT going to be biggest(b) || smalllest(b)

### Calculate moves to bring a_node to top:

if (a_node_idx <= mid_idx)
{
	cost = a_node_idx
	. this includes: ft_pb
}
if (a_node_idx > mid_idx)
{
	cost = a_node_idx + 1 + 1
	. +1 : rra
	. +1 : ft_pb
}

### Calculate moves to bring b_node to top:
+ Get a_node.value
+ Get the idx of b_node.value that is smaller and the closest to a_node.value
+ Calculate cost:
	if (b_node_idx <= mid_idx)
	{
		cost = a_node_idx - 1
	}
	if (a_node_idx > mid_idx)
	{
		cost = a_node_idx + 1
		. +1 : rra
	}