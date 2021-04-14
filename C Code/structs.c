#include<stdio.h>



typedef struct rectangle
{
	int length;
	int width;

} rectangle;

int main()
{
	rectangle myRectangle = {5 ,10};
	printf(" Length: %d. Width: %d \n", myRectangle.length, myRectangle.width);
		
	
	
	return 0;
}
