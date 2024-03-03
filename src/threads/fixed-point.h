#ifndef THREADS_FIXED_POINT_H
#define THREADS_FIXED_POINT_H

/* The fixed-point arithmetic is used to perform calculations with
   fixed decimal places. This implementation uses a 32-bit integer
   to represent fixed-point numbers.
   
   The following macros are defined:
   - P: Number of bits reserved for the integer part;
   - Q: Number of bits reserved for the fractional part;
   - F: Fixed-point representation of 1, calculated as (1 << Q). */

typedef int fixed_point;
#define P 17            
#define Q 14            
#define F (1 << Q)      

#define CONVERT_TO_FIXED_POINT(N)           ((N) * F)
#define CONVERT_TO_INT_ZERO(X)              ((X) / F)
#define CONVERT_TO_INT_NEAREST(X)           ((X) >= 0 ? ((X) + F / 2) / F : ((X) - F / 2) / F)
#define ADD_FIXED_POINTS(X, Y)              ((X) + (Y))
#define SUBTRACT_FIXED_POINTS(X, Y)         ((X) - (Y))
#define ADD_FIXED_POINT_AND_INT(X, N)       ((X) + (N) * F)
#define SUBTRACT_INT_FROM_FIXED_POINT(X, N) ((X) - (N) * F)
#define MULTIPLY_FIXED_POINTS(X, Y)         (((int64_t) (X)) * (Y) / F)
#define MULTIPLY_FIXED_POINT_BY_INT(X, N)   ((X) * (N))
#define DIVIDE_FIXED_POINTS(X, Y)           (((int64_t) (X)) * F / (Y))
#define DIVIDE_FIXED_POINT_BY_INT(X, N)     ((X) / (N))

#endif /* threads/fixed-point.h */