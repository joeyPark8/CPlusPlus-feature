#include <iostream>

using namespace std;

typedef struct Student {
	char name[30];
	int age;
	char btype[2];
	char address[40];	
} Student;

int num=6;
int *pnum = &num; //*포인터 변수 이름 = &넣고 싶은  

int main() {
	Student s1, s2, s3;
	
	Student *ps = &s1;
	
	s1.age = 18;
	s2.age = 19;
	s3.age = 20;
	
	printf("%d %d %d \n", s1.age, s2.age, s3.age);
	
	printf("%d \n",num); //print num
	printf("%p \n",&num); //print num's memory address
	printf("%d \n",&pnum); //print pnum's memory
	printf("%p \n",pnum); //print pnum that have num's address
	printf("%d \n",*pnum); //print value that pnum pointing
	
	printf("%d \n",ps->age); //print ps's address's age's address's value
	
	return 0;
}
