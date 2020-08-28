#include <bits/stdc++.h>
using namespace std;

int main()
{
	string retry;
	do
	{
    double t1, t2;
    
    t1 = clock();
    cout << "                    *START TIME*\n";
    
	cout << "Enter size of 16s number (if size > 15, no result):\n";
	int size_1;
	cin >> size_1;
	
	cout << "Enter 16s number:\n";
	char number_1[size_1 + 1];

	for(int i=0;i<size_1;i++)
    {
        cin >> number_1[i];
    }

	int n = size_1 - 1;
	int number_2[size_1];
	for(int i=0;i<size_1;i++)
	{
	    switch(number_1[n-i])
	    {
        case '0':
            number_2[i] = 0;
        break;
        case '1':
            number_2[i] = 1;
        break;
        case '2':
            number_2[i] = 2;
        break;
        case '3':
            number_2[i] = 3;
        break;
        case '4':
            number_2[i] = 4;
        break;
        case '5':
            number_2[i] = 5;
        break;
        case '6':
            number_2[i] = 6;
        break;
        case '7':
            number_2[i] = 7;
        break;
        case '8':
            number_2[i] = 8;
        break;
        case '9':
            number_2[i] = 9;
        break;
        case 'a':
            number_2[i] = 10;
        break;
        case 'b':
            number_2[i] = 11;
        break;
        case 'c':
            number_2[i] = 12;
        break;
        case 'd':
            number_2[i] = 13;
        break;
        case 'e':
            number_2[i] = 14;
        break;
        case 'f':
            number_2[i] = 15;
        break;
	    }

	}
	
	long long unsigned int number_out = 0;
	int k=0;

	for(int i=0;i<size_1;i++)
	{

        number_out = number_out + (number_2[i]*pow(16, k));
		k++;
	}

    t2 = clock();
	cout << "                    *END TIME*\n";
	
	cout << "And 10s number =:\n";
	cout << number_out << endl << endl;
    
    double t3 = (t2-t1)/1000;
    cout << "Time of operating:\n";
	cout << setprecision(30) << t3 << endl << endl;

    cout << "Do you want replay? If yes print 'Y', 'y', 'YES' or 'yes'. If no print anything other.\n";
    cout << "Your answer:\n";
    cin >> retry;
	}
	while(retry == "Y" | retry == "y" | retry == "YES" | retry == "yes");
	
    system("pause");
	return 16;
}
