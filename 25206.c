#include <stdio.h>
#include <string.h>

int main()
{

    char name[51];
    char grade[3];
    float hak =0.0 ,p =0.0 ,Hsum = 0.0, sum = 0.0, result = 0.0;
    
    for(int i =1;i<=20 ; i++){

        scanf("%s %f %s", name, &hak, grade);
           Hsum += hak;
        if (strcmp(grade, "A+") == 0) {
            p = 4.5;
        } else if (strcmp(grade, "A0") == 0) {
            p = 4.0; 
        } else if (strcmp(grade, "B+") == 0) {
            p = 3.5;
        } else if (strcmp(grade, "B0") == 0) {
            p = 3.0;
        } else if (strcmp(grade, "C+") ==   0) {
            p = 2.5;
        } else if (strcmp(grade, "C0") == 0) {
            p = 2.0;
        } else if (strcmp(grade, "D+") == 0) {
            p = 1.5;
        } else if (strcmp(grade, "D0") == 0) {
            p = 1.0;
        } else if (strcmp(grade, "F") == 0){
            p = 0.0;
        }
        else if (strcmp(grade, "P") == 0) {
            Hsum -= hak;
            p = 0.0;
        } else {
            p = 0.0;
        }
        sum += (hak * p);
}
result = sum/Hsum;
printf("%.6f", result);
    return 0;
}