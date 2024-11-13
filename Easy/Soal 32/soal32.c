char ubahCap(char a){
    if (a == 'A'){
        return 'a';
    }else if (a == 'B'){
        return 'b';
    }else if (a == 'C'){
        return 'c';
    }else if (a == 'D'){
        return 'd';
    }else if (a == 'E'){
        return 'e';
    }else if (a == 'F'){
        return 'f';
    }else if (a == 'G'){
        return 'g';
    }else if (a == 'H'){
        return 'h';
    }else if (a == 'I'){
        return 'i';
    }else if (a == 'J'){
        return 'j';
    }else if (a == 'K'){
        return 'k';
    }else if (a == 'L'){
        return 'l';
    }else if (a == 'M'){
        return 'm';
    }else if (a == 'N'){
        return 'n';
    }else if (a == 'O'){
        return 'o';
    }else if (a == 'P'){
        return 'p';
    }else if (a == 'Q'){
        return 'q';
    }else if (a == 'R'){
        return 'r';
    }else if (a == 'S'){
        return 's';
    }else if (a == 'T'){
        return 't';
    }else if (a == 'U'){
        return 'u';
    }else if (a == 'V'){
        return 'v';
    }else if (a == 'W'){
        return 'w';
    }else if (a == 'X'){
        return 'x';
    }else if (a == 'Y'){
        return 'y';
    }else if (a == 'Z'){
        return 'z';
    }else {
        return a;
    }
}

char* toLowerCase(char* s) {
    int length = strlen(s);
    int i;
    for (i = 0; i < length; i++){
        s[i] = ubahCap(s[i]);
    }
    return s;
}