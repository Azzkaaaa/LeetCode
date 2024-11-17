int numberOfEmployeesWhoMetTarget(int* hours, int hoursSize, int target) {
    int i;
    int ctr;
    ctr = 0;
    for (i = 0; i < hoursSize; i++){
        if (hours[i] >= target){
            ctr++;
        }
    }
    return ctr;
}