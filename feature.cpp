#include <iostream>
#include <vector>
#include <map>

using namespace std;

typedef struct Student {
	string name;
	int age;
	string btye;
	string address;
} Student;

int main() {
	Student student;

	student.age = 10;

	Student* pstudent = &student;

	int num = 5;              //5�� ������ ������ ���� ���� num ����
	int *pnum = &num;         //num�� �޸� �ּҸ� ������ ������ ������ ���� pnum ����
	int **ppnum = &pnum;      //pnum�� �޸� �ּҸ� ������ ������ ���� ������ ���� ppnum ����

	cout << num << endl;      //num�� ���� ���                                       -> 5
	cout << &num << endl;     //num�� �޸� �ּҸ� ���                               -> 0x00A3F768
	cout << *&num << endl;    //num�� �޸� �ּҷ� num�� ���� ���                     -> 5
	cout << endl;

	cout << pnum << endl;     //pnum�� ���� ���                                       -> 0x00A3F768
	cout << &pnum << endl;    //pnum�� �޸� �ּҸ� ���                               -> 0x00A3F75C
	cout << *pnum << endl;    //pnum�� ������ num�� ���� ���                           -> 5
	cout << endl;

	cout << ppnum << endl;    //ppnum�� ���� ���                                      -> 0x00A3F75C
	cout << &ppnum << endl;   //ppnum�� �޸� �ּҸ� ���                              -> 0x00A3F750
	cout << *ppnum << endl;   //ppnum�� ������ pnum�� ���� ���                         -> 0x00A3F768
	cout << **ppnum << endl;  //ppnum�� ������ ���� pnum�� ������ num�� ���� ���        -> 5
	cout << endl;

	*pnum = 10;               //pnum�� ������ num�� ���� 10���� ����   
	cout << num << endl;      //num�� ���� ���                                        -> 10
	cout << endl;

	**ppnum = 20;             //ppnum�� ������ ���� pnum�� ������ num�� ���� 20���� ����
	cout << num << endl;      //num�� ���� ���                                        -> 20
	cout << endl;

	cout << student.age << endl;   //student�� age ���� ���                           -> 10
	cout << &student << endl;      //student�� �޸� �ּҸ� ���                       -> 00A3F780
	cout << pstudent << endl;      //pstudent�� ���� ���                              -> 00A3F780
	cout << &pstudent << endl;     //pstudent�� �޸� ���� ���                        -> 00A3F774
	cout << pstudent->age << endl; //pstudent�� ������ student�� age ���� ���          -> 10
	cout << endl;

	for (int i = 0; i < 30; i++) {
		cout << '-';
		if (i == 29) cout << endl;
	}
	
	vector<char> myVector; //vector<value type> name;
	map<int, string> myMap; //map<key type, value type> name;

	myVector.push_back('a'); //vector.push_back(value);
	myVector.push_back('b');
	myVector.push_back('c');

	myMap.insert(pair<int, string>(1, "seoyul")); //map.insert(pair<key type, value type>(key, value));
	myMap.insert(pair<int, string>(2, "youngbin"));
	myMap.insert(pair<int, string>(3, "semin"));

	myMap[4] = "sunghyun"; //map[key] = value;
	myMap[5] = "hyunjun";
	myMap[6] = "haegwang";
	
	cout << myVector[0] << endl; //vector[index] -> value

	cout << myMap[1] << endl; //map[key] -> value

	if (find(myVector.begin(), myVector.end(), 'e') != myVector.end()) {
		//if there is member that you want
	}
	else {
		//if there isn't any member that you want
	}
	

	return 0;
}