#include <iostream>
#include <vector>
#include "math.h"
using namespace std;

//Time Complexity O(n^2)
//Space Complexity O(1)
vector<int> bubblesort(vector<int> arr){
    long len = arr.size();
    vector<int> items(arr);
    for(int i = 0; i < len;i++){
        for(int j = i + 1;j < len;j++){
            if(items[j] < items[i]){
               int tmp = items[j];
               items[j] = items[i];
               items[i] = tmp;
            }
        }
    }
    return items;
}

int main(){
    vector<int> items = {4,1,5,3,2};
    vector<int> sortItems =bubblesort(items);
    for(int i : sortItems)
    cout << i <<", ";
    cout << "\n";

    items = vector<int>(200,0);
    for(int i = 0;i < items.size();i++){
        items[i] = i;
    }
    int tmp = items[5];
    items[5] = items[6];
    items[6] = items[tmp];
    int count = 100000;
    time_t start = time(0);
    for(int i = 0;i < count; i++){
       bubblesort(items);
    }
    long seconds = time(0)- start;

    cout << seconds <<" seconds";
    }