#include <iostream>

using namespace std;

class Distance
{
	int feet;
	float inches;
public:
	Distance():feet(0),inches(0){}
	void set(int ft,float in)
	{
		feet = ft;
		if (in >= 12)
		{
			feet += in / 12;
			int tmpin = (int)in;
			inches = (tmpin % 12)+ in- tmpin;
		}
		else
			inches = in;
	}


	Distance add(const Distance& d)
	{
		Distance x;
		int tmpf = feet + d.feet;
		float tmpi = inches + d.inches;
		x.set(tmpf, tmpi);
		return x;
	}
	void disp()
	{
		cout << "Feet of distance: " << feet
			<< "\nInches of distance:" << inches<<endl;
	}
};

int main()
{
	Distance a;
	a.set(5, 23.7);
	cout << "Info about a:\n";
	a.disp();
	Distance b;
	b.set(3, 14.8);
	cout << "Info about b:\n";
	b.disp();
	Distance c = a.add(b);
	cout << "Info about c = a.add(b):\n";
	c.disp();
}


