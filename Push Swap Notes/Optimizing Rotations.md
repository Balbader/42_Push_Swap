# Optimizing Rotations

## Goal
+ Fing all the (ra - rb) && (rra - rrb) that occurs at the same time for each a_node being push to 'b'
+ Replace them with:
  1. (ra - rb) -> rr
  2. (rra - rrb) -> rrr

## What I know
+ a_cost: **(a_cost = a_cost - 1)** // to not include the ft_pb
  1. if (a_cost > 0) -> ra
  2. if (a_cost < 0) -> rra
+ b_cost:
  1. if (b_cost > 0) -> ra
  2. if (b_cost < 0) -> rra

### How to caluculate rr || rrr
## Recipe
1. rr :
+ if (a_cost > 0 && b_cost > 0)
	if (a_cost > b_cost)
		 rr = b_cost;
	if (b_cost > a_cost)
		  rr = a_cost
+ if (a_cost < 0 && b_cost < 0)
	if (a_cost < b_cost)
		 rrr = b_cost;
	if (b_cost < a_cost)
		  rrr = a_cost
  
## What I need
1. fct to check:
	+ if (a_cost > 0 && b_cost > 0)
	+ if (a_cost < 0 && b_cost < 0)

## Optimized Recipe to push a_node to 'b'
1. ft_rr  x  tot_rr_count
2. ft_ra  x  ra_count || ft_rra  x  rra_count
3. ft_rb  x  rb_count || ft_rrb  x  rrb_count
4. ft_pb

## Need to verify: cost calculated without ft_pb
1. incoming < 0 + incming **NOT** smallest(b) : find closest lesser b_node: PASS
2. incoming < 0 + incming **IS** smallest(b) : find biggest b_node : PASS
3. incoming > 0 + incming **NOT** biggest(b) : find closest lesser b_node : PASS
4. incoming > 0 + incming **IS** biggest(b) : find biggest b_node : PASS