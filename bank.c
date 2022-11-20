#include<stdio.h>
#include<string.h>
void new(){
   
    int date,month,year;
    char name[40],fname[40],mname[40];
    printf("Enter Applicant Name : \n");
    scanf("%s",&name);
    printf("Enter Father Name : \n");
    scanf("%s",&fname);
    printf("Enter Mother Name : \n");
    scanf("%s",&mname);
    printf("Enter Date of Birth (dd/mm/year) : \n");
    scanf("%d",&date);
    scanf("%d",&month);
    scanf("%d",&year);
    printf("%s\n %s\n %s \n %d/%d/%d",name,fname,mname,date,month,year);
}
void update(){
  int account_no;
  printf("Please Enter Account Number of custmer: \t");
  scanf("%d",&account_no);  
}
void menu(){
    int n;
    printf("Welcome to the Main Menu \n");
    printf("1. Create a New Account \n");
    printf("2. Update Information of Existing Account \n");
    printf("3. Banking \n");
    printf("4. Check The Details of Existing Account \n");
    printf("5. Removing Existing Account \n");
    printf("6. View Coustmer List \n");
    printf("7. Exit \n");
    printf("\n \n \n");
    printf("Enter Your Choice: ");
    scanf("%d",&n);
    /*if(n==1)
    {
        printf("Hello");
    }
    else if(n==2){
        printf("2. Update info of existing account");
    }
    else if(n==3){
        printf("3. Banking");
    }
    else if(n==4){
        printf("4. check details of existig account");
    }
    else if(n==5){
        printf("5. removing existig account");
    }
    else if(n==6){
        printf("6. view  customer list");
    }
    else if(n==7){
        printf("7. Exit");
    }
*/
// == Second option ==//
switch(n){
    case 1:
    
    printf("########## Create New Account ##########\n");
    new();
    break;
    case 2:
    printf("2.Update info of Existing Account \n");
    update();
    break;
    case 3:
    printf("3. Banking");
    break;
    case 4:
    printf("4. view details of existing Account");
    break;
    case 5:
    printf("5. Removing an Existing Account");
    break;
    case 6:
    printf("6. View customer list");
    break;
    case 7:
    printf("7. Exit");
    break;
    default:
    printf("Please Check your Choice.");
}
}
int main(){
    FILE*ptr;
    menu();
    fclose(ptr);
    return(0);
}