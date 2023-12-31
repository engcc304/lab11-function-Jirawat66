/*
    จงเขียนฟังก์ชันในการตรวจสอบตัวเลขที่ผู้ใช้ป้อนเข้ามา ว่าเป็นตัวเลขที่เป็นอาร์มสตรองหรือไม่ หากใช่ให้แสดงคำว่า Pass หากไม่ใช่แสดงคำว่า Not Pass
    
    หมายเหตุ: ตัวเลขอาร์มสตรอง คือ ตัวเลขที่ผลรวมของเลขยกกำลังของจำนวนหลัก เช่น
    153 เป็นตัวเลขอาร์มสตรอง เพราะ 153 มีทั้งหมด 3 หลัก จึงมีค่าเท่ากับ = 1^3 +  5^3 +  3^3 (โดยที่เครื่องหมาย ^ หมายถึงเลขยกกำลัง)
    370 = 3^3 + 7^3 + 0^3

    Test Case:
        Enter Number:
            153
    Output:
        Pass.
    
    Test Case:
        Enter Number:
            370
    Output:
        Pass.
    
    Test Case:
        Enter Number:
            372
    Output:
        Not Pass.
*/

#include <stdio.h>

int main() 
{
    int num , num2 , ArmstrongNUM = 0  , DigitNum  ;

    printf( "Enter Number: \n" ) ;
    scanf( "%d" , &num ) ;

    num = num2 ;
    while (num2 != 0 )
    {
        num /10 ;
        num2 % 10 ;
        ArmstrongNUM += num2 * num2 * num2  ;
    }
   
    if (ArmstrongNUM == num)
    {
        printf("Pass.") ;
    }
    else 
    {
        printf("Not Pass.") ;
    }
    
    return 0 ;
}//end main function


