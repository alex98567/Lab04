// question 1
// #include <stdio.h>
//
// int main(void) {
//     int array[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 100};
//     for(size_t i = 0; i < 10; i++) {
//       printf("%d is at index %d\n", array[i], i);
//     }
//     return 0;
// }

// question 2
// #include <stdio.h>
//
// int main() {
//     char name[100];
//     printf("Enter your name: ");
//     scanf("%s", name);
//     printf("Hello %s!", name);
//     return 0;
// }

// question 3
// #include <stdio.h>
//
// int main() {
//     char word[100];
//     printf("Enter a word: ");
//     scanf("%s", word);
//     size_t i;
//     for (i = 1; word[i] != '\0'; i++) {}
//     for (size_t j = 1; j < i - 1; j++) {
//         printf("%c", word[j]);
//     }
//     return 0;
// }

// question 4
// #include <stdio.h>
//
// void nonStart(const char first[], const char second[]);
//
// int main() {
//     nonStart("hello", "there");
//     return 0;
// }
//
// void nonStart(const char first[], const char second[]) {
//     size_t i;
//     for (i = 1; first[i] != '\0'; i++) {
//         printf("%c", first[i]);
//     }
//     for (i = 1; second[i] != '\0'; i++) {
//         printf("%c", second[i]);
//     }
// }

//question 5
// #include <stdio.h>
//
// void reverse(int numbers[], const int size);
//
// int main() {
//     const int size = 5;
//     int list[] = {1, 2, 3, 4, 5};
//     reverse(list, size);
//     for (size_t i = 0; i < size; i++) {
//         printf("%d\n", list[i]);
//     }
//     return 0;
// }
//
// void reverse(int numbers[], const int size) {
//     size_t i;
//     int temp;
//     for (i = 0; i < size / 2; i++) {
//         temp = numbers[i];
//         numbers[i] = numbers[size - i - 1];
//         numbers[size - i - 1] = temp;
//     }
// }

// question 6
// #include <stdio.h>
//
// double findMean(const int data[], size_t length);
//
// int main() {
//     int array[] = {11, 22, 33, 4, 5, 6, 7, 8, 9, 10};
//     int size = 10;
//     double mean = findMean(array, size);
//     printf("The mean of the array is: %f", mean);
//     return 0;
// }
//
// double findMean(const int data[], size_t length) {
//     int sum = 0;
//     for (int i = 0; i < length; i++) {
//         sum += data[i];
//     }
//     if (length == 0) {
//         return -1;
//     }
//     double mean = sum * 1.0 / length;
//     return mean;
// }

// question 7
// #include <stdio.h>
// #include <math.h>
//
// int max_abs(const int data[], size_t length);
//
// int main() {
//     int array[] = {17, -5, 4, -55, 48};
//     size_t size = 5;
//     int max = max_abs(array, size);
//     printf("The number with the highest absolute value is %d", max);
//     return 0;
// }
//
// int max_abs(const int data[], size_t length) {
//     int max = fabs(data[0]);
//     for (size_t i = 0; i < length; i++) {
//         if (fabs(data[i]) > fabs(max)) {
//             max = data[i];
//         }
//     }
//     return max;
// }

// question 8
// #include <stdio.h>
//
// size_t in_between(const int data[], size_t length, int val_1, int val_2);
//
// int main() {
//     int numbers[] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
//     size_t size = 10;
//     int first = 15;
//     int second = 45;
//     size_t result = in_between(numbers, size, first, second);
//     printf("There are %d numbers in between the two values(inclusive)", result);
//     return 0;
// }
//
// size_t in_between(const int data[], size_t length, int val_1, int val_2) {
//     size_t between = 0;
//     for (size_t i = 0; i < length; i++) {
//         if (val_1 <= data[i] && data[i] <= val_2) {
//             between++;
//         }
//     }
//     return between;
// }

// question 9
// #include <stdio.h>
//
// int minimum (const int data[][10], const size_t n);
//
// int main() {
//     int rows = 3;
//     int array[][10] = {{15, 25, 35, 45, 55, 56, 57, 58, 59, 10},
//         {12, 4, 17, 88, 99, 55, 44, 33, 90, 900},
//         {2, 5, 7, 88, 988, 76, 9, 57, 865, 1000}};
//     int min = minimum(array, rows);
//     printf("The minimum value in the 2D array is %d", min);
//     return 0;
// }
//
// int minimum (const int data[][10], const size_t n) {
//     int min = data[0][0];
//     size_t row, column;
//     for (row = 0; row < n; row++) {
//         for (column = 0; column < 10; column++) {
//             if (data[row][column] < min) {
//                 min = data[row][column];
//             }
//         }
//     }
//     return min;
// }

// question 10
// #include <stdio.h>
//
// size_t count_even (const int data[][7], const size_t n);
//
// int main() {
//     int numbers[][7] = {{1, 2, 3, 4, 5, 6, 7}, {8, 9, 10, 11, 12, 13, 14},
//     {15, 16, 17, 18, 19, 20, 21}};
//     size_t size = 3;
//     size_t even = count_even(numbers, size);
//     printf("There are %d even numbers in the 2D array", even);
//     return 0;
// }
//
// size_t count_even (const int data[][7], const size_t n) {
//     int evens = 0;
//     for (size_t i = 0; i < n; i++) {
//         for (size_t j = 0; j < 7; j++) {
//             if (data[i][j] % 2 == 0) {
//                 evens++;
//             }
//         }
//     }
//     return evens;
// }