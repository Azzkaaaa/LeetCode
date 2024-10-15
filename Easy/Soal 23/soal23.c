bool isPowerOfFour(int n) {
    if (n == 1){
        return true;
    }else if (n % 4 != 0){
        return false;
    }else if(n == 0){
        return false;
    }else if(n < 0){
        return false;
    }else{
        do{
            if (n % 4 == 0){
                n /= 4;
            }
        }while(n % 4 == 0);
    }
    if (n == 1){
        return true;
    }
    return false;
}