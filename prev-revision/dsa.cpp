
/*--------------------------Pattern questions------------------------------------*/
//extra curricular activity:    https://xhamster42.desi/videos/18yo-teen-gets-fucked-in-ass-in-first-casting-video-xh8bfO9  https://xhamster42.desi/videos/amateur-wife-and-young-black-cock-xhe5Qap https://xhamster42.desi/videos/viral-mms-riya-and-anuj-xhEwxs1  https://xhamster.desi/videos/gorgeous-busty-curvy-pale-milf-cuckold-7500654   https://xhamster.desi/videos/this-is-tender-and-classic-sex-xhHfZOj  name: queenlin
//Hollow rectangle pattern -->
// #include<iostream>
// using namespace std;

// int main() {

//     int row, col;
//     cout<<"Enter no.of rows: ";
//     cin>>row;
//     cout<<"Enter no.of colunms: ";
//     cin>>col;
-
//     for(int i=1; i<=row; i++) {
//         for(int j=1; j<=col; j++) {
//             if(i==1 || i==row) {
//                 cout<<"*";
//             }
//             else if(j==1 || j==col) {
//                 cout<<"*";
//             }
//             else {
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }f   

//Pyramid with numbers pattern ---->
// #include <iostream>
// using namespace std; 

// int main() {


//     int n, c=1;
//     cout<<"pls: ";
//     cin>>n;

//     for(int i=1; i<=n; i++) {
//         for(int j=1; j<=i; j++) {
//             cout<<" "<<c;
//             c++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//another one (KHALED) -->
//1
//2 3
//3 4 5
//4 5 6 7
//5 6 7 8 9
// #include<iostream>   
// using namespace std;

// int main() {
//     int n;
//     cin>>n;

//     int row=1;
//     while(row<=n) {
//         int col=1;
//         int val=row;
//         while(col <= row) {
//             cout<<" "<<val;
//             val++;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }

// Reverse number Pattern (IMP) -->                    
// 1
// 2 1              (use the 'i' and 'j' to make formula like for position 3 = 4(i)-2(j)+1)
// 3 2 1
// 4 '3' 2 1
// #include<iostream>
// using namespace std;
// int main() {
    
//     int n;
//     cin>>n;

//     for(int i=1; i<=n; i++) {
//         for(int j=1; j<=i; j++) {
//             cout<<(i-j+1)<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Alphabet pattern AAA -->
// #include<iostream>    //(Use formula 'A'+i-1 to get pattern)
// using namespace std;

// int main () {
    
//     int n;
//     cin>>n;

//     for(int i=1; i<=n; i++) {
//         for (int j=1; j<=n; j++) {
//             char m = ()'A'+ i - 1);
//             cout<<m<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Another one -->   (formula is 'A'+j-1)
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;

//     for(int i=1; i<=n; i++) {
//         for (int j=1; j<=n; j++) {
//             char m = 'A'+ j - 1;
//             cout<<m<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Another one -->
// #include<iostream>
// using namespace std;

// int main() {

//     int n;
//     char m = 'A';
//     cin>>n;

//     for(int i=1; i<=n; i++) {
//         for(int j=1; j<=n; j++) {
//             cout<<m<<" ";
//             m++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Another one --> 
// A B C
// B C D
// C D E
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;

//     for(int i=1; i<=n; i++) {
//         for (int j=1; j<=n; j++) {
//             char m = 'A'+ i + j - 2;
//             cout<<m<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Perfect Pyramid  -->
// #include <iostream>
// using namespace std;

// int main()
// {
// 	int n;
//     cin>>n;

// 	// looping rows
// 	for (int i = n; i > 0; i--) {
// 		for (int j = 1; j <= n; j++) // looping columns
// 		{
// 			if (j >= i) {
// 				cout << "* ";
// 			}
// 			else {
// 				cout << " "; 
// 			}
// 		}
// 		cout << endl;
// 	}
// 	return 0;
// }

// Perfect Pyramid with numbers -->
//     1
//    121
//   12321
//  1234321 
// #include<iostream>
// using namespace std;

// int main() {
// 	int n;
// 	cin>>n;
	
// 	int row=1;
// 	while (row<=n) {
// 		int space = n-row;
// 		while(space) {
// 			cout<<" ";
// 			space = space - 1;
// 		}
		
// 		int col=1;
// 		while(col<=row) {
// 			cout<<col;
// 			col = col+1;
// 		}
// 		int i,start = i-1;
// 		while(start) {
// 			cout<<start;
// 			start = start-1;
        
// 		}

// 		cout<<endl;
// 		row = row+1;
// 	}
// }

/*--------------------------Pattern questions------------------------------------*/
//Hollow rectangle pattern
// #include<iostream>
// using namespace std;

// int main() {

//     int row, col;
//     cout<<"Enter no.of rows: ";
//     cin>>row;
//     cout<<"Enter no.of colunms: ";
//     cin>>col;

