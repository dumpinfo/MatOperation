#include <stdio.h>
#include <stdlib.h>
#include "Matrix.h"
#include "MatMath.h"

int main(int argc,char* argv[])
{
	Matrix <double> Mat(8,8);
	printf("hello world\n");
	Mat[3][1] =2;
	printf("%.2lf\n", Mat(3,1));
	return 1;
}
