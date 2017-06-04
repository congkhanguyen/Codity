// Codity.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include<conio.h>
#include <math.h>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

double solution(int x1, int y1, int r1, int x2, int y2, int r2) {
    // write your code in C++11 (g++ 4.8.2)
   double d = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
   if(d >= (r1+ r2))
	   acos(90);
        return 0;
   else
        return sqrt((-d + r1 + r2) * (d + r1 - r2) * (d - r1 + r2) * (d + r1 + r2)) /2;
}
int main()
{
	int x1, y1 ,r1, x2, y2, r2;
	scanf("%d%d%d%d%d%d",&x1, &y1 ,&r1, &x2, &y2, &r2);
	printf("Overlap area: %3.5f", solution(x1, y1 ,r1, x2, y2, r2));
	getch();
	return 0;
}
double solution(int x1, int y1, int r1, int x2, int y2, int r2) {
    // write your code in C++11 (g++ 4.8.2)
   double d = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
   if(d >= (r1+ r2))
        return 0;
   else
        return r1 * r1 * acos ((d * d + r1* r1 - r2 * r2) /(2 * d * r1)) + r2 * r2 * acos((d* d + r2*r2 - r1*r1)/(2 * d* r2)) - sqrt((-d + r1 + r2) * (d + r1 - r2) * (d - r1 + r2) * (d + r1 + r2)) /2;
}