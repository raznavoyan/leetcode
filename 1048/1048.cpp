#include <stdio.h>
#include <string.h>

int isPredecessor(char *wordA, char *wordB) {
    int lenA = strlen(wordA);
    int lenB = strlen(wordB);

    if (lenA + 1 != lenB) {
        return 0; // If lengths differ by more than 1, not a predecessor
    }

    int i = 0, j = 0;
    int diffCount = 0;

    while (i < lenA && j < lenB) {
        if (wordA[i] == wordB[j]) {
            i++;
            j++;
        } else {
            diffCount++;
            if (diffCount > 1) {
                return 0; // More than one difference, not a predecessor
            }
            j++;
        }
    }

    return 1;
}

int longestStrChain(char **words, int wordsSize) {
    // Sort the words by their lengths in non-decreasing order
    for (int i = 0; i < wordsSize - 1; ++i) {
        for (int j = i + 1; j < wordsSize; ++j) {
            if (strlen(words[i]) > strlen(words[j])) {
                char *temp = words[i];
                words[i] = words[j];
                words[j] = temp;
            }
        }
    }

    int maxChainLength = 1;
    int dp[wordsSize];
    for (int i = 0; i < wordsSize; ++i) {
        dp[i] = 1;
        for (int j = 0; j < i; ++j) {
            if (isPredecessor(words[j], words[i])) {
                dp[i] = dp[i] > dp[j] + 1 ? dp[i] : dp[j] + 1;
            }
        }
        maxChainLength = maxChainLength > dp[i] ? maxChainLength : dp[i];
    }

    return maxChainLength;
}
