#include <stdio.h> 
int width;          
int height;         

int area;           
int perimeter;      

int main() 
{
	height = 5;//height of the rectangle in inches
	width = 3;//width of the rectangle in inches

    perimeter = 2*(height + width);
	printf("Perimeter of the rectangle = %d inches\n", perimeter);
	
	area = height * width;
	printf("Area of the rectangle = %d square inches\n", area);

    float width;  // we change all ints for floats so it can read the decimals        
    float height;         

    float area;           
    float perimeter;
    
    height = 6.8;//height of the rectangle in inches with decimals
	width = 2.3;//width of the rectangle in inches with decimals

    perimeter = 2*(height + width);
	printf("Perimeter of the rectangle = %.2f inches\n", perimeter); //we change %d for %f so it works with float
	
	area = height * width;
	printf("Area of the rectangle = %.2f square inches\n", area);//we use %2.f so it only shows two decimals after the point

return 0;
}