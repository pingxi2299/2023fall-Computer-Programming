#pragma once

#include <stdint.h>

// Setup the radius r of the circle.
// This function must be called before all other functions.
// If r <= 0, return -1; otherwise , return 0.
int32_t set_radius( double r );

// Return the circumference of the circle
// If the radius is not set, return a negative number.
double get_circle_circumference();

// Return the area of the circle
// If the radius is not set, return a negative number.
double get_circle_area();

// Given x, (x,y) is a point on the upper circle.
// Return the area bounded by the tangent line at (x,y), x-axis y-axis.
// If the radius is not set, return a negative number.
// If it cannot form a triangle , return a negative number.
// If x is not a reasonable input , return a negative number.
double get_tangent_area( double x );

// Return the inner and outer regular polygon area.
// If the radius is not set, return a negative number.
// If n < 3, return a negative number.
double get_inner_regular_polygon_area( int32_t n );
double get_outer_regular_polygon_area( int32_t n );