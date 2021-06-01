double P0x(double);
double P1x(double);
double Legendre(int n, double x) {
  if(n==0) {
    return P0x(x);
  }
  else if (n==1) {
    return P1x(x);
  }
  else {
    return (double) ((2*n-1)*x*Legendre(n-1,x)-(n-1)*Legendre(n-2,x))/n;
  }
}


