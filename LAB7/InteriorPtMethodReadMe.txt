EXPERIMENT TITLE
Implementation of Interior Point Method (Log Barrier Method) for Solving Linear Programming Problems Using C

OBJECTIVE
To implement an Interior Point Method using a logarithmic barrier approach in C to solve linear programming problems with equality constraints and non-negativity restrictions.

PROBLEM STATEMENT
Given a linear programming problem:

Minimize / Maximize
f(x) = cᵀx

Subject to
Ax = b
x > 0

Implement an Interior Point Method to compute an approximate optimal solution while maintaining feasibility with respect to the constraints.

THEORY

The Interior Point Method is a class of algorithms for solving linear and nonlinear optimization problems by traversing the interior of the feasible region rather than moving along the boundary, unlike the Simplex method.

In this experiment, a logarithmic barrier function is used to enforce the non-negativity constraint x > 0. The constrained optimization problem is transformed into an unconstrained one:

φ(x, μ) = cᵀx − μ ∑ log(xᵢ)

Here:
• μ > 0 is the barrier parameter
• As μ → 0, the solution approaches the true optimum

The algorithm iteratively reduces μ and applies gradient descent to minimize the barrier-augmented objective function while approximately satisfying the equality constraints.

ALGORITHM

Read number of variables (n) and number of equality constraints (m).

Read matrix A, vector b, and cost vector c.

Initialize an interior point x such that x > 0.

Set barrier parameter μ = 1.

Repeat until convergence:
a. Compute gradient of the barrier objective function.
b. Update x using gradient descent.
c. Project x to satisfy Ax = b approximately.
d. Repeat inner iterations until stabilization.

Reduce barrier parameter μ.

Output final approximate optimal solution and objective value.

INPUT

• Number of variables (n)
• Number of equality constraints (m)
• Constraint matrix A (m × n)
• Constraint vector b (m values)
• Cost vector c (n values)

OUTPUT

• Iteration-wise values of x and objective function
• Approximate optimal solution vector x
• Approximate optimal objective value

TIME COMPLEXITY

Let:
n = number of variables
m = number of constraints

Per inner iteration:
• Gradient computation: O(n)
• Matrix-vector multiplication: O(mn)
• Projection step: O(mn)

Time per inner loop:
O(mn)

Total time complexity:
O(OUTER_ITER × MAX_ITER × mn)

Polynomial in n and m.

SPACE COMPLEXITY

• Constraint matrix A: O(mn)
• Variable vector x and gradients: O(n)

Total Space Complexity:
O(mn)

ADVANTAGES

Works within the interior of the feasible region.

Avoids combinatorial complexity of Simplex.

Polynomial-time convergence for many problem classes.

Suitable for large-scale optimization problems.

LIMITATIONS

Requires an initial strictly feasible point.

Sensitive to step size and parameter tuning.

Convergence is approximate, not exact.

Numerical instability for very small μ.

Equality constraints are enforced approximately.

APPLICATIONS

• Large-scale linear programming
• Network flow optimization
• Convex optimization
• Machine learning optimization problems
• Operations research

RESULT

The Interior Point Method using a logarithmic barrier was successfully implemented in C. The program computes an approximate optimal solution while maintaining feasibility and gradually reducing the barrier parameter.

CONCLUSION

The Interior Point Method provides an efficient and scalable alternative to boundary-based optimization methods. Although approximate in nature, it converges rapidly for many practical problems and forms the basis of modern large-scale optimization solvers.