#include <stdio.h>



struct Student {
    char name[50];
    char usn[15];
    int gradeListSem1[6]; 
    int gradeListSem2[6]; 
};


int isPromoted(struct Student *student) {
    int creditCountSem1 = 0, creditCountSem2 = 0;

    for (int i = 0; i < 6; i++) {
        creditCountSem1 += student->gradeListSem1[i];
    }

    for (int i = 0; i < 6; i++) {
        creditCountSem2 += student->gradeListSem2[i];
    }

 
    if (creditCountSem1 >= 16 && creditCountSem2 >= 16) {
        return 1;
    } else {
        return 0; 
    }
}

int main() {
    
    struct Student student1;

   
    strcpy(student1.name, "venugopal");
    strcpy(student1.usn, "123456");
    int gradesSem1[] = {4, 3, 4, 3, 4, 3}; 
    int gradesSem2[] = {4, 4, 3, 4, 3, 4};
    memcpy(student1.gradeListSem1, gradesSem1, sizeof(gradesSem1));
    memcpy(student1.gradeListSem2, gradesSem2, sizeof(gradesSem2));

    if (isPromoted(&student1)) {
        printf("%s with USN %s is promoted to 3rd semester.\n", student1.name, student1.usn);
    } else {
        printf("%s with USN %s is not promoted to 3rd semester.\n", student1.name, student1.usn);
    }

    return 0;
}
