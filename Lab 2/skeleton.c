#include <stdio.h>
#include <string.h>

// defining variables
char coff_typ[20];


int main(){
    printf("Enter a coffee type (espresso, cappuccino, mocha): \n");
    scanf("%19s", coff_typ);
    
    for (int i = 0; coff_typ[i]; i++) {  // change to while loop 
        coff_typ[i] = tolower(coff_typ[i]);
    }

    if (strcmp(coff_typ, "espresso")== 0){
        printf("One espresso on the way!\n");
    }
    
    else if (strcmp(coff_typ, "cappuccino")== 0){
        printf("One cappuccino on the way!\n");
    }

    else if (strcmp(coff_typ, "mocha")==0){
        printf("One mocha on the way!\n");
    }

    else{
        printf("Sorry, we don't provide %s\n ", coff_typ);
    }




    return 0;
}