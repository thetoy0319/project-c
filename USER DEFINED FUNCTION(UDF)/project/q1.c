#include <stdio.h>
  void add () {
        int a;

        printf("enter the value of ",&a);
        scanf("%d",&a);

       

        if (a%3==0 && a%5==0)
        {
            printf("This number is diwide by 3 or 5",a);
        }
        else {
            printf("this number not diwided by 3 or 5",a);
        }
        
}

int main() {

add();
    return 0;
}
