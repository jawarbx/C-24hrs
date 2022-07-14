#include <iostream>
using namespace std;

class MonsterDB
{
	private:
		~MonsterDB() { cout << "Private destructor invoked" << endl;};

	public:
		static void DestroyInstance(MonsterDB* pInstance)
		{
			cout << "Deleting instance of MonsterDB" << endl;
			delete pInstance;
		}

		void DoSomething() { cout << "Function DoSomething() invoked" << endl;}

};

int main()
{
	MonsterDB* myDB = new MonsterDB();
	myDB -> DoSomething();

	MonsterDB::DestroyInstance(myDB);

	return 0;
}
