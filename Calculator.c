# include <stdio.h>
int main() {
     int a,b,c;
     printf("            💖 The Kawaii Calculator  ✨          \n "); 
     printf("Enter The First Number= ");
     scanf("%d",&a);
     
     printf("Enter The Second Number= ");
     scanf("%d",&b);
     
     printf("Choose 1 for Addition \n") ;
     printf("Choose 2 for Substraction \n") ;
     printf("Choose 3 for Divide \n") ;
     printf("Choose 4 for Multiply \n") ;
     printf("Choose 5 for Modulas \n");
     
     printf("Choice =");
     scanf(" %d",&c);
     
     
     
     switch(c){;
     
     case 1:
     printf("The Addition of %d and %d is %d \n",a,b,a+b);
     break;
     
     case 2:
     printf("The substraction of %d and %d is %d \n",a,b,a-b);
     break;
     
     case 3:
     printf("The Divide of %d and %d is %d \n",a,b,a/b);
     break;
     
     case 4:
     printf("The Multiplication of %d and %d is %d  \n",a,b,a*b);
     break;
     
     case 5:
     printf("The Modulas of %d and %d is %d  \n",a,b,a%b);
     break;
     
     
     
 }
 
printf(" \n  Thanks For using SENSEI 🥵❣️  \n"); 
    return 0;
}
