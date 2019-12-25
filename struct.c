#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

struct address{
    char name[20];
    char street[50];
    char city[20];
    int zip;
};

/* OR
    typedef struct{
        char name[20];
        char street[50];
        char city[20];
        int zip;
    } address;
now we don;t have to use "struct" below, address acts as a data type!
*/

typedef struct {
    char first_name[50];
    char last_name[50];

} identification;

int main(void){
    struct address andrew;
    andrew.zip = 77777;
    struct address mike = {"Mike", "Ovida St", "Ovado", 99999};
    struct address joe = {"Joe", "Joey St", "Joeytown", 88888};
    //mike.street == "hi";

    identification person1 = {"Andrew", "Garcia"};

    printf("%d %s %s %s", andrew.zip, mike.street, joe.name, person1.first_name);
    return 0;
}

