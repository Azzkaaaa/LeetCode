bool isPowerOfTwo(int n) {
    if (n == 1){
        return true;
    }else if (n % 2 == 1){
        return false;
    }else if(n == 0){
        return false;
    }else if(n < 0){
        return false;
    }else{
        do{
            if (n % 2 != 1){
                n /= 2;
            }
        }while(n % 2 != 1);
    }
    if (n == 1){
        return true;
    }
    return false;
}