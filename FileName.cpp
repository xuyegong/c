#include<iostream>
using namespace std;
int main()
{
	int a = 1;
	if (*(char*)&a)printf("С��");
	else printf("���");
}