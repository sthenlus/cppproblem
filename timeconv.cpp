#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <cctype>
#include <fstream>


using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {

    char typeday = s[8];
    if (typeday == 'P') {
        s.erase(8, 10);
        int num = (s[0] - '0') * 10 + (s[1] - '0');
        if (num == 12) {
            
            return s;
        }
        num += 12;
        s.erase(0, 2);

        
        s = to_string(num) + s;
        return s;
    }
    else {
        s.erase(8, 10);
        int num = (s[0] - '0') * 10 + (s[1] - '0');
        if (num == 12) {

            s[0] = '0';
            s[1] = '0';
            return s;
            
        }
        
        return s;
    }




}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
