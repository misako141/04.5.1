#include <iostream>
#include <cstdlib>
#include <ctime>
#include <time.h> 

using namespace std;

int random(int b){
int rn = (rand() % b);
return rn;	
}
int main()
{
	setlocale(0,"");
srand((time(NULL)));
char *ar[33] = {"�", "�", "�", "�", "�", "�", "�", "�", "�", "�", "�", "�", "�", "�", "�", "�", "�", "�", "�",
        "�", "�", "�", "�", "�", "�", "�", "�", "�", "�", "�", "�", "�", "�"};

	string a = "";
	
	int ars = 33;

	for(int i=0;i<6;i++){
		
		int rand = random(ars);
		a += ar[rand];
	}
	cout << a << endl;
	
return 0;
}
