#include<iostream>
using namespace std;
void reverseArray(int* arr,int size){
    int *start =arr,*end =arr+size-1;
    while(start<end){
        swap(*start,*end);
        start++;
        end--;
    }
}
void copyString(char *src,char *dest){
    while(*src){
        *dest=*src;
        src++;
        dest++;
    }
    *dest='\0';
}
void swap(int *a,int *b){
    *a=*a + *b;
    *b= *a - *b;
    *a=*a - *b;

}

int main(){
    // 1. What is a pointer in C++? Explain with an example.

    // int a =10;
    // int *ptr= &a;
    // cout<<"Value of a : "<<a<<endl;
    // cout<<"Address of a :"<<&a<<endl;
    // cout<<"Pointer ptr stores "<<ptr <<endl;
    // cout<<"Value of pointer ptr "<<*ptr <<endl;

    // 2. What is a NULL pointer? Give an example.
    // int *ptr = NULL;
    // if(ptr == NULL){
    //     cout<<"Pointer is NULL"<<endl;
    // }

    // 3. What is the difference between ptr++ and (*ptr)++ in pointers?

    // int arr[]={10,20,30};
    // int *ptr=arr;
    // cout<<"Before ptr ++ :"<<*ptr<<endl;
    // ptr++;
    // cout<<"After ptr ++ :"<<*ptr<<endl;
    // (*ptr)++;
    // cout<<"After (*ptr) :"<<*ptr<<endl;

    // 4. What is a pointer to a pointer? Give an example.

    // int a= 5;
    // int *ptr = &a;
    // int **ptr1=&ptr;

    // cout<<a<<endl;
    // cout<<&a<<endl;
    // cout<<ptr<<endl;
    // cout<<&ptr<<endl;
    // cout<<*ptr<<endl;
    // cout<<&*ptr<<endl;
    // cout<<**ptr1<<endl;

    // Write a program to swap two numbers using pointers.

    // int a= 10,b=20;
    // cout<<"Before swap "<<a<<" "<<b<<endl;

    // 1. Reverse an array using pointers.
    // int arr[]={1,2,3,4,5};
    // int size = sizeof(arr)/sizeof(arr[0]);
    // reverseArray(arr, size);
    // cout<<"After reverse "<<endl;
    // for(int i=0; i<size; i++){
    //     cout<<arr[i]<<" ";
    // }

    // int n;
    // cout<<"Enter the number of element :";
    // cin >>n;
    // int *arr=new int[n];
    // cout<<"Eneter elements :";
    // for(int i=0;i<n;i++){
    //     cin >> arr[i];
    // }
    // int sum =0;
    // for(int i=0;i<n;i++)
    // {
    //     sum +=*(arr+i);
    // }
    // cout<<"Sum of element :"<<sum <<endl;
    // delete[] arr;
    // return 0;


    // char str[]="madam";
    // if(isPalindrome(str)) cout<<"Palindrome"<<endl;
    // else{
    //     cout<<"Not Palindrome"<<endl;
    // }

    // char sourse[]="Hello , world";
    // char destibnation[50];
    // copyString(sourse, destibnation);
    // cout<<"Copied string :"<<destibnation<<endl;


    // int x= 10,y=20;
    // cout<<"Before swap "<<x<<" "<<y<<endl;

    // swap(&x,&y);

    // cout<<"After swap "<<x<<" "<<y<<endl;
    // return 0;



    return 0;


}
