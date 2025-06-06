#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Student
{
private:
    string num;
    string name;
    string sex;
    int score;

public:
    Student(const char *nu = "", const char *na = "", const char *se = "", int s = 0);
    friend ostream &operator<<(ostream &out, const Student &s);
};

Student::Student(const char *nu, const char *na, const char *se, int s) : num(nu), name(na), sex(se), score(s)
{
}
ostream &operator<<(ostream &out, const Student &s)
{
    out << s.num << " " << s.name << " " << s.sex << "" << " " << s.score;
    return out;
}

void CreateBiFile(const char *filename)
{
    ofstream out(filename);
    Student stu[3] = {Student("tt1", "zs1", "man", 60), Student("tt2", "zs2", "man", 70), Student("tt3", "zs3", "woman", 100)}; // 对象数组的初始化
    out.write((char *)stu, sizeof(stu));                                                                                        // 两个实在参数自己填写
    out.close();
}

void ReadBiFile(const char *filename)
{
    Student stu[3];
    int i = 0;
    ifstream in(filename);
    while (!in.eof()) // 读出记录并显示
    {
        in.read((char *)&stu[i], sizeof(stu[0]));
        cout << stu[i++] << endl;
    }
    in.close();
}
int main()
{
    CreateBiFile("stu.bat");
    ReadBiFile("stu.bat");
    return 0;
}
