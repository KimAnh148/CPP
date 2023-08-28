#include <iostream>
using namespace std;
int main() 
{
  int t;
  cin >> t;
  while (t--) 
  {
    string code;
    cin >> code;
    int index = code.find("084");
    if (index != -1) 
	{
      code.erase(index, 3);
    }
    cout << code << endl;
  }
}
