#include<iostream>
#include<string>
using namespace std;
class biodata
{
public:
 string name;
 string fathername;
 string education;
 int age;
 double salery=0000;
 biodata(string name,string fathername,string education,int age){
    this->name=name;
    this->fathername=fathername;
    this->education=education;
    this->age=age;
   cout<<"Done Saving ";
   };
 int getsalery(int p){
    if(p==1111){
      return salery;
    }
    else {string w="wrong password";
    cout<<w;
    }
    return 0;
 };
 int changesalery(int p,int sal){
 if(p==1111){
    salery=sal;
    cout<<"Done ";
 }
 else cout<<"Wronge password";
 return 0;
 }
};


int main(){ 
    biodata I1("Hassan","liaqt ali","12 pass",19);
    cout<<endl;
    cout<<I1.name<<" age: "<<I1.age<<endl;
    cout<<I1.getsalery(1111)<<endl;
    I1.changesalery(1111,20000);
    cout<<endl;
   //  cout<<I1.getsalery(1111);
   //  cout<<endl;
    biodata I2(I1);
    I2.getsalery(1111);
   cout<<endl;
   I2.salery=3000;
   cout<<I2.getsalery(1111);
   cout<<endl;
   cout<<I1.getsalery(1111);
   cout<<endl;
}