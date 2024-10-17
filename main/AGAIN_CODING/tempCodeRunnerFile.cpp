long int power(long int n, int x){
   long int mult = 1;
  if(n == 0){
    return 1;
  }
  else{
    for(int i = 0; i<x;i++){
        mult *=n;
    }
  }
  return mult;
}
int main(){
   long long int sum = 0;
   int N,M;
   cin >> N >>M;
   for(int i = 0; i<N;i++){
   sum +=power(M,i);
   }
   cout << sum;
   return 0;
 }