#include<stdio.h>
int sum_of_two_term (int,int);
int sum_of_two_term (int x,int y){
    printf("the sum of two number is %d",x+y);
    return x+y;
    }
int sum_of_three_term(int,int,int);
int sum_of_three_term(int x,int y,int z){
    printf("the sum of three is %d",x+y+z);
    return x+y+z;
}
int sum_of_four_term(int,int,int,int);
int sum_of_four_term(int x,int y,int z,int k){
    printf("the sum of four is %d",x+y+z+k);
    return x+y+z+k;
}
int sub_of_two_term(int, int);
int sub_of_two_term(int x,int y){
    printf("the substraction of two number is: %d",x-y);
    return x-y;
    }
int sub_of_three_term(int,int,int);
int sub_of_three_term(int x,int y,int z){
    printf("the substraction of three number is: %d",x-y-z);
    return x-y-z;
    }    
int sub_of_four_term(int,int,int,int);
int sub_of_four_term(int x,int y,int z,int k){
    printf("the substraction of four number is: %d",x-y-z-k);
    return x-y-z-k;
}
int mul_of_two_term(int,int);
int mul_of_two_term(int x, int y){
    printf("the multiplication of two numbers is: %d",x*y);
    return x*y;
} 
int mul_of_three_term(int,int,int);
int mul_of_three_term(int x, int y,int z){
    printf("the multiplication of three numbers is: %d",x*(y*z));
    return x*(y*z);
}   
int mul_of_four_term(int,int,int,int);
int mul_of_four_term(int x, int y,int z,int k){
    printf("the multiplication of four numbers is: %d",x*(y*(z*k)));
    return x*(y*(z*k));
}  
float div_of_two_term(float,float);
float div_of_two_term(float x,float y){
    printf("the division of two numbers is: %f",x/y);
    return x/y;
}      
float div_of_three_term(float,float,float);
float div_of_three_term(float x,float y,float z){
    printf("the division of three numbers is: %f",x/(y/z));
    return x/(y/z); 
}
float div_of_four_term(float,float,float,float);
float div_of_four_term(float x,float y,float z,float k){
    printf("the division of four numbers is: %f",x/(y/(z/k)));
    return x/(y/(z/k)); 
}
int main()
{
    int m;
    printf("enter 1 for addition,2 for substraction,3 for multiplication or 4 for divison: ");
    scanf("%d",&m);
    if(m==1){
    int n;
    printf("enter the number of terms (between 1 and 5) that you want to add: ");
    scanf("%d",&n);
    if(n==2){
            int e,f;
            char a,b;
        for(int i=1;i<=n;i++){
            if(i==1){
        printf("enter %c that you want to add: \n",'a');
            }
            else if(i==2){
        printf("enter %c that you want to add: \n",'b');
            }
   }     scanf("%d",&e);  
        scanf("%d",&f); 
        
        sum_of_two_term(e,f);
    }
       
    else if(n==3){
        int e,f,g;
        char a,b,c;
        for(int i=1;i<=3;i++){
              if(i==1){
        printf("enter %c that you want to add: \n",'a');
            }
            else if(i==2){
        printf("enter %c that you want to add: \n",'b');
            }
            else if(n==3){
        printf("enter %c that you want to add: \n",'c');
            }
        }
        scanf("%d",&e);
        scanf("%d",&f);
        scanf("%d",&g);
        sum_of_three_term(e,f,g);
    }
    else if(n==4){
        int e,f,g,h;
        char a,b,c,d;
        for(int i=1;i<=4;i++){
             if(i==1){
        printf("enter %c that you want to add: \n",'a');
            }
            else if(i==2){
        printf("enter %c that you want to add: \n",'b');
            }
            else if(i==3){
        printf("enter %c that you want to add: \n",'c');
            }
            else if(i==4){ 
        printf("enter %c that you want to add: \n",'d');    
        }
        }
        scanf("%d",&e);
        scanf("%d",&f);
        scanf("%d",&g);
        scanf("%d",&h);
        sum_of_four_term(e,f,g,h);
        }
        else{
            printf("please enter number between 1 and 5");
        }
    }
    else if(m==2){
    int n;
    printf("enter the number of terms (between 1 and 5) that you want to substract: ");
    scanf("%d",&n);
    if(n==2){
            int e,f;
            char a,b;
        for(int i=1;i<=n;i++){
            if(i==1){
        printf("enter %c that you want to sub: \n",'a');
            }
            else if(i==2){
        printf("enter %c that you want to sub: \n",'b');
            }
   }     
        scanf("%d",&e);  
        scanf("%d",&f); 
        
        sub_of_two_term(e,f);
    }
       
    else if(n==3){
        int e,f,g;
        char a,b,c;
        for(int i=1;i<=3;i++){
              if(i==1){
        printf("enter %c that you want to sub: \n",'a');
            }
            else if(i==2){
        printf("enter %c that you want to sub: \n",'b');
            }
            else if(n==3){
        printf("enter %c that you want to sub: \n",'c');
            }
        }
        scanf("%d",&e);
        scanf("%d",&f);
        scanf("%d",&g);
        sub_of_three_term(e,f,g);
    }
    else if(n==4){
        int e,f,g,h;
        char a,b,c,d;
        for(int i=1;i<=4;i++){
             if(i==1){
        printf("enter %c that you want to sub: \n",'a');
            }
            else if(i==2){
        printf("enter %c that you want to sub: \n",'b');
            }
            else if(i==3){
        printf("enter %c that you want to sub: \n",'c');
            }
            else if(i==4){ 
        printf("enter %c that you want to sub: \n",'d');    
        }
        }
        scanf("%d",&e);
        scanf("%d",&f);
        scanf("%d",&g);
        scanf("%d",&h);
        sub_of_four_term(e,f,g,h);
        }
        else{
            printf("please enter number between 1 and 5 only");
        }
    }
    else if(m==3){
    int n;
    printf("enter the number of terms (between 1 and 5) that you want to multiply: ");
    scanf("%d",&n);
    if(n==2){
            int e,f;
            char a,b;
        for(int i=1;i<=n;i++){
            if(i==1){
        printf("enter %c that you want to mul: \n",'a');
            }
            else if(i==2){
        printf("enter %c that you want to mul: \n",'b');
            }
   }     
        scanf("%d",&e);  
        scanf("%d",&f); 
        
        mul_of_two_term(e,f);
    }
       
    else if(n==3){
        int e,f,g;
        char a,b,c;
        for(int i=1;i<=3;i++){
              if(i==1){
        printf("enter %c that you want to mul: \n",'a');
            }
            else if(i==2){
        printf("enter %c that you want to mul: \n",'b');
            }
            else if(n==3){
        printf("enter %c that you want to mul: \n",'c');
            }
        }
        scanf("%d",&e);
        scanf("%d",&f);
        scanf("%d",&g);
        mul_of_three_term(e,f,g);
    }
    else if(n==4){
        int e,f,g,h;
        char a,b,c,d;
        for(int i=1;i<=4;i++){
             if(i==1){
        printf("enter %c that you want to mul: \n",'a');
            }
            else if(i==2){
        printf("enter %c that you want to mul: \n",'b');
            }
            else if(i==3){
        printf("enter %c that you want to mul: \n",'c');
            }
            else if(i==4){ 
        printf("enter %c that you want to mul: \n",'d');    
        }
        }
        scanf("%d",&e);
        scanf("%d",&f);
        scanf("%d",&g);
        scanf("%d",&h);
        mul_of_four_term(e,f,g,h);
        }
        else{
            printf("please enter number between 1 and 5 only");
        }
    }
    else if(m==4)
    {
    int n;
    printf("enter the number of terms (between 1 and 5) that you want to divide: ");
    scanf("%d",&n);
    if(n==2){
            float e,f;
            char a,b;
        for(int i=1;i<=n;i++){
            if(i==1){
        printf("enter %c that you want to divide: \n",'a');
            }
            else if(i==2){
        printf("enter %c that you want to divide: \n",'b');
            }
   }    
        scanf("%f",&e);  
        scanf("%f",&f); 
        if(f == 0){
            printf("error: can't divide by zero");
        }
        else{
        div_of_two_term(e,f);
        }
    }
     else if(n==3){
        float e,f,g;
        char a,b,c;
        for(int i=1;i<=3;i++){
              if(i==1){
        printf("enter %c that you want to divide: \n",'a');
            }
            else if(i==2){
        printf("enter %c that you want to divide: \n",'b');
            }
            else if(n==3){
        printf("enter %c that you want to divide: \n",'c');
            }
        }
        scanf("%f",&e);
        scanf("%f",&f);
        scanf("%f",&g);
        if(f==0 || g==0){
            printf("error: can't divide by zero");
        }
        else{
        div_of_three_term(e,f,g);
        }
    }
     else if(n==4){
        float e,f,g,h;
        char a,b,c,d;
        for(int i=1;i<=4;i++){
             if(i==1){
        printf("enter %c that you want to divide: \n",'a');
            }
            else if(i==2){
        printf("enter %c that you want to divide: \n",'b');
            }
            else if(i==3){
        printf("enter %c that you want to divide: \n",'c');
            }
            else if(i==4){ 
        printf("enter %c that you want to divide: \n",'d');    
        }
        }
        scanf("%f",&e);
        scanf("%f",&f);
        scanf("%f",&g);
        scanf("%f",&h);
        if(f ==0 || g ==0 || h ==0){
            printf("error: can't divide by zero");
        }
        else{
        div_of_four_term(e,f,g,h);
        }
        }
        else {
        printf("please enter number between 1 and 5 only");
    }
    }
    
    else{
        printf("please enter 1,2,3 or 4 only");
    }
     return 0;   
}
