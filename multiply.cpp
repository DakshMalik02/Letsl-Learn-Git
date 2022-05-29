#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    int multiply = a*b;;
    cout<<"product is"<<"::"<<multiply<<endl;
    // I AM DEVANSH.I AM APPENDING A CODE THAT TAKES 5 ARRAY ELEMENTS AND PRINTS THEIR SUM
         cout << "Enter the 5 array elements:" << endl;
    int arr[5];
    int sum=0;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<"The sum of array elements is: "<<sum<<endl;
    return 0;

}
