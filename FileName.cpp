#include<iostream>
using namespace std;
int main()
{
	int a = 1;
	if (*(char*)&a)printf("Ð¡¶Ë");
	else printf("´ó¶Ë");
}