# Homework3
#include <iostream>

using namespace std;

int main() {
    char letter;

    cout << "Ender a letter: " << endl;
    cin >> letter;
    if (letter >= 'a' && letter <= 'z') {
        letter = letter - 32;
    } else {
        cout << "Cant uppercase: " << letter << endl;
        return 0;
    }

    cout << letter << endl;

    return 0;
}


#include <iostream>

using namespace std;

int main() {
    char text[10];

    int numbers = 0;
    int upperLetters = 0;
    int lowerLetters = 0;

    cout << "Enter your text: " << endl;
    cin >> text;

    for (int i=0; text[i] != '\0'; i++) {
        if (text[i] >= 'a' && text[i] <= 'z') {
            lowerLetters++;
        } else if (text[i] >= 'A' && text[i] <= 'Z') {
            upperLetters++;
        } else if (text[i] >= '0' && text[i] <= '9') {
            numbers++;
        }
    }

    cout << "numbers: " << numbers << " uppercase letters:" << " " << upperLetters << " lowercase letters: " << lowerLetters << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    char c;

    for(c = 'A'; c <= 'Z'; ++c) {
        cout << "Буквата: " << c << " има ASCII код: " <<  int(c) << endl;
    }


    return 0;
}
#include <iostream>

using namespace std;

const int NUM = 20;

void splitString(char c[])
{
    char tempchar1[NUM] = " ";
    char tempchar2[NUM] = " ";

    int maxNumberOfLetters = 0;

    for(int i = 0; i < NUM;i++)
    {
        tempchar1[i] = c[i];

        if(c[i + 1] == ' ')
        {
            for(int r = i + 2;r < NUM;r++)
            {
                tempchar2[r - (i + 2)] = c[r];
            }
            i = NUM;
        }
    }

    for (int i=0; tempchar1[i] != '\0'; i++) {
        maxNumberOfLetters = i + 1;
    }
    for (int i=0; tempchar1[i] != '\0'; i++) {
       if (i + 1 > maxNumberOfLetters) {
           maxNumberOfLetters = i + 1;
       }
    }

    cout << "The length of the longest word is: " << maxNumberOfLetters << endl;
}



int main() {

    char text[64];

    cout << "Enter two words: " << endl;
    cin.getline(text, 64);

    splitString(text);



    return 0;
}
#include <iostream>

using namespace std;

int main() {

    char text[256];
    int position = 0;

    cout << "Enter text: " << endl;
    cin >> text;

    for (int i=0; text[i] != '\0'; i++) {
        if (text[i] == 'T') {
            position = i + 1;
        }
    }

    if (position == 0) {
        cout << "There is no T in the text you've entered" << endl;
    } else {
        cout << "position: " << position;
    }

    return 0;
}
#include <iostream>
using namespace std;

void decToBinary(int num1);

int main()
{
    int num1;

    cout << "Enter a non-negative integer value: ";
    cin >> num1;

    if (num1 < 0)
    {
        cout << endl << "Invalid Entry." << endl << endl;
    }
    else
    {
        cout << endl << "Decimal " << num1 << " = ";
        decToBinary(num1);
        cout << endl << endl;
    }

    return 0;
}


void decToBinary( const int num1 )
{
    if( num1 == 0 )
    {
        return;
    }

    decToBinary (num1/2);
    cout << num1 % 2;
}
#include <iostream>
#include <limits>
using namespace std;

int calculatePower(int, int);
bool checkPowerNumber(int&);

int main()
{
    int base, powerRaised, result;

    cout << "Enter base number: ";
    cin >> base;

    cout << "Enter power number (positive integer): ";
    checkPowerNumber(powerRaised);

    result = calculatePower(base, powerRaised);
    cout << base << "^" << powerRaised << " = " << result;

    return 0;
}

bool checkPowerNumber(int& number) {
    while(!(cin >> number) || number < 0) {
        cout << "Bad value! Enter a new one!" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

int calculatePower(int base, int powerRaised)
{
    if (powerRaised != 1)
        return (base*calculatePower(base, powerRaised-1));
    else
        return 1;
}
#include <iostream>

using namespace std;

int count(const char* s){
    if(*s == '\0')
        return 0;
    return 1 + count(s + 1);
}
int main() {

    char text[256];

    cout << "Enter text: " << endl;
    cin.getline(text, 256);

    cout << "The lenght is: " << count(text) << endl;
}


#include <iostream>
#include <string>
using namespace std;

const int numberOfLetters = 26;
void count(char [], int []);

int main()
{
    int counts[numberOfLetters];
    char text[256];


    cout << "Enter a string: ";
    cin >> text;


    count(text, counts);

    for (int i = 0; i < numberOfLetters; i++)
    {
        if(counts[i]>0)
        {
            cout << static_cast<char>(i + 'a') << ": " << counts[i] << " times" << endl;
        }
    }

}

void count(char text[], int counts[])
{
    for (int i = 0; i < numberOfLetters; i++)
    {
        counts[i] = 0;
    }

    for (int i = 0; text[i] != '\0' ; i++)
    {
        {
            text[i] = tolower(text[i]);
            counts[text[i] - 'a'] ++;
        }
    }
}
