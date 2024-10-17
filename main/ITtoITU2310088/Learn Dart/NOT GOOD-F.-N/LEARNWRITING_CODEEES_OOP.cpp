// #include <bits/stdc++.h>
// #include <iostream>
// #include <vector>
// using namespace std;
// class Teacher{
//     public:
//     int N;
//     vector<int> arr1;
//     vector<int> arr2;
//       int coutMin(int N,vector<int> arr1[],vector<int> arr2[]){
//        sort(arr1,arr1+N);
//        sort(arr2,arr2+N);
//        vector<long int> masofa1;
//        vector<long int> masofa2;
//      for(int i = 0; i < N;i++){
//         for(int j = 0; j < N; j++){
//         if(i != j)
//         masofa1.push_back(abs(arr1[i]-arr1[j]));
//         }
//       }
//       for(int i = 0; i < N;i++){
//         for(int j = 0; j < N; j++){
//         if(i != j)
//         masofa2.push_back(abs(arr2[i]-arr2[j]));
//         }
//       }
//      long  int y1 = *min_element(masofa1.begin(),masofa1.end());
//      long int y2 = *min_element(masofa2.begin(),masofa2.end());
//      return (y1+y2);
//       }
//       int coutMax(int N,vector<int> arr1[],vector<int> arr2[]){
//        sort(arr1,arr1+N);
//        sort(arr2,arr2+N);
//        vector<long int> masofa1;
//        vector<long int> masofa2;
//      for(int i = 0; i < N;i++){
//         for(int j = 0; j < N; j++){
//         if(i != j)
//         masofa1.push_back(abs(arr1[i]-arr1[j]));
//         }
//       }
//       for(int i = 0; i < N;i++){
//         for(int j = 0; j < N; j++){
//         if(i != j)
//         masofa2.push_back(abs(arr2[i]-arr2[j]));
//         }
//       }
//      long int x1 = *max_element(masofa1.begin(),masofa1.end());
//      long int x2 = *max_element(masofa2.begin(),masofa2.end());
//      return (x1+x2);
//       }
    

// };
// int main(){
//     int N; cin >>N ;
//     int arr[N][2];
//     vector<int> subarr1[N];
//     vector<int> subarr2[N];
//     for(int i = 0; i < N;i++){
//         for(int j = 0; j < 2;j++){
//            cin >> arr[i][j];
//         }
//     }
//     for(int i = 0; i < N;i++){
//        subarr1[i].push_back(arr[i][0]);
//     }
//       for(int i = 0; i < N;i++){
//         subarr2[i].push_back(arr[i][1]);
//       }
//     Teacher he;
//     cout << he.coutMin(N,subarr1,subarr2)<<" "<<he.coutMax(N,subarr1,subarr2);
    
//     return 0;
// }