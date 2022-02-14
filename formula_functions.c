#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void main()
{
  int op=0;
  printf("Enter 1 for circle circumference, 2 for circle area and 3 for sphere volume\n");

void CircleCircumference(float y,float *c ) 
{

   *c =2*3.14*y;
    
}


void CircleArea(float z,float *a)
{
    
    *a= 3.14*z*z;
}

float SphereVolume(float x,float *v)
{
    
    *v=(3.14*4*x*x*x)/3;
    
}
 
 
