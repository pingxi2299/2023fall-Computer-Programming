#include "mycircle.h"
#include <math.h>

static double radius = -1.0;
static double circumference = 0.0;
static double circleArea = 0.0;
static double tangentArea = 0.0;
static double innerArea = 0.0;
static double outerArea = 0.0;

int32_t set_radius( double r )
{
    if ( r <= 0 )
    {
        if ( radius > 0 )
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }
    else
    {
        radius = r;
        return 0;
    }
}

double get_circle_circumference()
{
    if ( radius <= 0 )
    {
        return -1;
    }
    else
    {
        circumference = M_PI * radius * 2.0;
        return circumference;
    }
}

double get_circle_area()
{
    if ( radius <= 0 )
    {
        return -1;
    }
    else
    {
        circleArea = M_PI * radius * radius;
        return circleArea;
    }
}

double get_tangent_area( double x )
{
    if ( radius <= 0 || x == 0 || x <= radius * -1 || x >= radius )
    {
        return -1;
    }
    else
    {
        double y = sqrt ( radius * radius - x * x );
        tangentArea = x * radius * radius / y + y * radius * radius / x;
        return tangentArea;
    }
}

double get_inner_regular_polygon_area( int32_t n )
{
    if ( n < 3 || radius <= 0 )
    {
        return -1;
    }
    else
    {
        innerArea = radius * radius * sin( M_PI / n ) * cos( M_PI / n ) * n;
        return innerArea;
    }
}

double get_outer_regular_polygon_area( int32_t n )
{
    if ( n < 3 || radius <= 0 )
    {
        return -1;
    }
    else
    {
        outerArea = radius * radius * n * tan( M_PI / n );
        return outerArea;
    }
}
