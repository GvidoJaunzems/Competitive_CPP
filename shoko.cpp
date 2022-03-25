#include <stdio.h>


int main(void) {
  int M, N, K, MN,  res; 
  scanf("%i %i %i", &M, &N, &K );

  MN = M * N; M = (M<N)?M:N; N = MN/M;

  if (K==MN) res=0;
  else if ((K % M == 0) || (K % N == 0)) res=1;
       else 
         {
          res=3;
          for (int i=1; (i<M)&&(res==3); i++ ) if ( (K%i==0) && (K < N*i) ) res=2;
          K = MN - K;
          for (int i=1; (i<M)&&(res==3); i++ ) if ( (K%i==0) && (K < N*i) ) res=2;              
         }

  printf( "%i\n", res);  

  return(0);
}
