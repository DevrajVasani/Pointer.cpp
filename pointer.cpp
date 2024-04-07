// do nothing play with pointer.........................

#include<iostream>
using namespace std;
main(){

    int arr[10]={0,1,2,3,4};

    cout<<"Adress of First Memory Block: "<<arr<<endl;      // only 'arrr' gives us location of first memory block;
    cout<<"Adress of First Memory Block: "<<&arr[0]<<endl;  // prof.
    cout<<"Adress of First Memory Block: "<<&arr<<endl;     // prof.

    cout<<*arr<<endl;                   // Accessing the value at first memory

    cout<<*arr+1<<endl;     // increasing by 1 of value at address which contain by 'arr'
    cout<<*(arr+1)<<endl;  

    //  arr[i]=*(arr+i);
    //        or
    //  i[arr]=*(i+arr)  // 
    
    int i=3;
    cout<<i[arr]<<endl;     // outpur=3
    cout<<*(i+arr)<<endl;   // output=3

    cout<<sizeof(arr)<<endl;  //  size of array = 4 * SizeOfInteger
    cout<<sizeof(*arr)<<endl; //  Size Of Integer
    cout<<sizeof(&arr)<<endl; //  ouput = 4  why ?

    int *p=&arr[0];
    cout<<sizeof(arr[0])<<endl;
    cout<<sizeof(p)<<endl;   // output = 

    cout<<&arr[0]<<endl;   
    cout<<p<<endl;
    cout<<&p<<endl; // address of pointer 'p';



// ERROR
    // arr=arr+1; // error because symbol table can't be change;
                  // adress of 'arr' is not re-assignable.
                  
// NO ERROR
    int *ptr=&arr[0];
    cout<<ptr<<endl;
    ptr=ptr+1;
    cout<<ptr<<endl;


// Pointer for Charecter arrays......

    char str[6]="abcde"; // last char is null char in string
    cout<<str<<endl;     // it can't print address of first char like string..
                         // because, cout function behaves diffrent in char array..
    char *c=&str[0];
    cout<<c<<endl;

    char *cc=&str[2];    
    cout<<cc<<endl;      // it's start printing cc from index 2 & print char till null;

    // what if it's not find null...
    char temp='z';
    char *ccc=&temp;
    cout<<ccc<<endl;    //  it's start printing from Z & print till all other garbge values till not find null;

    char *d="abcde";    // here address of first char (a)  is copy into the pointer d; 
                        // RISKy practice, don'nt do that 
                        // 

}