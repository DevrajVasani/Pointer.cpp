#include<iostream>
using namespace std;

void update(int **p2) {
    //p2 = p2 + 1;
    //kuch change hoga  - NO

    //*p2 = *p2 + 1;
    //kuch change hoga - YES

    **p2 = **p2 + 1;
    //kuch change hoga - YES
}

main(){

    int i=5;
    int *p=&i;
    int **p2=&p;    // double pointer, pointing to a pointer of a interger.
    int ***p3=&p2;  // multilevel pointer, pointing to a another pointer...

    cout<<endl<<p<<endl;      
    cout<<*p2<<endl;    // same output as above line

    cout<<endl<<p2<<endl;
    cout<<*p3<<endl<<endl;    // same output as above line

    cout<<**p2<<endl;   // the value that p points to is now shown by using **p2
    cout<<***p3<<endl;    

    // testing update func.
    cout << endl << endl;
    cout<< "before " << i << endl;
    cout<< "before " << p << endl;
    cout<< "before " << p2 << endl;
    update(p2);
    cout<< "after " << i << endl;
    cout<< "after " << p << endl;
    cout<< "after " << p2 << endl;
    cout << endl << endl;
    
}