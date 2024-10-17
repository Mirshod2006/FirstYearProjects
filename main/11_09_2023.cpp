#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

/*int main(){
    int n, t;
    cin >> n >> t;
    if( n >= 1 && n <= 100 && t >= 1 && t <= 100){
        cout << setprecision(2) << fixed << (t/(double)n) * 100 <<"%";
    }
    return 0;
}*/
//int main(){
    // int n,t,k;
    // cin >> n >> t >> k;
    // int arr[n];
    // vector<int> list;
    // bool a = false;
    // if( n >= 1 && n <= 100 && t >= 1 && t <= 100 && k >= 1 && k <= 100){
    //    for( int i = 0; i < n; i++){
    //     t = arr[i];
    //    }
    //    if( n >= k){
    //     for( int j = 0; j < k; j++){
    //         list[j] = arr[j] - 1;
    //     }
    //    }
    //    else{
    //        for( int l = 0; l < n; l++){
    //             list[l] = arr[l] - (k/n);
    //        }
    //        for( int i = 0; i < (k % n); i++){
    //         list[i] = list[i] - 1;
    //        }
    //    }
    //    for(int i = 0; i < n; i ++){
    //     cout << list[i] << endl;
    //      if ( list[i] <= 0){
    //           a = true;
    //      }
    //    }
    //    if(a)
    //    cout << "1";
    //    else 
    //    cout << "-1";
    // }
//     if( (n - 1) * t >= k){
//         cout << -1;
//     }
//     else{
//         cout << 1;
//     }
//     return 0;

// int main(){
//     int n,t;
//     cin >> n >> t;
//     cout << 24 + t - n;
//     return 0;
// }
// int main(){
//     char m , n;
//     cin >> m >> n;
//     int b = (int)m - 64;
//     int a = (int)n - 64;
//     cout << a + b;
//     return 0;
// }
/*int main() {
    int n, k;
    cin >> n >> k;

    vector<int> meals(n);
    for (int i = 0; i < n; i++) {
        cin >> meals[i];
    }

    sort(meals.begin(), meals.end(), greater<int>());

    int totalMood = 0;
    for (int i = 0; i < k; i++) {
        totalMood += meals[i];
    }

    cout << totalMood << endl;

    return 0;
}*/

#include <iostream>
#include <list>
using namespace std;

int findWinner(int n, std::list<int>& seats) {
    list<int>::iterator curr = seats.begin();
    list<int>::iterator next;

    while (seats.size() > 1) {
        next = std::next(curr);
        if (next == seats.end()) {
            next = seats.begin();
        }

        seats.erase(next);
        curr = std::next(curr);
        if (curr == seats.end()) {
            curr = seats.begin();
        }
    }

    return seats.front();
}

int main() {
    int n;
    std::cin >> n;

    std::list<int> seats;
    for (int i = 0; i < n; i++) {
        int seat;
        std::cin >> seat;
        seats.push_back(seat);
    }

    int winner = findWinner(n, seats);
    std::cout <<  winner << std::endl;

    return 0;
}
