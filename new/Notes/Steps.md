# Steps
1. find the biggest element: done
2. find the 2nd biggest element: done
3. calculate the cost for bringing each element to the top of stack 'b': done
4. define which is the cheapest: done

## Push form b to a
1. find biggest node
2. find 2nd biggest node
3. check which is cheapest
4. push cheapest to 'a'

+ if biggest = cheapest
	+ ra || rra biggest
	+ push biggest to a
	+ ra || rra 2nd biggest
	+ push 2nd biggest to a
 
+ if 2nd biggest = cheapest
	+ ra || rra 2nd biggest
	+ push 2nd biggest to a
	+ ra || rra biggest
	+ push biggest to a
	+ ft_sa(a);