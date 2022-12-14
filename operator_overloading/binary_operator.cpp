#include<bits/stdc++.h>
using namespace std;
class Distance
//English Distance class
{
 private:
    int feet;
    float inches;
 public:
    Distance() : feet(0), inches(0.0)                           //constructor (no args)
    { }
    Distance(int ft, float in) : feet(ft), inches(in)          //constructor (two args)
    { }
    void getdist()                                           //get length from user
    {
    cout <<"\nEnter feet: "; 
    cin >> feet;
    cout << "Enter inches: "; 
    cin >> inches;
    }
    void showdist() const                                  //display distance
    { cout << feet << "\'-" << inches << "\""; }
    Distance operator + ( Distance ) const;               //add 2 distances
};
Distance Distance::operator + (Distance d2) const         //return sum
{
    int f = feet + d2.feet;                              //add the feet
    float i = inches + d2.inches;                       //add the inches
    if(i >= 12.0)                                      //if total exceeds 12.0,
    {                                                 //then decrease inches
    i -= 12.0;                                       //by 12.0 and
    f++;                                            //increase feet by 1
    }                                              //return a temporary Distance
    return Distance(f,i);                         //initialized to sum
}
friend ostream &operator << (ostream &output, const Distance &D) 
{
    output<<D.dist1;
    return output;
}
int main(){
    Distance dist1, dist3, dist4;                         //define distances
    dist1.getdist();                                     //get dist1 from user
    Distance dist2(11, 6.25);                           //define, initialize dist2
    dist3 = dist1 + dist2;                             //single ‘+’ operator
    dist4 = dist1 + dist2 + dist3;                    //multiple ‘+’ operators
    cout << "dist1 = ";                              //display all lengths
    dist1.showdist();
    cout << endl;
    cout << "dist2 = ";
    dist2.showdist(); 
    cout << endl;
    cout << "dist3 = ";
    dist3.showdist(); 
    cout << endl;
    cout << "dist4 = ";
    dist4.showdist(); 
    cout << endl;
    cout<<dist1<<endl;
    return 0;
}