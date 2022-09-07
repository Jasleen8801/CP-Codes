#include <iostream>
using namespace std;

class fun{
    int x;
    static int count; // shared by all objects
  public:
    void noOfFun(){ count++; }
    static void display(){ cout<<count<<endl; } 
    // The member used in static function must also be static. 
};

int fun::count = 0;

int main()
{
    fun p, q, r;
    p.noOfFun();
    p.display();
    q.noOfFun();
    q.display();
    r.noOfFun();
    r.display();
    p.display();

    return 0;
}


