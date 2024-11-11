bool judgeCircle(char* moves) {
    int x;
    int y;
    int i;
    x = 0;
    y = 0;
    int length;
    length = strlen(moves);
    for (i = 0; i < length; i++){
        if (moves[i] == 'R'){
            x++;
        }else if (moves[i] == 'L'){
            x--;
        }else if (moves[i] == 'U'){
            y++;
        }else {
            y--;
        }
    }
    if (x == 0 && y == 0){
        return true;
    }else {
        return false;
    }
}