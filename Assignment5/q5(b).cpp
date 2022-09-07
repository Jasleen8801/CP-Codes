#include <iostream>

using namespace std;

class countObj{
    static int count;
  public:
    countObj() { count++; }
    void noOfObj() { cout<<count<<endl; }
};

int countObj::count = 0;

int main()
{
    countObj p;
    p.noOfObj();
    countObj q;
    q.noOfObj();

    return 0;
}

