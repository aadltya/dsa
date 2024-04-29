

// #include<iostream>
// #include<iomanip>

// using namespace std;

// inline float currentBalance(int balance , float rate=1.04) {
//     return (balance *rate);
// }

// int main() {

//     int deposite;
//     cout<<"Enter ammount to deposite : ";
//     cin>>deposite;

//     cout<<"If you deposite "<<deposite<< "Rs you will get "<<currentBalance(deposite)<<"Rs after every year."<<endl;
//     cout<<"For employee if you deposite "<<deposite<< "Rs you will get "<<currentBalance(deposite, 1.1f)<<"RS after every year."<<endl;
//     return 0;
// }

/* -------------------------------Factoria------------------------- */
// #include<iostream>
// using namespace std;

// int fact(int n) {
//     if((n==0 || n==1)) {
//         return 1;
//     }
//     return n * fact(n-1);
// }

// int main() {

//     int a;
//     cout<<"Enter number: ";
//     cin>>a;
//     cout<<"The factorial of "<<a<<" is: "<<fact(a)<<endl;
//     return 0;
// }

/*---------------------------- Recursion Problem -------------------------------*/
// #include <iostream>
// using namespace std;

// int pow(int n, int m) {
//     //Base case
//     if (m == 0)
//         return 1;

//     //recursive relation
//     return n*pow(n, m-1);
// }

// int main() {
//     int n;
//     cin>>n;
//     int m;
//     cin>>m;
//     int ans = pow(n,m);
//     cout<<ans<<endl;
//     return 0;
// }

/* ---------------------Fibonacci Series---------------------------------- */
// #include<iostream>
// using namespace std;

// int fib(int n) {  //1 1 2 3 5 8 13 21 34
//     if(n<2) {
//         return 1;
//     }
//     return fib(n-2) + fib(n-1);
// }

// int main() {

//     int a;
//     cout<<"Enter number: ";
//     cin>>a;
//     cout<<"The term at position "<<a<<" of fibonacci series is: "<<fib(a)<<endl;
//     return 0;
// }

/*----------------------Classes in C++----------------------------------------*/
// #include<iostream>
// using namespace std;

// class student {

//   private:
//     int a, b;
//   public:
//     int c;
//     void setData(int a1, int b1);
//     void getData() {
//       cout<<"The value of a is: "<<a<<endl;
//       cout<<"The value of b is: "<<b<<endl;
//       cout<<"The value of c is: "<<c<<endl;
//     }
// };

// void student::setData(int a1, int b1) {
//   a = a1;
//   b = b1;
// }

// int main() {

//   student aditya;
//   aditya.c=3;
//   aditya.setData(55,54);
//   aditya.getData();
//   return 0;
// }

/*-------------------------arrays in class c++ example-----------------*/
// #include <iostream>
// using namespace std;

// class shop
// {
// private:
//   int itemID[10];
//   int itemPrice[10];
//   int counter;

// public:
//   void initCounter(void) { counter = 0; }
//   void setPrice(void);
//   void display(void);
// };

// void shop ::setPrice(void)
// {      
//   cout << "Enter item ID: ";
//   cin >> itemID[counter];
//   cout << "Enter item price: ";
//   cin >> itemPrice[counter];
//   counter++;
// }

// void shop ::display(void)
// {
//   for (int i = 0; i < counter; i++)
//   {
//     cout << "Item ID: " << itemID[i] << " and Item price: " << itemPrice[i] << "Rs" << endl;
//   }
// }

// int main()
// {
//   int n;
//   cout << "enter no.of items to be entered: ";
//   cin >> n;
//   shop wit;
//   wit.initCounter();
//   for (int j = 1; j <= n; j++)
//   {
//     wit.setPrice();
//     cout << endl;
//   }
//   wit.display();
//   return 0;
// }

/*----------------------------addition of complex numbers-----------------------------------*/

// #include<iostream>
// using namespace std;

// class complex { 
//     private:
//         int a, b;
//     public:
//         void setData(int v1, int v2) {
//             a = v1;
//             b = v2;
//         } 
//         void sum(complex o1, complex o2) {
//             a = o1.a + o2.a;
//             b = o1.b + o2.b;
//         }
//         void answer() {
//             cout<<"your complex number is "<<a<<"+"<<b<<"i"<<endl;
//         }
// }; 

// int main() {

//     complex c1, c2, c3;
//     c1.setData(3, 4);
//     c1.answer();

//     c2.setData(1, 6);
//     c2.answer();

//     c3.sum(c1, c2);
//     c3.answer();
//     return 0;
// }

/*------------------------- Invoking Constructors in C++ ------------------------*/
// #include<iostream>
// using namespace std;

// class math { 
//   int a,b;
//     public:
      
//       math(void); //constructor declaration
      
//       void print() {
//         cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;
//       }
// };

// math :: math(void) { 
//   a = 3; 
//   b = 4;
// }

// int main() { 

//   math c;
//   c.print();
//   return 0;
// }

  