#include <iostream>
#include <cstring>
using namespace std;
class CollegeMember
    {   public:
        string name1,name2;
        int age1,age2;
    };
class Faculty : public CollegeMember
    {   public:
        int salary;
        void set_info()
            {cout<<"Enter Name of Faculty: ";
            fflush(stdin);
            getline (cin,name1);
            cout<<"Enter Age of Faculty: ";
            fflush(stdin);
            cin>>age1;
            cout<<"Enter Salary of Faculty: ";
            cin>>salary;}
        void ShowInfo()
            {   cout<<"Facult Info: "<<endl;
                cout<<"Name: "<<name1<<endl;
                cout<<"Age: "<<age1<<endl;
                cout<<"Salary: "<<salary<<endl;
            }
    };
class Student : public CollegeMember
    {   public:
        int semester;
        void set_info()
            {cout<<"Enter Name of Student: ";
            fflush(stdin);
            getline (cin,name2);
            fflush(stdin);
            cout<<"Enter Age of Student: ";
            cin>>age2;
            cout<<"Enter Semester of Student: ";
            cin>>semester;}
        void ShowInfo()
            {   cout<<"Student Info: "<<endl;
                cout<<"Name: "<<name2<<endl;
                cout<<"Age: "<<age2<<endl;
                cout<<"Semester: Rs. "<<semester<<endl;
            }
    };
int main()
    {   Student s;
        Faculty f;
        s.set_info();
        f.set_info();
        s.ShowInfo();
        f.ShowInfo();
        return 0;
    }
