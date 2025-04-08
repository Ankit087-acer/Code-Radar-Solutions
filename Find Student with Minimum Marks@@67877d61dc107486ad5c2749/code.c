#include <stdio.h>
#include <string.h>
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};
int main() {
    int n;
    scanf("%d", &n);
    struct Student students[n], minScorer;
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
        if (i == 0 || students[i].marks < minScorer.marks) {
            minScorer = students[i];
        }
    }
    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f\n", minScorer.rollNumber, minScorer.name, minScorer.marks);
    return 0;
} 