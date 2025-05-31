#include <stdio.h>

void get_number(int num_list[], int index);
void get_min_max(int num_list[], int index);

int main() {
    int index;
    scanf("%d", &index);

    int num_list[index];

    get_number(num_list, index);
    get_min_max(num_list, index);

    return 0;
}

void get_number(int num_list[], int index) {
    for (int i = 0; i < index; i++) {
        scanf("%d", &num_list[i]);
    }
}

void get_min_max(int num_list[], int index) {
    int min = num_list[0];
    int max = num_list[0];

    for (int i = 1; i < index; i++) {
        if (num_list[i] < min) min = num_list[i];
        if (num_list[i] > max) max = num_list[i];
    }

    printf("%d\n", min);
    printf("%d\n", max);
}