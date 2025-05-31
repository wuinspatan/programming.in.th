#include <stdio.h>

struct student_score {
    int SaveScore;
    int MidScore;
    int FinalScore;
};

void get_score(int *score, int max_score, const char *label) ;
void get_grade(int score) ;

int main() {
    struct student_score S;

    get_score(&S.SaveScore, 30, "SaveScore");
    get_score(&S.MidScore, 40, "MidScore");
    get_score(&S.FinalScore, 40, "FinalScore");

    int score_sum = S.SaveScore + S.MidScore + S.FinalScore;

    get_grade(score_sum);

    return 0;
}

void get_score(int *score, int max_score, const char *label) {
    do {
        scanf("%d", score);
    } while (*score > max_score || *score < 0);
}

void get_grade(int score) {
    
    if (score >= 80) {
        printf("A\n");
    } else if (score >= 75) {
        printf("B+\n");
    } else if (score >= 70) {
        printf("B\n");
    } else if (score >= 65) {
        printf("C+\n");
    } else if (score >= 60) {
        printf("C\n");
    } else if (score >= 55) {
        printf("D+\n");
    } else if (score >= 50) {
        printf("D\n");
    } else {
        printf("F\n");
    }
}