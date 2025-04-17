#include <stdio.h>
#include "mycircle.h"


int main()
{
    set_radius(5);
    double circle_circumference = get_circle_circumference();
    double circle_area = get_circle_area();
    double tangent_area = get_tangent_area(3);
    double inner_area = get_inner_regular_polygon_area(4);
    double outer_area = get_outer_regular_polygon_area(4);


    printf( "%f\n" , circle_circumference );
    printf( "%f\n" , circle_area  );
    printf( "%f\n" , tangent_area  );
    printf( "%f\n" , inner_area  );
    printf( "%f\n" , outer_area  );

}
