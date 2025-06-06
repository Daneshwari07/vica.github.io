#include <iostream>
#include <string>
using namespace std;

/* 
	Perform Run–length encoding (RLE) data compression algorithm on string `str`
*/
string encodes(string s)
{
    // Stores output string
    string encoding = "";
    int counting=0;
    for (int n = 0; s[n]; n++)
    {
        // Count occurrences of character at index `i'
        counting = 1;
        while (s[n] == s[n + 1]) {
            counting++, n++;
        }
        
        // Add(append) the current character and its count to the outcome
        encoding += to_string(counting) + s[n];
    }
    return encoding;
} 

int main()
{
    string s ;
    cout<<"Enter the String:"<<endl;
    getline(cin,s);
    cout << encodes(s);
    return 0;
}
