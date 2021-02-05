=#include <iostream>
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
	cout << "сколько студентов в группе? ";
	cin >> number_of_students;
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
				fin.open("laba 7.txt");
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
			}
		case 4:
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
				cout << "информацию о каком студенте вы хотите удалить? ";
				cin >> q;
				for (q; q < number_of_students; q++)
				{
					stud[q - 1].mark_sr = stud[q].mark_sr;
					stud[q - 1].mark_math = stud[q].mark_math;
					stud[q - 1].mark_fiz = stud[q].mark_fiz;
					stud[q - 1].mark_inf = stud[q].mark_inf;
					stud[q - 1].gryppa = stud[q].gryppa;
					stud[q - 1].Fio = stud[q].Fio;
				}
				number_of_students--;
				ofstream fout;
				fout.open("laba 7.txt");
				for (i = 0; i < number_of_students; i++)
				{
					fout << stud[i].mark_sr << "\n" << stud[i].mark_math << "\n" << stud[i].mark_fiz << "\n" << stud[i].mark_inf << "\n" << stud[i].gryppa << "\n" << stud[i].Fio << "\n" << "\n";
				}
				fout.close();
				break;
			}
		case 5:
			{

			cout << "как сортировать студентов?" << endl << "1 - по имени (в алфовитном порядке)" << endl << "2 - по среднему баллу (от большего к меньшему" << endl << "3 - по среднему баллу (от меньшего к большему)" << endl;
			k = 0;
			cin >> k;
			switch (k)
			{
			case 1:
				{
				 
				break;
				}
			case 2:
			{
				k = 1;
				int* numb = new int[number_of_students];
				for (i = 0; i < number_of_students; i++)
				{
					numb[i] = i;
				}
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
				while (k==1)
				{
					while (k == 1)
					{
						k = 0;
						for (i = number_of_students - 2; i >= 0; i--)
						{
							if (stud[numb[i]].mark_sr < stud[numb[i] + 1].mark_sr)
							{
								k = 1;
								in = numb[i];
								numb[i] = numb[i + 1];
								numb[i + 1] = in;
							}
						}

					}
				}
				ofstream fout;
				fout.open("laba 7.txt");
				for (i = 0; i < number_of_students; i++)
				{
					fout << stud[numb[i]].mark_sr << "\n" << stud[numb[i]].mark_math << "\n" << stud[numb[i]].mark_fiz << "\n" << stud[numb[i]].mark_inf << "\n" << stud[numb[i]].gryppa << "\n" << stud[numb[i]].Fio << "\n" << "\n";
				}
				fout.close();
				break;
				}
			case 3:
				{
				int* numb = new int[number_of_students];
				for (i = 0; i < number_of_students; i++)
				{
					numb[i] = i;
				}
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
				k = 1;
				while (k == 1)
				{
					k = 0;
					for (i = number_of_students - 2; i >= 0; i--)
					{
						if (stud[numb[i]].mark_sr > stud[numb[i] + 1].mark_sr)
						{
							k = 1;
							in = numb[i+1];
							numb[i+1] = numb[i];
							numb[i] = in;
							cout << "i";
						}
					}
				}
				ofstream fout;
				fout.open("laba 7.txt");
				for (i = 0; i < number_of_students; i++)
				{
					fout << stud[numb[i]].mark_sr << "\n" << stud[numb[i]].mark_math << "\n" << stud[numb[i]].mark_fiz << "\n" << stud[numb[i]].mark_inf << "\n" << stud[numb[i]].gryppa << "\n" << stud[numb[i]].Fio << "\n" << "\n";
				}
				fout.close();
				break;
				}
			default:
				{

				break;
				}
			}
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