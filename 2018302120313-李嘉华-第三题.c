#include<stdio.h>
#define N 20
struct alist {
	int number;
	int age;
	char name[N];
	int mark;
};
typedef struct alist list;
void rankbynanme(list student[5]) {
	int n, m;
	list a;
	for (n = 4; n > 0; n--) {
		for (m = 0; m < n; m++) {
			if (student[m + 1].name[0] < student[m].name[0]) {
				a = student[m];
				student[m] = student[m + 1];
				student[m + 1] = a;
			}
		}
	}
}
void rankbynumber(list student[5]) {
	int n, m;
	list a;
	for (n = 4; n > 0; n--) {
		for (m = 0; m < n; m++) {
			if (student[m + 1].number < student[m].number) {
				a = student[m];
				student[m] = student[m + 1];
				student[m + 1] = a;
			}
		}
	}
}
void rankbyage(list student[5]) {
	int n, m;
	list a;
	for (n = 4; n > 0; n--) {
		for (m = 0; m < n; m++) {
			if (student[m + 1].age < student[m].age) {
				a = student[m];
				student[m] = student[m + 1];
				student[m + 1] = a;
			}
		}
	}
}
void rankbymark(list student[5]) {
	int n, m;
	list a;
	for (n = 4; n > 0; n--) {
		for (m = 0; m < n; m++) {
			if (student[m + 1].mark < student[m].mark) {
				a = student[m];
				student[m] = student[m + 1];
				student[m + 1] = a;
			}
		}
	}
}
void printfstudent(list student[5]) {
	int n;
	for (n = 0; n < 5; n++) {
		printf("%10s", student[n].name);
	}printf("\n");
	for (n = 0; n < 5; n++) {
		printf("%10d", student[n].number);
	}printf("\n");
	for (n = 0; n < 5; n++) {
		printf("%10d", student[n].age);
	}printf("\n");
	for (n = 0; n < 5; n++) {
		printf("%10d", student[n].mark);
	}printf("\n");
}
int main() {
	list student[5];
	int n, m, j;
	for (n = 0, j = 1; n < 5, j <= 5; n++, j++) {
		printf("输入第%d个学生的信息(姓名，学号，年龄，成绩)：\n", j);
		scanf("%s%d%d%d", &student[n].name, &student[n].number, &student[n].age, &student[n].mark);
	}
	printf("你想让这个学生表按什么方式排：\n输入‘1’以姓名排\n输入‘2’以学号排\n输入‘3’以年龄排\n输入‘4’以成绩排\n");
	printf("输入的数字：\n");
	scanf("%d", &m);
	if (m == 1) {
		rankbynanme(student);
		printf("姓名方式：\n");
		printfstudent(student);
	}
	if (m == 2) {
		rankbynumber(student);
		printf("学号方式：\n");
		printfstudent(student);
	}
	if (m == 3) {
		rankbyage(student);
		printf("年龄方式：\n");
		printfstudent(student);
	}
	if (m == 4) {
		rankbymark(student);
		printf("成绩方式：\n");
		printfstudent(student);
	}
}