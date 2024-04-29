// #include<iostream>
// #include<array>
// using namespace std;

// int main() {
//     array<int,4> a = {1,2,3,6};

//     int size = a.size();

//     for(int i=0; i<size; i++) {
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector<int> a(4, 6);
    for(int i:a) {
        cout<<i<<" ";
    }

    return 0;
}