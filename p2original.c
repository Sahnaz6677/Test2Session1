#include<stdio.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("Enter the points :\n");
  scanf("%f%f%f%f%f%f",x1,y1,x2,y2,x3,y3);
}

int is_triangle(float x1, float y1, float x2, float y2, float x3, float y3)
{
  float a;
  a = 0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
  if (a==0)
    return 1;
  else
    return 2;
}

void output(float x1, float y1, float x2, float y2, float x3, float y3, int istriangle)
{
  if (istriangle==1)
    printf("The points will not form the triangle\n");
  else
    printf("The points will form the triangle\n");
}

int main()
{
  float a,b,c,d,e,f,z;
  input_triangle(&a,&b,&c,&d,&e,&f);
  z=is_triangle(a,b,c,d,e,f);
  output(a,b,c,d,e,f,z);
  return 0;
}