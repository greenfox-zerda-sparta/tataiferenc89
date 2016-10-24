#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int num;
	cout << "Please add a number." << endl;
	cin >> num;
	int div1000=num/1000, rem1000=num%1000,
		div900=rem1000/900, rem900=rem1000%900,
		div500=rem900/500, rem500=rem900%500,
		div400=rem500/400, rem400=rem500%400,
		div100=rem400/100, rem100=rem400%100,
		div90=rem100/90, rem90=rem100%90,
		div50=rem90/50, rem50=rem90%50,
		div40=rem50/40, rem40=rem50%40,
		div10=rem40/10, rem10=rem40%10,
		div9=rem10/9, rem9=rem10%9,
		div5=rem9/5, rem5=rem9%5,
		div4=rem5/4, rem4=rem5%4,
		div1=rem4/1;

	cout << std::string(div1000, 'M');
			if(div900!=0){
				cout << "CM";
				}
	cout <<	std::string(div500, 'D');
			if(div400!=0){
				cout << "CD";
			}
	cout <<
			std::string(div100, 'C');
			if(div90!=0){
				cout << "XC";
			}
	cout <<
			std::string(div50, 'L');
			if(div40!=0){
				cout << "XL";
			}
	cout <<
			std::string(div10, 'X');
			if(div9!=0){
				cout << "IX";
				}
	cout <<
			std::string(div5, 'V');
			if(div4!=0){
				cout << "IV";
			}
	cout <<
			std::string(div1, 'I');
	return 0;
}
