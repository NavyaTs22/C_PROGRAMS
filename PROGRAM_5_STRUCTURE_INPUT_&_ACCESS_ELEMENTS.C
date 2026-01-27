#include <stdio.h>

struct student {
    int roll;
    char name[20];
    float marks;
};

int main() {

struct student s;
struct student *p;
p=&s;

printf("enter roll no");
scanf("%d",&p->roll);

printf("enter name");
scanf("%s",p->name);

printf("enter marks");
scanf("%f",&p->marks);

printf("roll no : %d\n name : %s\n marks : %.1f\n",p->roll,p->name,p->marks);


    return 0;
}



OUTPUT :
enter roll no22
enter nameNavya
enter marks100
roll no : 22
 name : Navya
 marks : 100.0

