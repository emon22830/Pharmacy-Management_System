#include<iostream>
#include<vector>
using namespace std;


struct Pharmacy{
    char id;
    string name;
    int quantity;
    int price;
};
Pharmacy phar;
vector<Pharmacy> medics;











int main(){

    while (true)
    {
        int value;
       cout<<" 1. for add medicines" <<endl;
       cout<<" 2. for search medicines" <<endl;
       cout<<" 3. for delete medicines" <<endl;
       cout<<" 4. for show all medicines" <<endl;
       cout<<" 5. for save medicines to file" <<endl;
       cout<<" 6. for exit from program" <<endl;

       cout<<" Type Here: "; cin>>value;

       
       

    }//while
    

}//main