#include<stdio.h>
#include<string.h>

struct address {
    int houseNo;
    int streetNo;
    char city[100];
    char state[100];
    char country[100];
};

void printAdd(struct address adds);

int main () {
    struct address adds[10];
    
    printf("Enter info for peoples 1 : ");
    printf("Enter House No : ");
    scanf("%d" , &adds[0].houseNo);
    printf("Enter Street No : ");
    scanf("%d" , &adds[0].streetNo);
    puts("Enter City Name : ");
    scanf("%s" , adds[0].city);
    printf("Enter your State Name : ");
    scanf("%s" , adds[0].state);
    puts("Enter Your Country Name : ");
    scanf("%s" , adds[0].country);
    

        printAdd(adds[0]);
return 0;
}

void printAdd(struct address adds) {
    printf("Address Is : %d,%d,%s,%s,%s" , adds.houseNo, adds.streetNo, adds.city, adds.state, adds.country);
}