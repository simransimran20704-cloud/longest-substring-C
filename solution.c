int lengthOfLongestSubstring(char *s) {
    int max = 0;
    for (char *i = s; *i != '\0'; i++) {
        int count = 0;

        for (char *j = i; *j != '\0'; j++) {
            int repeat = 0;

            // check repeated character
            for (char *k = i; k < j; k++) {
                if (*k == *j) {
                    repeat = 1;
                    break;
                }
            }
            if (repeat)
                break;

            count++;
        }
        if (count > max)
            max = count;
    }
    return max;
}
int main() {
    char s[100];

    printf("Enter string: ");
    scanf("%s", s);

    int ans = lengthOfLongestSubstring(s);

    printf("Length of longest substring = %d\n", ans);

    return 0;
}
