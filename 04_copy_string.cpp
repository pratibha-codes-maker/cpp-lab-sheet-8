#include <iostream>
#include <cstring>
using namespace std;

// Function to copy one string into another
void copyString(char destination[], char source[])
{
    strcpy(destination, source);
}

int main()
{
    char source[100], destination[100];

    cout << "Enter a string: ";
    cin.getline(source, 100);

    copyString(destination, source);

    cout << "Copied string: " << destination;

    return 0;
}
