
//Recursion - when a function calls itself until a specified condition is met

      // #include<bits/stdc++.h>
      // using namespace std;
      
      // void print(){
      
      //     cout<<"hello";
      //     print();
      // }
      // int main(){
      // print();
      // }

// Stackoverflow - if you keep on calling a function inside a function and it doesn't completely execute and function calls are on waiting.
      
      // #include<bits/stdc++.h>
      // using namespace std;
      
      // void print(){
      //     int count=0;
      //     count++;
      //     cout<<count;
      //     print();
      // }
      // int main(){
      // print();
      // }

// Base Condition - a condition that puts the constraint over the recursive calling of a function and helps the recursive function to execute properly 
      
      // #include<bits/stdc++.h>
      // using namespace std;
      
      // void print(){
      //     static int count = 0;
      //     if(count==4){
      //         return;
      //     }
      //     else{
      //     count++;
      //     cout<<count;
      //     print();
      //     }
      // }
      // int main(){
      // print();

// Recursion tree - the form of representing the calling of functions in the recursive process
      // }


      
      // #define nl cout<<endl;
      
      // void print(int i,int n){
          
      //     if(i>n){
      //         return;
      //     }
      //     else{ 
      //         cout<<"jigs don";nl
      //         print(i+1,n);
      //     }
      
      // }
      
      // int main(){
      //     int n;
      //     cin>>n;
      // print(1,n);
      // }

      
      
      // #define nl cout<<endl;
      
      // void print(int i,int n){
          
      //     if(i>n){
      //         return;
      //     }
      //     else{ 
      //         cout<<i;nl
      //         print(i+1,n);
      //     }
      
      // }
      
      // int main(){
      //     int n;
      //     cin>>n;
      // print(1,n);
      // }


// sum of n numbers
//parameterized way -
      
      // #include<bits/stdc++.h>
      // using namespace std;
      
      // void summation(int i,int sum){
      //     if(i<1){
      //         cout<<sum;
      //         }
      //         else{
      //             summation(i-1,sum+i);
      //         }
              
      // }
      
      // int main(){
      //      int n;
      //      cin>>n;
      //      summation(n,0);
      
      // }


      // #include<bits/stdc++.h>
      // using namespace std;
            
      // int summation(int n){
      //     if(n==0)
      //     {
      //         return 0;
      //     }
      //     else{
      //         return n+summation(n-1);
      //     }
         
      // }
            
      //  int main(){
      //         int n;
      //         cin>>n;
      //         cout<<summation(n);
            
      //       }

      
      // #include<bits/stdc++.h>
      // using namespace std;
            
      // int Factorial(int n,int fact){
      //     if(n<1)
      //     {
      //         return fact;
      //     }
      //     else{
      //         return Factorial(n-1,fact*n);
      //     }
         
      // }
            
      //  int main(){
      //         int n;
      //         cin>>n;
      //         cout<<Factorial(n,1);
            
      //       }
