#include <iostream>
#include <string>
using namespace std;
int main()
{
	int age,height,weight;
	string gender;
	float BMI;
	cout << "Enter age : ";
	cin >> age;
	cout << "Enter gender : ";
	cin >> gender;
	cout << "Enter height : ";
	cin >> height;
	cout << "weight : ";
	cin >> weight;
	cout << "BMI = " << weight/(height/100*height/100)<<endl;
	if(BMI <= 18.5) cout <<"Underweight\n";
	else if(BMI <= 25) cout <<"Normal\n";
	else if(BMI <= 35) cout <<"Overweight\n";
	else if(BMI <= 40) cout <<"Obesity\n"; 
	system("pause");
	return(0);
}