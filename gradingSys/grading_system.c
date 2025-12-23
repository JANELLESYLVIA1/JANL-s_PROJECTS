#include <stdio.h>

int main() {
    char name[50];
    int score = 0;
    char answer;

    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);

    printf("\nBIOLOGY QUIZ (10 Questions)\n");
    printf("Choose the correct option (a, b, c, or d)\n\n");

    printf("1. What is the basic unit of life?\n");
    printf("a) Tissue  b) Cell  c) Organ  d) Atom\n");
    scanf(" %c", &answer);
    if (answer == 'b') score++;

    printf("\n2. Which organ pumps blood in the human body?\n");
    printf("a) Brain  b) Lungs  c) Heart  d) Kidney\n");
    scanf(" %c", &answer);
    if (answer == 'c') score++;

    printf("\n3. Which gas is required for photosynthesis?\n");
    printf("a) Oxygen  b) Nitrogen  c) Carbon Dioxide  d) Hydrogen\n");
    scanf(" %c", &answer);
    if (answer == 'c') score++;

    printf("\n4. Which part of the plant conducts photosynthesis?\n");
    printf("a) Root  b) Stem  c) Leaf  d) Flower\n");
    scanf(" %c", &answer);
    if (answer == 'c') score++;

    printf("\n5. How many chromosomes are in a normal human cell?\n");
    printf("a) 23  b) 46  c) 44  d) 48\n");
    scanf(" %c", &answer);
    if (answer == 'b') score++;

    printf("\n6. Which vitamin is produced when skin is exposed to sunlight?\n");
    printf("a) Vitamin A  b) Vitamin B  c) Vitamin C  d) Vitamin D\n");
    scanf(" %c", &answer);
    if (answer == 'd') score++;

    printf("\n7. Which blood cells help fight infections?\n");
    printf("a) Red blood cells  b) White blood cells  c) Platelets  d) Plasma\n");
    scanf(" %c", &answer);
    if (answer == 'b') score++;

    printf("\n8. What is the main function of roots?\n");
    printf("a) Photosynthesis  b) Reproduction  c) Absorption of water  d) Respiration\n");
    scanf(" %c", &answer);
    if (answer == 'c') score++;

    printf("\n9. Which organ is responsible for breathing?\n");
    printf("a) Heart  b) Brain  c) Liver  d) Lungs\n");
    scanf(" %c", &answer);
    if (answer == 'd') score++;

    printf("\n10. Which process do plants use to make food?\n");
    printf("a) Respiration  b) Digestion  c) Photosynthesis  d) Transpiration\n");
    scanf(" %c", &answer);
    if (answer == 'c') score++;

    char grade;
    if (score >= 9)
        grade = 'A';
    else if (score >= 7)
        grade = 'B';
    else if (score >= 5)
        grade = 'C';
    else
        grade = 'F';

    printf("\n--- QUIZ RESULT ---\n");
    printf("Name  : %s", name);
    printf("Score : %d / 10\n", score);
    printf("Grade : %c\n", grade);

    return 0;
}
