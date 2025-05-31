#include <stdio.h>
#include <ctype.h>

void check_letters(char letters[]) ;

int main() {
    char letters[10001];
    scanf("%s", letters);
    check_letters(letters);

    return 0;
}

void check_letters(char letters[]) {
    int upper = 0;
    int lower = 0;

    for (int i = 0 ; letters[i] != '\0' ; i++) {
        if (isupper(letters[i])) {
            upper = 1;
        } else if (islower(letters[i])) {
            lower = 1;
        }
    }

    if (upper && lower) { // 1 and 1 equal 1
        printf("Mix");
    } else if (upper) {
        printf("All Capital Letter");
    } else {
        printf("All Small Letter");
    }
}