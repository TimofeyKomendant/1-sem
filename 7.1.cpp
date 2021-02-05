#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct Person
{
	string Fio;
	int  mark_math, mark_fiz, mark_inf, gryppa;
	double mark_sr;
};
int main()
{
	setlocale(LC_ALL, "rus");
	string st;
	int number_of_students, i = 0, q = 0, in = 0, mark0, k = 0, st_int;
	double st_double;
	ifstream fin;
	fin.open("laba 7.txt", fstream::app);
	while (getline(fin, st))
	{
		i++;
	}
	number_of_students = i / 7;
	cout << "количество студентов: " << number_of_students << endl;
	while (k != 1)
	{
		cout << "что хотите сделать?" << endl << "1 - перезаполнить список студентов" << endl << "2 - найти учеников по среднему баллу" << endl << "3 - просмотреть список студентов" << endl << "4 - добавить студента" << endl;
		cin >> k;
		switch (k)
		{
		case 1:
		{
			Person stud;
			ofstream fout;
			fout.open("laba 7.txt");
			cout << "сколько студентов в группе? ";
			cin >> number_of_students;
			for (i = 0; i < number_of_students; i++)
			{
				cout << "введите оценку по математике для студента №" << i + 1 << " ";
				cin >> stud.mark_math;
				cout << "введите оценку по физике для студента №" << i + 1 << " ";
				cin >> stud.mark_fiz;
				cout << "введите оценку по информатике для студента №" << i + 1 << " ";
				cin >> stud.mark_inf;
				cout << "введите номер группы для студента №" << i + 1 << " ";
				cin >> stud.gryppa;
				cout << "введите фамилию для студента №" << i + 1 << " ";
				cin >> stud.Fio;
				stud.mark_sr = (stud.mark_inf + stud.mark_fiz + stud.mark_math) / 3.;
				fout << stud.mark_sr << "\n" << stud.mark_math << "\n" << stud.mark_fiz << "\n" << stud.mark_inf << "\n" << stud.gryppa << "\n" << stud.Fio << "\n" << "\n";
			}
			fout.close();
			break;
		}
		case 2:
		{
			int gryppa0;
			Person stud;
			ifstream fin;
			fin.open("laba 7.txt", fstream::app);
			cout << "введите желаемый средний балл ";
			cin >> mark0;
			cout << "из какой группы искать студентов? ";
			cin >> gryppa0;
			cout << "студенты с удовлетворяющим средним баллом:" << endl;
			if (fin.is_open())
			{
				while (getline(fin, st))
				{
					switch (i)
					{
					case 0:
						st_double = atof(st.c_str());
						stud.mark_sr = st_double;
						break;
					case 1:
						st_int = atoi(st.c_str());
						stud.mark_math = st_int;
						break;
					case 2:
						st_int = atoi(st.c_str());
						stud.mark_fiz = st_int;
						break;
					case 3:
						st_int = atoi(st.c_str());
						stud.mark_inf = st_int;
						break;
					case 4:
						st_int = atoi(st.c_str());
						stud.gryppa = st_int;
						break;
					case 5:
						stud.Fio = st;
						break;
					case 6:
						if (stud.mark_sr >= mark0 && gryppa0 == stud.gryppa)
						{
							cout << "\n" << "средний балл " << stud.mark_sr << "\n" << "математика " << stud.mark_math << "\n" << "физика " << stud.mark_fiz << "\n" << "информатика " << stud.mark_inf << "\n" << "группа " << stud.gryppa << "\n" << "фамилия " << stud.Fio << "\n" << "\n";
						}
						break;
					}
					if (i == 6) i = 0;
					else i++;
				}
			}
			else cout << "ошибка открытия" << endl;
			fin.close();
			break;
		}
		case 3:
		{
			i = 0;
			q = 0;
			Person* stud = new Person[number_of_students];
			ifstream fin;
			fin.open("laba 7.txt");
			while (getline(fin, st))
			{
				switch (i)
				{
				case 0:
					st_double = atof(st.c_str());
					stud[q].mark_sr = st_double;
					break;
				case 1:
					st_int = atoi(st.c_str());
					stud[q].mark_math = st_int;
					break;
				case 2:
					st_int = atoi(st.c_str());
					stud[q].mark_fiz = st_int;
					break;
				case 3:
					st_int = atoi(st.c_str());
					stud[q].mark_inf = st_int;
					break;
				case 4:
					st_int = atoi(st.c_str());
					stud[q].gryppa = st_int;
					break;
				case 5:
					stud[q].Fio = st;
					break;
				case 6:
					break;
				}
				if (i == 6)
				{
					i = 0;
					q++;
				}
				else i++;
			}
			fin.close();
			cout << "список студентов:" << endl << endl;
			for (i = 0; i < number_of_students; i++)
			{
				cout << "номер студента " << i + 1 << "\n" << "средний балл " << stud[i].mark_sr << "\n" << "математика " << stud[i].mark_math << "\n" << "физика " << stud[i].mark_fiz << "\n" << "информатика " << stud[i].mark_inf << "\n" << "группа " << stud[i].gryppa << "\n" << "фамилия " << stud[i].Fio << "\n" << "\n";
			}
			break;
		}
		case 4:
		{
			Person stud;
			ofstream fout;
			fout.open("laba 7.txt", fstream::app);
				cout << "введите оценку по математике для студента";
				cin >> stud.mark_math;
				cout << "введите оценку по физике для студента";
				cin >> stud.mark_fiz;
				cout << "введите оценку по информатике для студента";
				cin >> stud.mark_inf;
				cout << "введите номер группы для студента";
				cin >> stud.gryppa;
				cout << "введите фамилию для студента";
				cin >> stud.Fio;
				stud.mark_sr = (stud.mark_inf + stud.mark_fiz + stud.mark_math) / 3.;
				fout << stud.mark_sr << "\n" << stud.mark_math << "\n" << stud.mark_fiz << "\n" << stud.mark_inf << "\n" << stud.gryppa << "\n" << stud.Fio << "\n" << "\n";
			fout.close();
			break;
		}
		default:
			break;
		}
		cout << "завершить работу?";
		k = 0;
		cin >> k;
	}
	return 0;
}