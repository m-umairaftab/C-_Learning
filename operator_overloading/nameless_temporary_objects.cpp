#include<bits/stdc++.h>
using namespace std;
class Counter
{
private:
    unsigned int count;                         //count
 public:
    Counter() : count(0)                       //constructor no args
    { }
    Counter(int c) : count(c)                  //constructor, one arg
    { }
    unsigned int get_count()
    { 
        return count;                         //return count
    }
    Counter operator ++ ()                   //increment count
    {
        ++count;                            // increment count, then return
        return Counter(count);             // an unnamed temporary object
    }                                     // initialized to this count
};
int main(){
    Counter c1, c2;                             //c1=0, c2=0
    cout << "\nc1=" << c1.get_count();
    cout << "\nc2=" << c2.get_count();          //display
    ++c1;                                       //c1=1
    c2 = ++c1;                                  //c1=2, c2=2
    cout << "\nc1=" << c1.get_count();          //display again
    cout << "\nc2=" << c2.get_count() << endl;
    return 0;
}