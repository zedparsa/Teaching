#include <stdio.h>
//Standard Input Output Header

int main()
{    
    //🙃 This is a Comment
    
    printf("Hello Friend");

    return 0;
}

//1
/* (((! Compiler translate C language to binary code for CPU to use it !)))
    11001101 00000000 11100010 ...
*/


//2
/* (((! if we didn't have libraries we had to write hard codes like this : !)))
    section .data
        msg db "Hello Friend!", 0

    section .text
        global _start

    _start:
        mov eax, 4        ; شماره سیستم کال برای چاپ (write)
        mov ebx, 1        ; شماره فایل (1 برای stdout)
        mov ecx, msg      ; اشاره‌گر به متن
        mov edx, 13       ; طول متن
        int 0x80          ; فراخوانی سیستم

    ; خروج از برنامه
    mov eax, 1        ; شماره سیستم کال برای خروج
    xor ebx, ebx      ; مقدار بازگشتی
    int 0x80
*/


//3
/*(((! stdio.h library, contains important functions, i wrote some of them : !)))
    printf: برای چاپ داده‌ها (خروجی) به کنسول.
    scanf: برای دریافت ورودی از کاربر.
    getchar: برای دریافت یک کاراکتر از ورودی.
    putchar: برای چاپ یک کاراکتر به کنسول.
    fprintf: برای چاپ داده‌ها به یک فایل.
    fscanf: برای دریافت ورودی از یک فایل.
    fgets: برای خواندن یک خط از ورودی.
*/
