#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Read input
    int p, q, r, s, t;
    printf("Enter the radius of the circle: ");
    scanf("%d",&p);
    printf("Enter the side of the square: ");
    scanf("%d",&q);
    printf("Enter the side of an equilateral triangle: ");
    scanf("%d",&r);
    printf("Enter the length and breadth of a rectangle: ");
    scanf("%d%d",&s,&t);
   

    // Calculate the areas of the shapes
    double circle_area = M_PI * p * p;
    double square_area = q * q;
    double triangle_area = (r * r * sqrt(3)) / 4;
    double rectangle_area = s * t;

    // Create a dictionary mapping shape names to areas
    char* shapes[] = {"Circle", "Square", "Triangle", "Rectangle"};
    double areas[] = {circle_area, square_area, triangle_area, rectangle_area};
    int n = sizeof(shapes) / sizeof(shapes[0]);

    // Sort the dictionary in descending order by area
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (areas[i] < areas[j])
            {
                double temp = areas[i];
                areas[i] = areas[j];
                areas[j] = temp;

                char* temp2 = shapes[i];
                shapes[i] = shapes[j];
                shapes[j] = temp2;
            }
        }
    }

    // Print the names of the shapes
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", shapes[i]);
    }

    return 0;
}

