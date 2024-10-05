#include<iostream>
#include<string>
using namespace std;
int main()
{ 
  //signature
  unsigned int chai = - 100;  // it will give you garbage value.
  cout<<chai;
 
   long long largvalue = 32432465;
   cout<<endl<<endl<<largvalue;

float mytea = 857.80;

  string mys = "this is mhy tea \n \t";
  cout<<endl<<mys<<endl;
  string ms = "this is scape \"sequence\" ok ";
  cout<<ms;

  
// now tadcking input form user
  
   int clas;
   string name;
   cout<<"\n enter your name ";
   getline(cin,name);
   cout<<"now enter your class";
   cin>>clas;
   cout <<"\n your nane is "<<name<<" and you are studing in class "<<clas;
  
  string ck;
  getline(cin,ck);
  cout<<endl<<ck;

//relational operators
 
 int teaCup ;
 cout<<"enter how much cup of tea you have bye";
 cin>>teaCup;
 if(teaCup>=10 && teaCup<20)
 {
    cout<<"\n You get Silver badge \n";

 }
 else if(teaCup>=0)
      cout<<"you will get Gold badge";

 else 
     cout<<"you have not bye enouge tea";



// program to check the user is aligibe for subscription discount or not;

  int teaCount;
  string Username;
  bool TocheckStudent;
  cout<<"enter your Name ";
  cin>>Username;
   cout<<"Are you student is yes then enter 1 if not then enter 0 ";
  cin>>TocheckStudent;
   cout<<"Now enter how many tea he has purchesed form my tea stal ";
  cin>>teaCount;

  if(teaCount>=15 && TocheckStudent == 1)
       cout<<"you are aligible for subcription discount";

  else 
     cout<<"you are not aligible for discount";


  





    return 0;
}