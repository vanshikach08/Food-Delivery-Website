#include <iostream>
using namespace std;
int find(int n){

   if(n==0)return 1;
   
   int answer=0;


   if(n%2==0)
      answer+= find(n-2);


   else
      answer+= find(n-1)+n;


   return answer;
}

int main(){

    int n=4;
    cout<<find(n)<<endl;
}