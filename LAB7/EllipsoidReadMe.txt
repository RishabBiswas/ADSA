EXPERIMENT TITLE
Implementation of Ellipsoid Method for Solving Systems of Linear Inequalities Using C

OBJECTIVE
To implement the Ellipsoid Method in C to determine the feasibility of a system of linear inequalities of the form
Ax ≤ b, and to compute a feasible point if one exists.

PROBLEM STATEMENT
Given a system of linear inequalities:

a1ᵀx ≤ b1
a2ᵀx ≤ b2
...
amᵀx ≤ bm

where x ∈ ℝⁿ, implement the Ellipsoid Method to find a feasible solution x or report infeasibility.

THEORY

The Ellipsoid Method is an iterative algorithm used for solving feasibility and optimization problems in convex sets. It maintains an ellipsoid that contains the feasible region and progressively shrinks it using separating hyperplanes derived from violated constraints.

At each iteration:
• The center of the ellipsoid is tested against all constraints
• If the center violates a constraint, a separating hyperplane is used
• A new smaller ellipsoid containing the feasible region is computed

The algorithm terminates when:
• A feasible point is found, or
• The ellipsoid becomes too small, or
• The maximum iteration limit is reached

Although inefficient in practice, the Ellipsoid Method is important because it was the first algorithm proven to solve Linear Programming in polynomial time.

ALGORITHM

Initialize the ellipsoid center x = 0.

Initialize the shape matrix Q = R²I, where R is a large radius.

For each iteration:
a. Check if x satisfies all constraints Ax ≤ b.
b. If yes, output x as a feasible solution and stop.
c. Otherwise, select a violated constraint aᵢᵀx > bᵢ.
d. Compute direction vector using Q and aᵢ.
e. Update the center x using the ellipsoid update formula.
f. Update the shape matrix Q.

Stop if maximum iterations are exceeded.

INPUT

• Number of constraints (m)
• Dimension of variable space (n)
• Constraint matrix A (m × n)
• RHS vector b (m values)

OUTPUT

• Feasible point x (if found)
• Number of iterations taken
OR
• Message indicating no feasible solution within iteration limit

TIME COMPLEXITY

Let:
m = number of constraints
n = number of variables

Per iteration:
• Constraint checking: O(mn)
• Matrix-vector multiplication: O(n²)
• Matrix update: O(n²)

Time per iteration:
O(mn + n²)

Total time complexity:
O(MAX_ITER × (mn + n²))

Polynomial in n and m.

SPACE COMPLEXITY

• Shape matrix Q: O(n²)
• Constraint matrix A: O(mn)
• Auxiliary vectors: O(n)

Total Space Complexity:
O(n² + mn)

ADVANTAGES

Polynomial-time algorithm for linear feasibility problems.

Does not require a basic feasible solution.

Works for high-dimensional convex regions.

Theoretically important in computational complexity.

LIMITATIONS

Very slow in practice.

Sensitive to numerical errors.

Difficult to implement efficiently.

Mainly of theoretical interest.

Requires careful choice of initial ellipsoid.

APPLICATIONS

• Linear programming (theoretical foundation)
• Convex optimization
• Feasibility checking in constraint systems
• Computational geometry

RESULT

The Ellipsoid Method was successfully implemented in C. The program correctly identifies whether a feasible solution exists for a system of linear inequalities and outputs a feasible point when available.

CONCLUSION

The Ellipsoid Method provides a mathematically rigorous approach for solving linear feasibility problems in polynomial time. Although not practical for large-scale problems, it plays a crucial role in optimization theory and complexity analysis.