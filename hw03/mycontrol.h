#pragma once

#include <stdint.h>
#include <stdio.h>
#include <math.h>

// Setup the initial position to (x,y) and the moving direction.
// a is the angle counterclockwise from x axis. 
void initialize( double x, double y, double a);

// From the current, move forward length with the given direction.
// If the initial position is not set, return -1. 
int32_t forward( double length );

// From the current direction, turn clockwise/counterclockwise x.
// If the initial position is not set, return -1. 
int32_t clock_turn( double x );
int32_t counterclock_turn( double x );

// Print the current location and the direction.
// The print format is "position: (x,y), angle: a".
// a is the angle counterclockwise from x axis and 0 <= a < 2pi 
// If the initial position is not set, return -1.
int32_t print();