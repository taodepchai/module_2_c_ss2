#include <stdio.h>
int main() {
   int length = 5, width = 4, radius = 3;
   int perimeter_rectangle,acreage_rectangle;
   float perimeter_circle, acreage_circle;
   const float PI = 3.14;
   perimeter_rectangle = (length + width ) * 2 ;
   acreage_rectangle = length * width;
   perimeter_circle = 4 * PI * radius;
   acreage_circle = radius * radius * PI;
   printf(" chu vi hinh tron va hinh vuong lan luot la %.2f va %d\n" , perimeter_circle , perimeter_rectangle );
   printf(" dien tich hinh tron va hinh vuong lan luot la %.2f va %d\n" , acreage_circle , acreage_rectangle ) ;
}
