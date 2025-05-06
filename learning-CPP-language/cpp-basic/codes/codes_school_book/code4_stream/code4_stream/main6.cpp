#include"stu.h"

Student::Student(const char* name, const char* id, int age) :
	age(age)
{
	strcpy_s(name_, name);
	strcpy_s(id_, id);

}

ostream& operator<<(ostream& out, const Student& p)
{

	out << setw(10) << p.name_ << setw(10) << p.id_ << setw(4) << p.age << endl;
	return out;
}

void CreatFile(string name)
{
	ofstream out(name);
	if (!out)
	{
		cerr << "Unable to open it" << endl;
		return;
	}
	Student stu[3] = {
		Student("Ttzs","0101",18),
		Student("Johnm","0202",19),
		Student("ASD","0130",20)
	};
	//for (int i = 0; i < 3; i++)
	//{
	//	out.write((char*)(i + stu), sizeof(Student));
	//}
	//out.write((char*)stu, sizeof(stu));
	out.write((char*)stu, sizeof(Student) * 3);

	cout << sizeof(stu) << endl;
	out.close();
}

void ReadFile(string name)
{
	ifstream in(name);
	if (!in)
	{
		cerr << "Unable to open it " << endl;
		return;
	}
	Student stu[3];
	int i = 0;
	while (!in.eof())
	{
		in.read((char*)(stu + i++), sizeof(Student));
	}
	for (int i = 0; i < 3; i++)
	{
		cout << stu[i] << endl;
	}
	in.close();
}

int main()
{
	CreatFile("Ttes.bat");
	ReadFile("Ttes.bat");
	return 0;
}