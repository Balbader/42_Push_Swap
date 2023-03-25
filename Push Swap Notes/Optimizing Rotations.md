# Optimizing Rotations

## Goal
+ Fing all the (ra - rb) && (rra - rrb) that occurs at the same time for each a_node being push to 'b'
+ Replace them with:
  1. (ra - rb) -> rr
  2. (rra - rrb) -> rrr

## What I know
+ a_node.idx
  1. if <= mid.idx -> ra : ra.count = a_node.idx - 1  /*This does not count the ft_pb*/
  2. if > mid.idx -> rra : rra.count = a_node.idx + 1 /*This does not count the ft_pb*/

+ b_node.idx
  1. if <= mid.idx -> rb : rb.count = b_node.idx - 1  /*This does not count the ft_pb*/
  2. if > mid.idx -> rrb : rrb.count = b_node.idx + 1 /*This does not count the ft_pb*/
