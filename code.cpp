#include <iostream>
#include <conio.h>
#define REE Peripherals::Instance()->

class Peripherals
{
protected:
	static Peripherals* _self;
	Peripherals() {}
	virtual ~Peripherals() {}

public:
	static Peripherals* Instance()
	{
		if (!_self)
		{
			_self = new Peripherals();
		}
		return _self;
	}
	int asd = 100;
	void interface() {

		printf("sdasdasd");


	}

	void show() {



	}

	void add() {



	}

	static bool DeleteInstance()
	{
		if (_self)
		{
			delete _self;
			_self = 0;
			return true;
		}
		return false;
	}
};

Peripherals* Peripherals::_self = 0;

int main()
{

	Peripherals::Instance()->interface();
	REE asd+=100;
	printf("%d",REE asd);

} // test for github
// test for g/h 2
// test 4
