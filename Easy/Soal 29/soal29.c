#include <string.h>

bool cekCap(char a){
    return a == 'A' || a == 'B' || a == 'C' || a == 'D' || a == 'E' || a == 'F' || a == 'G' || a == 'H' ||
    a == 'I' || a == 'J' || a == 'K' || a == 'L' || a == 'M' || a == 'N' || a == 'O' || a == 'P' || a == 'Q'||
    a == 'R' || a == 'S' || a == 'T' || a == 'U' || a == 'V' || a == 'W' || a == 'X' || a == 'Y' || a == 'Z';
}


bool detectCapitalUse(char* word) {
    char first = word[0];
    int i;
    int ctr;
    int length = strlen(word);
    ctr = 0;
    if (cekCap(first)){
        for (i = 0; i < length; i++){
            if (cekCap(word[i])){
                ctr++;
            }
        }
        if (ctr == length || ctr == 1){
            return true;
        }else {
            return false;
        }
    }else {
        for (i = 0; i < length; i++){
            if (cekCap(word[i])){
                ctr++;
            }
        }
        if (ctr > 0){
            return false;
        }else {
            return true;
        }
    }
}