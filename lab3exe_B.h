/*
* File Name: lab3_exe_B.c
* Assignment: Lab 3 Exercise B
* Lab section: (B01)
* Completed by: Shanzi Ye
* Submission Date: May 24,2022
*/

#ifndef CPLX_H
#define CPLX_H

struct cplx {
  double real;
  double imag;
};

/*  NOTES:
 *    The following set of function prototypes make for a good
 *    exercise in programming with structs but constitute a BAD module
 *    interface design.  A good interface would use the same pattern
 *    for all four function prototypes.
 *
 *    cplx_add probably has the most convenient interface, because it
 *    lets you write things like
 *
 *       w = cplx_add( z1, cplx_add(z2, z3) );
 *   
 *    On the other hand, cplx_multiply probably has the most efficient
 *    interface, because it eliminates any copying of structs.
 */

struct cplx cplx_add(struct cplx z1, struct cplx z2);
/* PROMISES: Return value is complex sum of z1 and z2. */

void cplx_subtract(struct cplx z1, struct cplx z2,  struct cplx *difference);
/*
 * REQUIRES
 *   difference points to a variable.
 * PROMISES
 *   *difference contains complex difference obtained
 *   by subtracting z2 from z1.
 */

void cplx_multiply(const struct cplx *pz1,
              const struct cplx *pz2, 
              struct cplx *product);
/*
 * REQUIRES
 *   pz1, pz2 and product point to variables.
 *   pz1 != product && pz2 != product.
 * PROMISES
 *   *product contains complex product of *pz1 and *pz2.
 */


#endif /* ifndef CPLX_H */
