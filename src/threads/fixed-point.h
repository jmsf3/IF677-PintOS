#ifndef THREADS_FIXED_POINT_H
#define THREADS_FIXED_POINT_H

typedef int fixed_point;    /* Fixed point number */
#define P 17                /* Integer bits */
#define Q 14                /* Fractional bits */
#define F (1 << Q)          /* 2^Q */

#define CONVERT_TO_FIXED_POINT(N) ((N) * F)
#define CONVERT_TO_INT_ZERO(X) ((X) / F)
#define CONVERT_TO_INT_NEAREST(X) ((X) >= 0 ? ((X) + F / 2) / F : ((X) - F / 2) / F)
#define ADD_FIXED_POINTS(X, Y) ((X) + (Y))
#define SUBTRACT_FIXED_POINTS(X, Y) ((X) - (Y))
#define ADD_FIXED_POINT_AND_INT(X, N) ((X) + (N) * F)
#define SUBTRACT_INT_FROM_FIXED_POINT(X, N) ((X) - (N) * F)
#define MULTIPLY_FIXED_POINTS(X, Y) (((int64_t) (X)) * (Y) / F)
#define MULTIPLY_FIXED_POINT_BY_INT(X, N) ((X) * (N))
#define DIVIDE_FIXED_POINTS(X, Y) (((int64_t) (X)) * F / (Y))
#define DIVIDE_FIXED_POINT_BY_INT(X, N) ((X) / (N))

#endif /* threads/fixed-point.h */