// // Find the Index of the First Occurrence in a String
#include<stdio.h>
#include<string.h>

// int strStr(char* haystack, char* needle) {
//     int m = strlen(needle);
//     if (m == 0) return 0;
//     for (int i=0;i<=strlen(haystack)-m;i){
//     /* check every possible starting point */
//         /* compare characters from both strings one by one */
//         for (int j=0;j<m;j++) {
//             if (haystack[i+j] != needle[j]) break;
//             /* if all characters match, then return current index + difference between positions */
//             if (j==m-1) return i;
//             }
//             }
//             return -1;   /* string not found */    
// }
// int main(){
//     printf("%d",strStr("hello world","or"));
//     return 0;
// }
int strStr(char* haystack, char* needle){
    int n = strlen(needle), h = strlen(haystack);
    if (!n) return 0;
    for (int i = 0; i < h - n + 1; ++i, haystack++)
    if (*haystack == *needle && !memcmp(haystack, needle, n)) return i;
    return -1;
}
int main(){
    printf("%d",strStr("hello world","or"));
    return 0;
}