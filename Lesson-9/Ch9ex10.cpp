#include <iostream>
#include <string>
using namespace std;

class President
{
	private:
		President() { cout << "Default constructor" << endl;};
		President(const President&);
		const President& operator=(const President&);

		string name;

	public:
		static President& GetInstance()
		{
			static President onlyInstance;
			return onlyInstance;
		}

		string GetName()
		{return name;}

		void SetName(string InputName)
		{name = InputName;}
};

int main()
{
	President& onlyPresident = President::GetInstance();
	onlyPresident.SetName("Abraham Lincoln");

	cout << "The president is: " << onlyPresident.GetName() << endl;

	return 0;
}
