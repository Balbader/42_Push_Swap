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
  1. if (a_cost > 0) -> ra
  2. if (a_cost < 0) -> rra

### How to caluculate rr || rrr
  
## What I need
1. tot_rr_count
2. tot_rrr_count
3. ra_count || rra_count
4. rb_count || rrb_count

## Optimized Recipe to push a_node to 'b'
1. ft_rr  x  tot_rr_count
2. ft_ra  x  ra_count || ft_rra  x  rra_count
3. ft_rb  x  rb_count || ft_rrb  x  rrb_count
4. ft_pb