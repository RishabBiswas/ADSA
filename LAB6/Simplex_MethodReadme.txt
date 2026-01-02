EXPERIMENT TITLE
Implementation of Simplex Method for Solving Linear Programming Problems Using C

OBJECTIVE
To implement the Simplex algorithm in C for solving maximization type Linear Programming Problems (LPPs) with linear inequality constraints and to obtain the optimal solution along with intermediate simplex tableaus.

PROBLEM STATEMENT
Given a linear programming problem of the form:

Maximize
Z = c1x1 + c2x2 + ... + cnxn

Subject to
a11x1 + a12x2 + ... + a1nxn ≤ b1
a21x1 + a22x2 + ... + a2nxn ≤ b2
...
am1x1 + am2x2 + ... + amnxn ≤ bm

where xi ≥ 0, implement the Simplex method to determine the optimal solution.

THEORY

The Simplex Method is an iterative algorithm used to solve Linear Programming Problems. It works by converting the given inequalities into equations using slack variables and then repeatedly improving the value of the objective function by moving from one basic feasible solution to another.

Each iteration consists of:

Selecting an entering variable (most negative coefficient in the objective row)

Selecting a leaving variable using the minimum ratio test

Performing pivot operations to update the simplex tableau

The algorithm terminates when all coefficients in the objective function row are non-negative, indicating an optimal solution.

ALGORITHM

Read number of constraints (m) and number of variables (n).

Read the constraint coefficient matrix A, RHS vector b, and objective coefficients c.

Convert inequalities into equations by adding slack variables.

Construct the initial simplex tableau.

Repeat until optimality condition is satisfied:
a. Select entering variable (most negative value in Z-row).
b. Select leaving variable using minimum ratio test.
c. Perform pivot operation (Gauss-Jordan elimination).

Extract the optimal solution from the final tableau.

Display variable values and maximum value of Z.

INPUT

• Number of constraints
• Number of decision variables
• Constraint coefficient matrix
• RHS vector
• Objective function coefficients

OUTPUT

• Initial simplex tableau
• Iteration-wise simplex tableaus
• Pivot row and column at each step
• Optimal values of decision variables
• Maximum value of the objective function

TIME COMPLEXITY

Let:
m = number of constraints
n = number of variables

Each iteration performs:

Entering variable selection: O(n + m)

Leaving variable selection: O(m)

Pivot operation: O(m × (n + m))

Worst-case number of iterations is exponential, but typically bounded by practical constraints.

Overall Time Complexity (per iteration):
O(m × (n + m))

Worst-case Time Complexity:
Exponential in theory, polynomial in practice for most problems.

SPACE COMPLEXITY

• Simplex tableau size = (m + 1) × (n + m + 1)

Space Complexity:
O(m × (n + m))

ADVANTAGES

Efficient for practical linear programming problems.

Guarantees optimal solution if one exists.

Provides step-by-step improvement of solution.

Easy to interpret using simplex tableaus.

LIMITATIONS

Applicable only to linear problems.

Worst-case time complexity is exponential.

Does not handle ≥ or = constraints directly.

Requires modifications for minimization problems.

Can suffer from degeneracy and cycling.

APPLICATIONS

• Resource allocation problems
• Production planning
• Transportation and logistics
• Operations research
• Economics and management science

RESULT

The Simplex method was successfully implemented in C. The program correctly computes the optimal solution for maximization type linear programming problems with ≤ constraints and displays all intermediate tableaus.

CONCLUSION

The experiment demonstrates the effectiveness of the Simplex method in solving linear programming problems. The implementation clearly illustrates how pivot operations iteratively improve the objective function until optimality is achieved.