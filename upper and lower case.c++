#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char arr[] = "Engineering Discipline.";
    cout << "Original String:\n"<< arr<< endl;
    cout<<"String in UPPERCASE:\n";
    for (int x=0; x<strlen(arr); x++)
        putchar(toupper(arr[x]));
	{
    cout << "Original String:\n"<< arr<< endl;
    cout<<"String in LOWERCASE:\n";
    for (int x=0; x<strlen(arr); x++)
        putchar(tolower(arr[x]));
    return 0;
	}   
}
