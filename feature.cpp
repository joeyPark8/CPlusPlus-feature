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

	int num = 5;              //5를 값으로 가지는 정수 변수 num 선언
	int *pnum = &num;         //num의 메모리 주소를 값으로 가지는 포인터 변수 pnum 선언
	int **ppnum = &pnum;      //pnum의 메모리 주소를 값으로 가지는 더블 포인터 변수 ppnum 선언

	cout << num << endl;      //num의 값을 출력                                       -> 5
	cout << &num << endl;     //num의 메모리 주소를 출력                               -> 0x00A3F768
	cout << *&num << endl;    //num의 메모리 주소로 num의 값을 출력                     -> 5
	cout << endl;

	cout << pnum << endl;     //pnum의 값을 출력                                       -> 0x00A3F768
	cout << &pnum << endl;    //pnum의 메모리 주소를 출력                               -> 0x00A3F75C
	cout << *pnum << endl;    //pnum의 값으로 num의 값을 출력                           -> 5
	cout << endl;

	cout << ppnum << endl;    //ppnum의 값을 출력                                      -> 0x00A3F75C
	cout << &ppnum << endl;   //ppnum의 메모리 주소를 출력                              -> 0x00A3F750
	cout << *ppnum << endl;   //ppnum의 값으로 pnum의 값을 출력                         -> 0x00A3F768
	cout << **ppnum << endl;  //ppnum의 값으로 얻은 pnum의 값으로 num의 값을 출력        -> 5
	cout << endl;

	*pnum = 10;               //pnum의 값으로 num의 값을 10으로 변경   
	cout << num << endl;      //num의 값을 출력                                        -> 10
	cout << endl;

	**ppnum = 20;             //ppnum의 값으로 얻은 pnum의 값으로 num의 값을 20으로 변경
	cout << num << endl;      //num의 값을 출력                                        -> 20
	cout << endl;

	cout << student.age << endl;   //student의 age 값을 출력                           -> 10
	cout << &student << endl;      //student의 메모리 주소를 출력                       -> 00A3F780
	cout << pstudent << endl;      //pstudent의 값을 출력                              -> 00A3F780
	cout << &pstudent << endl;     //pstudent의 메모리 값을 출력                        -> 00A3F774
	cout << pstudent->age << endl; //pstudent의 값으로 student의 age 값을 출력          -> 10
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