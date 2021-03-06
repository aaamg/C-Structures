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

int a[3][4] = {{1, 2, 3, 4},
              {5, 6, 7, 8},
              {9, 10, 11, 12}};

int main(void){
    struct address andrew;
    andrew.zip = 77777;
    struct address mike = {"Mike", "Ovida St", "Ovado", 99999};
    struct address joe = {"Joe", "Joey St", "Joeytown", 88888};
    //mike.street == "hi";

    identification person1 = {"Andrew", "Garcia"};

    printf("%d %s %s %s %d %d", andrew.zip, mike.street, joe.name, person1.first_name, a[0][2], a[2][3]);
    return 0;
}




