// stringstream is part of the C++ Standard Library and is used to treat strings like input/output streams (just like cin and cout). It’s very useful for parsing, formatting, and converting data.

#include <sstream>

// Types of string streams
// stringstream → read + write
// istringstream → input only (like cin)
// ostringstream → output only (like cout)


// 1. Convert string → numbers
#include <iostream>
#include <sstream>
using namespace std;
int main() {
    string s = "123 45.6";
    stringstream ss(s);
    int x;
    float y;
    ss >> x >> y;
    cout << x << " " << y;  // Output: 123 45.6
}


// 2. Convert numbers → string
#include <iostream>
#include <sstream>
using namespace std;
int main() {
    int x = 100;
    stringstream ss;
    ss << x;
    string result = ss.str();
    cout << result;  // Output: "100"
}



// 3. Splitting a string (common use)
#include <iostream>
#include <sstream>
using namespace std;
int main() {
    string s = "apple banana mango";
    stringstream ss(s);
    string word;
    while (ss >> word) {
        cout << word << endl;
    }
}


// 4. Reusing a stringstream
stringstream ss;
ss << 10;
ss.clear();        // clear error flags
ss.str("");        // clear content

