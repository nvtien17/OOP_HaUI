#include <bits/stdc++.h>

using namespace std;
class SCHOOL
{
    char Name[20];
    char Date[20];
public:
    friend class FACULTY;
    friend class STUDENT;
};
class FACULTY
{
    char NameF[20];
    char DateF[20];
    SCHOOL x;
public:
    void input();
    void output();
    friend class STUDENT;
};
void FACULTY::input()
{
    cout<<"Ten Khoa : "; fflush(stdin); gets(NameF);
    cout<<"Ngay thanh lap Khoa :" ; fflush(stdin); gets(DateF);
    cout<<"Ten Truong :"; fflush(stdin); gets(x.Name);
    cout<<"Ngay thanh lap Truong : "; fflush(stdin); gets(x.Date);
}
void FACULTY::output()
{
    cout<<"Ten Khoa : "<<NameF<<endl;
    cout<<"Ngay thanh lap Khoa :"<<DateF<<endl;
    cout<<"Ten Truong :"<<x.Name<<endl;
    cout<<"Ngay thanh lap Truong : "<<x.Date<<endl;
}
class PERSON
{
protected:
    char NameP[30];
    char Birth[20];
    char Add[30];
public:
    void input();
    void output();
    PERSON();
};
void PERSON::input()
{
    cout<<"Ten : "; fflush(stdin); gets(NameP);
    cout<<"Ngay sinh : "; fflush(stdin); gets(Birth);
    cout<<"Dia chi : "; fflush(stdin); gets(Add);
}
void PERSON::output()
{
    cout<<"Ten : "<<NameP<<endl;
    cout<<"Ngay sinh : "<<Birth<<endl;
    cout<<"Dia chi : "<<Add<<endl;
}
PERSON::PERSON()
{
     strcpy(NameP, "");
    strcpy(Birth, "0/0/0");
    strcpy(Add, "");
}
class STUDENT : public PERSON
{
    FACULTY y;
    char Class[20];
    float Score;
public:
    void input();
    void output();
    STUDENT();
};
void STUDENT::input()
{
    PERSON::input();
    y.input();
    cout<<"Lop : "; fflush(stdin); gets(Class);
    cout<<"Diem : "; cin>>Score;
}
void STUDENT::output()
{
    PERSON::output();
    y.output();
    cout<<"Lop : "<<Class<<endl;
    cout<<"Diem : "<<Score<<endl;
}
STUDENT::STUDENT()
{
    strcpy(y.NameF, "");
    strcpy(y.DateF, "0/0/0");
    strcpy(y.x.Name, "");
    strcpy(y.x.Date, "0/0/0");
    strcpy(Class, "");
    Score = 0;

}
int main()
{
    STUDENT a;
    a.output();
    STUDENT b;
    b.input();
    b.output();
    return 0;
}
