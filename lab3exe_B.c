/*
* File Name: lab3_exe_B.c
* Assignment: Lab 3 Exercise B
* Lab section: (B01)
* Completed by: Shanzi Ye
* Submission Date: May 24,2022
*/

#include "lab3exe_B.h"

struct cplx
cplx_add(struct cplx z1, struct cplx z2)
{
  struct cplx result;

  result.real = z1.real + z2.real;
  result.imag = z1.imag + z2.imag;
  return result;
}

void cplx_subtract(struct cplx z1, struct cplx z2, struct cplx* difference)
{
	struct cplx result;
	result.real = z1.real - z2.real;
	result.imag = z1.imag - z2.imag;
	*difference = result;
}

void cplx_multiply(const struct cplx* pz1, const struct cplx* pz2, struct cplx* product)
{
	struct cplx result;

	result.real = pz1->real * pz2->real;
	result.imag = pz1->imag * pz2->imag;
	*product = result;
}