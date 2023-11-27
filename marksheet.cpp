#include <iostream>
using namespace std;

class A
{
public:
    string name[5];
    int theory[5][5];
    int midsem[5][5];
    int practical[5][5];
    int total[5][5];
    int percent[5][5];
    int attendance[5][5];
    string subjects[5] = {"BT-201", "BT-202", "BT-203", "BT-204", "BT-205"};

public:
    void marks()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "enter the name of the child:";
            cin >> name[i];
            for (int j = 0; j < 5; j++)
            {
                cout << "enter the theory marks for " << subjects[j] << ":";
                cin >> theory[i][j];
                cout << "enter the midsem marks for " << subjects[j] << ":";
                cin >> midsem[i][j];
                cout << "enter the practical marks for " << subjects[j] << ":";
                cin >> practical[i][j];
            }
            cout << "----------------------------" << endl;
        }
    }
};

class B : public A
{
public:
    void calc()
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                total[i][j] = theory[i][j] + midsem[i][j] + practical[i][j];
            }
        }
    }
    void perc()
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                percent[i][j] = (total[i][j] / 750) * 100;
            }
        }
    }
};

class C : public B
{
public:
    void atd()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "enter the attendance of the child:" << name[i];
            cout << endl;
            for (int j = 0; j < 5; j++)
            {
                cout << "enter the attendance of subject " << subjects[j] << ":";
                cin >> attendance[i][j];
                cout << endl;
            }
            cout << "----------------------------" << endl;
        }
    }
};

class D : public C
{
public:
    string topic[7] = {"SUBJECTS", "THEORY", "MIDSEM", "PRACTICAL", "TOTAL", "PERCENTAGE", "ATTENDANCE"};
    void print()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "*****RESULTS*****" << endl;
            cout << "STIDENT NAME : " << name[i];
            cout << endl;
            for (int l = 0; l < 7; l++)
            {
                cout << topic[l] << " ";
            }
            cout << endl;
            for (int j = 0; j < 5; j++)
            {
                cout << subjects[j] << " ";
                cout << theory[i][j] << " ";
                cout << midsem[i][j] << " ";
                cout << practical[i][j] << " ";
                cout << total[i][j] << " ";
                cout << percent[i][j] << " ";
                cout << attendance[i][j] << " ";
                cout << endl;
            }
            cout << "------------------------------------------" << endl;
        }
    }
};

int main()
{
    D obj;
    obj.marks();
    obj.calc();
    obj.perc();
    obj.atd();
    obj.print();
}