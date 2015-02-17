/* Helpers for bigrf classification forests. */
/* This header file contains short descriptions for each function. For more
   details, see the .cpp file. */
#include <iostream>
#include <R.h>
#include <Rinternals.h>
#include <Rdefines.h>
#include <Rmath.h>

#ifndef BIGRFC_HELPERS_H
#define BIGRFC_HELPERS_H

/* Prepares the a matrix based on random sample of rows for modelling. */
SEXP moda(SEXP asaveP, SEXP aP, SEXP insampP);


/* Utility function for "unpacking"" an integer into an array of 1s and 0s (i.e.
   binary). */
void unpack(unsigned long npack, int icat[], int l);

/* The reverse of unpack. */
unsigned long pack(int icat[], int l);

#endif
