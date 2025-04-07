#include <stdio.h>

int main() {
   char str1[100] = "prep";
   char str2[100] = "perp";
   
   int freq1[26] = {0}, freq2[26] = {0};
   
   // Count frequency of characters in str1
   for(int i = 0; str1[i] != '\0'; i++) {
       freq1[str1[i] - 'a']++;
   }
   
   // Count frequency of characters in str2
   for(int i = 0; str2[i] != '\0'; i++) {
       freq2[str2[i] - 'a']++;
   }
   
   int flag = 0;
   
   // Compare frequency arrays
   for(int i = 0; i < 26; i++) {
       if(freq1[i] != freq2[i]) {
           flag = 1;
           break;
       }
   }
   
   if(flag == 0) {
       printf("They are anagrams");
   } else {
       printf("Not anagrams");
   }

   return 0;
}
