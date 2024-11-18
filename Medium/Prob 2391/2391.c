int garbageCollection(char** garbage, int garbageSize, int* travel, int travelSize) {
    int totalMinutes = 0;

    char types[3] = {'G', 'P', 'M'};
    
    for (int t = 0; t < 3; t++) {
        int lastHouse = -1; 
        int garbageCount = 0; 
        
        for (int i = 0; i < garbageSize; i++) {
            for (int j = 0; garbage[i][j] != '\0'; j++) {
                if (garbage[i][j] == types[t]) {
                    garbageCount++;
                    lastHouse = i; 
                }
            }
        }
        
        totalMinutes += garbageCount;

        for (int i = 0; i < lastHouse; i++) {
            totalMinutes += travel[i];
        }
    }

    return totalMinutes;
}

