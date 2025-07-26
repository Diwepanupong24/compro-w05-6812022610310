#include <stdio.h>
int main() {
    char First_Name[20] ;                                       // ตัวแปรสำหรับเก็บตัวอักษรตัวแรกของชื่อ
    int age ;                                                   // ตัวแปรสำหรับเก็บอายุ   
    float hight;                                                // ตัวแปรสำหรับเก็บส่วนสูง 
    char subject[10];                                           // ตัวแปรสำหรับเก็บชื่อวิชา       
    float grade;                                                // ตัวแปรสำหรับเก็บเกรด
    char gradeA;                                                // ตัวแปรสำหรับเก็บเกรดตัวอักษร                                                         
    
    printf("Enter your First Name age and hight):\n");          //ใส่ชื่อ นามสกุล อายุ และส่วนสูง
    scanf("%s %d %f", &First_Name,&age, &hight);                //รับค่าชื่อ นามสกุล อายุ และส่วนสูง

    printf("Enter your Subject, grade and symbolized:\n");      //ใส่วิชา เกรด และสัญลักษณ์เกรด
    scanf("%s %f %c", &subject, &grade, &gradeA);               //รับค่าชื่อวิชา เกรด และสัญลักษณ์เกรด

    printf("%s is %d years old and %.2f centimeters tall\n", First_Name,age, hight);        //แสดงผลชื่อ นามสกุล อายุ และส่วนสูง
    printf("In subject %s, %s got %.2f which is symbolized as '%c' ",subject,First_Name, grade, gradeA);  //แสดงผลวิชา เกรด และสัญลักษณ์เกรด

    return 0;               
}