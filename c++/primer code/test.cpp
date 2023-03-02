#include<iostream>

using namespace std;


int main(){

    int p=1;

    int* i=&p;
    *i=2;

    cout<<p<<endl;
    

    return 0;
}

