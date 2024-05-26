#include <iostream>
using namespace std;
int main(){
    int amt;
    cout<<"enter the amount="<<endl;
    cin>>amt;
    int rs100,rs10,rs1;
    switch(1){
        case 1 : rs100=amt/100;
                 amt=amt%100;
                 cout<<"the no of 100 note required is ="<<rs100<<endl;
                 
                 case 2 : rs10=amt/10;
                 amt=amt%10;
                 cout<<"the no of 10 note required is ="<<rs10<<endl;
                 case 3 : rs1=amt/1;
                 amt=amt%1;
                 cout<<"the no of 1 note required is ="<<rs1<<endl;
                 
    }
        
    
    
}
