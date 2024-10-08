#include <iostream>  // For input/output streams (like System.out in Java)
#include <vector>    // For dynamic arrays similar to ArrayList
#include <map>       // For key-value pairs (like HashMap)
#include <set>       // For ordered sets (like TreeSet)
#include <unordered_map>  // For hash-based key-value pairs (like HashMap)
#include <unordered_set>  // For hash-based sets (like HashSet)
#include <algorithm> // For algorithms like sort, search, etc.
#include <iterator>  // For iterators (like Java iterators)
#include <string>    // For string manipulation
#include <queue>     // For queues and priority queues
#include <stack>     // For stack data structure
#include <list>      // For doubly linked list (like LinkedList)
#include <cmath>     // For mathematical functions
#include <utility>   // For pairs (like Map.Entry in Java)


using namespace std;

int main()
{ 
 
    string s = "jai mata di";
    int lengthofs = s.length();

    cout<<"size of "<<s<<" is "<<lengthofs<<endl;

    string s2 = "jai ma kali ";

    //string combine = strcat(s,s2); it is used in C
    string combine =  s + s2;
    cout <<s2.size()<<combine<<combine.size();

    s2.append("mata rani");
    cout<<s2<<"\n now printing conctinate string "<<combine<<endl;

    cout<<s2.front();// it will give  first latter  of string;


    vector <string> s3 = {" \n Radha ","ballbh ","shree ", " Hariwansh" };

    for(auto i:s3)
    {
        cout<<i << endl;
    }
    string s4 =" Hariwansh" ;

    for(auto i = s4.begin(); i != s4.end() ; i++)
    {
        cout<<*i<<endl;
    }

    string s5 =" Hariwansh" ;

    for(auto i = s5.end(); i != s5.begin() ; i--)
    {
        cout<<*i<<"  ";
    }
   
    return 0;
}