#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class sample
{
    public:
    int e,b;
    int calc()
    {
    return pow(b, e);  
    }
};
int main()
{
  sample s;
  cin>>s.b;
  cin>>s.e;
  cout<<s.calc();
  return 0;
}
