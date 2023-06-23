#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const char alphabetPool[]="abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main() {

	srand(time(NULL));

	int lengthOfString;
	char again;

	cout<<"~~ Welcome to \"The Random String Generator\" ~~"<<endl;

	do{
		cout<<"\nCharacters which will be in string are (alphabet):\tabcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"<<endl<<endl;

		cout<<"What will be the length of string?\t:";
		cin>>lengthOfString;

		cout<<"Your random string which is based on "<< lengthOfString <<" characters is:\t";

		for(int i=0; i<lengthOfString; i++){
			cout<<alphabetPool[rand() % (sizeof(alphabetPool)-1)];
		}

		cout<<endl<<endl;
		cout<<"Do you want to generate one more? ('y' for YES, any other keys for NO | then press the Enter)"<<endl;
		cin>>again;

		cout<<"-------------------------------------------------------------------------------------------------";

	}while(again=='Y' || again=='y');

	cout<<endl<<":) Thank you for preferring our Random String Generator.";

return 0;
}
