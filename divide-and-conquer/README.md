# Divide and Conquer

Divide and Conquer is an algorithmic paradigm. A typical Divide and Conquer algorithm solves a problem using following three steps.

1. **Divide:** Break the given problem into subproblems of same type.
2. **Conquer:** Recursively solve these subproblems.
3. **Combine:** Appropriately combine the answers

## Algorithm
Algorithm DAndC(p)	{
	if Small(P) then return S(P);
	else	{
		divide P into smaller instances P<sub>1</sub>,P<sub>2</sub>,...,P<sub>k</sub>, k>=1;
		Apply DAndC to each of these subproblems;
		return Combine(DAndC(P<sub>1</sub>),DAndC(P<sub>2</sub>),...,DAndC(P<sub>k</sub>));
		}
	}

## Divide and Conquer Vs Dynamic Programming

- Divide and Conquer should be used when same subproblems are not evaluated many times. Otherwise Dynamic Programming or Memoization should be used.
- For example, Binary Search is a Divide and Conquer algorithm, we never evaluate the same subproblems again. On the other hand, for calculating nth Fibonacci number, Dynamic Programming should be preferred.