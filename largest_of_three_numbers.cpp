#include<iosteam>
using namespace std;
class A
{
  int a,b,c;
  public:
  void input()
  {
    cout<<"enter three numbers";
        cin>>a>>b>>c;
  }
  friend void larg(A obj);
};

void larg(A obj)
{
  int l;
  l=(obj.a > obj.b &&obj.a > obj.c)? obj.a :((obj.b > obj.a && obj.b > obj.c)?obj.a : obj.b);
  cout<<"the longest number is"<<l<<endl;
}
int main()
{
  A obj1;
  obj1.input();
  larg(obj1);
  return 0;
}
