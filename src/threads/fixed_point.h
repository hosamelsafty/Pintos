/*
 * fixed-point.h
 *
 *  Created on: Nov 29, 2017
 *      Author: hossam
 */
/*
 *
Convert n to fixed point:	n * f
Convert x to integer (rounding toward zero):	x / f
Convert x to integer (rounding to nearest):	(x + f / 2) / f if x >= 0,
(x - f / 2) / f if x <= 0.
Add x and y:	x + y
Subtract y from x:	x - y
Add x and n:	x + n * f
Subtract n from x:	x - n * f
Multiply x by y:	((int64_t) x) * y / f
Multiply x by n:	x * n
Divide x by y:	((int64_t) x) * f / y
Divide x by n:	x / n
 *
 */
#ifndef FIXED_POINT_H_
#define FIXED_POINT_H_
#define f ((1)<<(14))
#define convert_int_to_fp(n) ((n)*(f))
#define convert_fp_to_int(n) ((n)/(f))
#define round_to_zero(x) ((x)/(f))
#define round_to_nearest(x) (x)>=(0)?(((x)+(f)/(2))/(f)):(((x)-(f)/(2))/(f))
#define add(x,y) ((x)+(y))
#define sub(x,y) ((x)-(y))
#define add_int(x,n) ((x)+(convert_int_to_fp(n)))
#define sub_int(x,n) ((x)-(convert_int_to_fp(n)))
#define mul(x,y) (((int64_t)x)*(y)/(f))
#define mul_int(x,n) ((x)*(n))
#define div(x,y) (((int64_t)x)*(f)/(y))
#define div_int(x,n) ((x)/(n))


#endif /* FIXED_POINT_H_ */
