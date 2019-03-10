#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <set>
#include <list>
#include <queue>
using namespace std;
int main() {
 int a=1, b=3, c=2;
 
 while (a < b < c)
 {

  ++a;
  --b;
  --c;
  cout<< int(a < b < c) <<endl;
 }
 cout << a << " " << b << " " << c << "\n";
 return 0;
}