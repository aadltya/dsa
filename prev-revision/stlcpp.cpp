#include<bits/stdc++.h>
using namespace std;

void pairs () {
    pair <int, int> p = {1, 3};
    cout<<p.first<<" "<<p.second<<endl;

    pair <int, pair<int, int>> q = {7, {6, 4}};
    cout<<q.first<<" "<<q.second.first<<" "<<q.second.second<<endl;

    pair<int, int> arr[] = {{6,1}, {2,9}, {5,6}};
    cout<<arr[1].second<<endl;
}

void vectors() {
    vector <int> v;
    v.push_back(4);
    v.emplace_back(6); //emplace back is faster then push back

    vector <pair<int, int>> vec;
    vec.push_back({5,4});
    vec.emplace_back(8,6);
}

void iterators() {
    vector<int> v = {1,5,6,9,8}; //exceptional
    vector<int>::iterator name = v.begin();
    vector<int>::iterator name = v.end();
    vector<int>::iterator name = v.rend();
    vector<int>::iterator name = v.rbegin();
    name++;
    cout<<*(name)<<" ";

    //iterator for printing
    for(auto name : v) {
        cout<<name<<" ";
    }
 }

int main (){

    
    return 0;
}