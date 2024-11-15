char * defangIPaddr(char * address){
    int length = strlen(address);
    int newlen = length + 2 * 3;
    char* result = (char *)malloc((newlen + 1) * sizeof(char));
    if (result == NULL){
        return NULL;
    }
    int i;
    int j;
    j = 0;
    for (i = 0; i < length; i++){
        if (address[i] == '.'){
            result[j++] = '[';
            result[j++] = '.';
            result[j++] = ']';
        }else {
            result[j++] = address[i];
        }
    }
    result[j] = '\0';
    return result;
}