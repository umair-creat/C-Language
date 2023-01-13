#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <string.h>


int main() {
    srand(time(NULL));
    int rand1, rand2, rand3, rand4, rand5, rand6;
    char* art[] = { "the" , "a" , "one" , "some", "any" };
    char* noun[] = { "boy" , "girl" , "dog" , "town", "car" };
    char* verb[] = { "drove" , "jumped" , "ran" , "walked", "skipped" };
    char* prep[] = { "to" , "from" , "over" , "under", "on" };

    rand1 = rand() % 6; rand2 = rand() % 6; rand3 = rand() % 6;  rand4 = rand() % 6; rand5 = rand() % 6; rand6 = rand() % 6;
    printf("%s %s %s %s  %s %s\n", art[rand1], noun[rand2], verb[rand3], prep[rand4], art[rand5], noun[rand6]);
    return 0;
}