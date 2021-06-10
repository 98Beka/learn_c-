#include <iostream>
using namespace std;

class Human
{
private:
    string name = "";
public:
    string GetName()
    {
        return this->name;
    }
    void SetName(string str)
    {
        this->name = str;
    }
};

class Student : public Human
{
    public:
        string group;
        void Learn()
        {
            cout << "i'm learning" << endl;
        }
};

class ExtramuralStudent : public Student
{
    public:
        void Learn()
        {
            cout << "i may be at uneversity rearly than usual student" << endl;
        }
};

class Professor : public Human
{
    public:
        string subject;
};

int main()
{

    Student st;

    st.SetName("r");
    st.group = "a";
    st.Learn();
    cout << st.GetName() << endl;
    cout << endl;

    ExtramuralStudent exSt;
    exSt.SetName("d");
    exSt.Learn();
    cout << exSt.GetName() << endl;
    cout << endl;

    Professor pf;

    pf.SetName("P");
    pf.subject = "physics";
    cout << pf.GetName() << endl;
    cout << endl;

}