//     for(int i=1; i<=row; i++) {
//         for(int j=1; j<=col; j++) {
//             if(i==1 || i==row) {
//                 cout<<"*";
//             }
//             else if(j==1 || j==col) {
//                 cout<<"*";
//             }
//             else {
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//Pyramid with numbers pattern
// #include <iostream>
// using namespace std; 

// int main() {


//     int n, c=1;
//     cout<<"pls: ";
//     cin>>n;

//     for(int i=1; i<=n; i++) {
//         for(int j=1; j<=i; j++) {
//             cout<<" "<<c;
//             c++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//another one (KHALED)
                               //1
                               //2 3
                               //3 4 5
                               //4 5 6 7
                               //5 6 7 8 9
// #include<iostream>   
// using namespace std;

// int main() {

//     int n;
//     int i;
//     int c = i;
//     cin>>n;

//     for(i=1; i<=n; i++) {
//         for(int j=1; j<=i; j++) {
            
//             cout<<c;
//             c=c+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// } 

/*-------------------------------- Prime Numbers ---------------------------------*/
// #include<iostream>
// using namespace std;

// bool isPrime(int num) {
//     if(num==0 || num==1){
//         return false;
//     }
//     for(int i=2; i<num; i++) {
//         if(num%i == 0){
//             return false;
//         }
//     return true;
//     }
// }

// int main() {
//     int n; 
//     cin>>n;

//     for(int i=0; i<n; i++) {
//         if(isPrime(i)) 
//             cout<<i<<" ";
//     }
//     return 0;   
// }

/*-------------------------------- Reverse an Array ------------------------------*/
// #include<iostream>
// using namespace std;

// void reverseArr(int arr[], int n) {
//     int start = 0;
//     int end = n-1;

//     while(start<=end) {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// void printArr(int arr[], int n) {
//     for(int i=0; i<n; i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;  aditya swami
// }

// int main() {

//     int arr[6] = {5,6,8,2,3,4};
//     int brr[5] = {4,6,-2,7,5};

//     reverseArr(arr, 6);
//     reverseArr(brr, 5);

//     printArr(arr, 6);
//     printArr(brr, 5);
//     return 0;
// }

/*--------------------------- Binary Search In Arrays ------------------------------*/
// #include<iostream>
// using namespace std;

// int binarySearch(int arr[], int n, int key) {
//     int s=0;
//     int e=n;
//     while(s<=e) {
//         int mid = (s+e)/2;
//         if(arr[mid]==key) {
//             return mid;
//         }
//         else if(arr[mid]>key) {
//             e = mid-1;
//         }
//         else {
//             s = mid+1;
//         }
//     }
//     return -1;
// }

// int main() {

//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0; i<n; i++) {
//         cin>>arr[i];
//     }

//     int key;
//     cin>>key;

//     cout<<"Your key is at index: "<<binarySearch(arr, n, key);
    
//     return 0;
// }

/*------------------ Sorting Arrays ---------------------*/
// #include<iostream>
// using namespace std;

// int main() {

//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++) {           //    4 9 7 2 3 --> 2 3 4 7 9
//         cin>>arr[i];        
//     }

//     for(int i=0; i<n-1; i++) {
//         for(int j=i+1; j<n; j++) {
//             if(arr[j]<arr[i]) {
//                 int temp = arr[j]; 
//                 arr[j] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//     }
//     for(int i=0; i<n; i++) {
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
// }

// #include<iostream>
// using namespace std;

// int firstSearch(int arr[], int size, int key) {
//     int start = 0;
//     int end = size - 1;
//     int ans = 0;

//     while(start<=end) {
//         int mid = start + (end-start)/2;
//         if(arr[mid] == key) {
//             ans = mid;
//             end = mid - 1;
//         }
//         else if(arr[mid] < key) {
//             start = mid + 1;
//         }
//         else{
//             end = mid - 1;
//         }
//     }
//     return ans;
// }

// int lastSearch(int arr[], int size, int key) {
//     int start = 0;
//     int end = size - 1;
//     int ans = 0;

//     while(start<=end) {
//         int mid = start + (end-start)/2;
//         if(arr[mid] == key) {
//             ans = mid;
//             start = mid + 1;
//         }
//         else if(arr[mid] < key) {
//             start = mid + 1;
//         }
//         else{
//             end = mid - 1;
//         }
//     }
//     return ans;
// }

// int main() {

//     int key;
//     cin>>key;

//     int arr[20] = {2,6,9,9,9,9,12,18,19,20,20,20,26,29,33};
//     cout<<"first Occ is at :"<<firstSearch(arr, 20, key)<<endl;
//     cout<<"last Occ is at :"<<lastSearch(arr, 20, key)<<endl;
//     return 0;
// }

/*------------------- Max till i of array ---------------------------*/
// #include<iostream>
// using namespace std;

