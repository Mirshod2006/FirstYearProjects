#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <container_type>

using namespace std; 
// // template <class X,typename T,typename Y>
// // X max(T a, Y b){
// //    return (a > b) ? a : b;
// // }
// // template <class T1,class T2>
// // void print(T1 a, T2 b){
// //     cout <<a <<" "<<b;
// // } 
// // struct Person{
// //     string name;
// //     int age;
// // };
// template <typename T>
// class Item{
//     private:
//     string name;
//     T value;
//     public:
//     Item(string name,T value):name{name},value{value}
//     {}
//     string get_name()const { return name;}
//     T get_value() const {return value;}
// };
// template <typename T1,typename T2>
// struct My_Pair{
//     T2 first;
//     T1 second;
// };
// int main() {
//     Item<int> item{"Frank",100};
//     cout << item.get_name()<<" "<<item.get_value()<<endl;
//      Item <Item<string>> item2{"Frank",{"C++","Professor"}}; 
//      cout << item2.get_name()<<" "
//      <<item2.get_value().get_name()<<" "
//      <<item2.get_value().get_value(); 
//      cout << "\n========================================\n";
//      vector<Item<double>> vec;
//      vec.push_back(Item<double>("mirshod",24.02));
//      vec.push_back(Item<double>("ali",35.67));
//      vec.push_back(Item<double>("sara",90.60));
//      for(auto &belong: vec){
//         cout << belong.get_name()<<" "<<belong.get_value()<<endl;
//      }
//      cout << "\n========================================\n";
//     My_Pair<const string,int> p1{"Nurmuhammad",18};
//     My_Pair<int , double> p2{185,83.60};

//     cout << p1.first<<" "<<p1.second<<"\n";
//     cout << p2.first<<" "<<p2.second<<"\n";
//   return 0;
// }
class Arrayu{
    int size{N};  //how do we get the N? 
    int values[N];// the N need to be known  at compile-time!
    
    friend ostream &operator<<(ostream &os,const Array &arr){
          os<< "[";
          for(const auto &val: arr.value)
          os<< " ";
          os<< "]";

        
    }

};
int main(){

    return 0;
}