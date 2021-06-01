#include<stdio.h>
#include<math.h>

int main() {
  FILE *fout1;
  double Legendre(int, double);
  double x;
  fout1=fopen("LP.dat","w");
  
  for(int i=-100; i<=100; i++) {
    x=0.01*(double) i;
    fprintf(fout1,"%lf %lf %lf\n",x, Legendre(4,x), 0.125*(35.0*x*x*x*x-30.0*x*x+3.0));
  }
  fclose(fout1);
}

