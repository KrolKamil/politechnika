#include <iostream>

using namespace std;

class Mother
{
public:
    int motherPublic=0;
protected:
    int motherProtected=1;
private:
    int motehrPrivate=2;
};

class Child : public Mother
{
public:
    int childPublic=0;
protected:
    int childProtected=1;
private:
    int childPrivate=2;
};

class ChildChild : protected Child
{
public:
    int childchildPublic=0;
protected:
    int childchildProtected=1;
private:
    int childchildPrivate=2;
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
