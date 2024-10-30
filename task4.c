#include <stdio.h>

int stringLength(char sentence[]);
int numofwords(char sentence[]);
int numofvowels(char sentence[]);
int VowelFreq(char sentence[], char vowel);

int main() {
    char sentence[100];
    printf("Enter your words: ");
    fgets(sentence, sizeof(sentence), stdin);

    int length = stringLength(sentence);
    printf("Length of the string: %d\n", length);

    int words = numofwords(sentence);
    printf("Number of words: %d\n", words);

    int vowels = numofvowels(sentence);
    printf("Number of vowels: %d\n", vowels);

    char vowelsArr[] = {'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < 5; i++) {
        int freq = VowelFreq(sentence, vowelsArr[i]);
        printf("Frequency of vowel '%c': %d\n", vowelsArr[i], freq);
    }

    return 0;
}


int stringLength(char sentence[]) {
    int count = 0;
    for (int i = 0; i < 100; i++) {
        if (sentence[i] == '\0' || sentence[i] == '\n') {
            break;
        }
        count++;
    }
    return count;
}

int numofwords(char sentence[100]){
    int count = 1;
    for (int i =0 ; sentence[i]!='\0' ; i++){
        if(sentence[i] == ' ')
                count++;
                }
        return count;
}

int numofvowels(char sentence[]) {
    int count = 0;
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u' ||
            sentence[i] == 'A' || sentence[i] == 'E' || sentence[i] == 'I' || sentence[i] == 'O' || sentence[i] == 'U') {
            count++;
        }
    }
    return count;
}

int VowelFreq(char sentence[], char vowel) {
    int freq = 0;
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == vowel || sentence[i] == (vowel + 'A' - 'a')) {
            freq++;
        }
    }
    return freq;
}