// int main() {
//     int mx = -999999;
//     int n;
//     cin>>n;
    
//     int arr[n];
//     for(int i=0; i<n; i++) {
//         cin>>arr[n];
//     }

//     for(int i=0; i<n; i++) {
//         mx = max(mx, arr[i]);
//         cout<<mx<<endl;
//     }
//     return 0;
// }

/*-------------------- Searching In 2D arrays --------------------------*/
// #include<iostream>
// using namespace std;

// int main() {

//     int n,m; cin>>n>>m;
//     int arr[n][m];
//     for(int i=0; i<n; i++) {
//         for(int j=0; j<m; j++) {
//             cin>>arr[i][j];
//         }
//     }
//     int key; cin>>key;

//     int i = 0, j = m-1;
//     bool found = false;
//     while(i<n and j>=0) {
//         if(arr[i][j]==key) {
//             found = true;
//         }
//         if(arr[i][j]>key) {
//             j--;
//         }
//         else{
//             i++;
//         }
//     }
//     if(found) {
//         cout<<"Element found :"<<key;
//     }
//     else{
//         cout<<"Does not exist!";
//     }
// }

/*------------------ Diagonal Sum in Arrays -----------------*/
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;

// int diaSum(int arr[][m]) {
//     int sum = 0;
//     for(int i=0; i<n; i++) {
//         for(int j=0; j<m; j++) {
//             if(i == j) {
//                 sum = sum + arr[i][j];
//             }
//             else if(i+j = arr.length()-1) {
//                 sum = sum + arr[i][j];
//             }
//         }
//     }
//     return sum;
// }

// int main() {
//     int arr[4][4] = {{1,6,5,8},{6,8,2,3},{4,5,2,9},{4,1,6,8}};
//     cout<<diaSum(arr);
//     return 0;
// }

/*----------------------- Merge Sort --------------------------------------- */
// #include<iostream>
// #include<vector>
// using namespace std;

// void merge(int arr1[], int n , int arr2[], int m , int arr3[]) {

//     int i=0, j=0, k=0;
//     while(i<n && j<m) {
//         if(arr1[i] < arr2[j]) {
//             arr3[k] = arr1[i];
//             k++;
//             i++;
//         }
//         else {
//             arr3[k] = arr2[j];
//             k++;
//             j++;
//         }  
//     }
//     //copy first array k element ko
//     while (i<n) {
//         arr3[k] = arr1[i];
//         k++;
//         i++;
//     }
//     //copy kardo second array k remaining element ko
//     while(j<m) {
//         arr2[k] = arr2[j];
//         k++;
//         j++;
//     }
    
// }

// void printArr(int arr[], int n) {
//     for(int i=0; i<n; i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main() {

//     int arr1[3] = {1,2,3,}; 
//     int arr2[3] = {2,5,6}; 
//     int arr3[9] = {0};

//     merge(arr1, 3, arr2, 3, arr3);
//     printArr(arr3, 6);

//     return 0;
// }

/*------------------------ Valid Palindrome -------------------------*/ //          VERY IMPORTANT VERY VERY    
// #include<string>
// #include<iostream>
// #include<vector>
// using namespace std;
// class Solution {
// private:
//     bool valid(char ch) {
//         if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
//             return 1;
//         }
        
//         return 0;
//     }
    
//     char toLowerCase(char ch) {
//     if( (ch >='a' && ch <='z') || (ch >='0' && ch <='9') )
//         return ch;
//     else{
//         char temp = ch - 'A' + 'a';
//         return temp;
//     }
// }
//     bool checkPalindrome(string a) {
//     int s = 0;
//     int e = a.length()-1;

//     while(s<=e) {
//         if(a[s] != a[e])
//         {
//             return 0;       
//         }
//         else{
//             s++;
//             e--;
//         }
//     }
//     return 1;
// }
// public:
//     bool isPalindrome(string s) {
        
//         //faltu character hatado
//         string temp = "";
        
//         for(int j=0; j<s.length(); j++) {   
//             if(valid(s[j])) {
//                 temp.push_back(s[j]);
//             }
//         }
        
//         //lowercase me kardo
//         for(int j=0; j<temp.length(); j++) { 
//             temp[j] = toLowerCase(temp[j]);
//         }
        
//         //check palindrome
//         return checkPalindrome(temp);
        
//     }
// };

// #include<iostream>
// using namespace std;

// int answer(int a, int b) {
//     if(a == 0) {
//         return b;
//     }

//     if(b == 0) {
//         return a;
//     }

//     while(a != b) {
//         if(a > b) {
//             a = a-b;
//         }
//         else {
//             b = b-a;
//         }
//     }
//     return a;
// }

// int main() {
//     int n,m;
//     cout<<"enter n and m : "<<endl;
//     cin>>n>>m;

//     int ans = answer(n, m);

//     cout<<"Your anwer is :" << ans;
    
//     return 0;
// }

 