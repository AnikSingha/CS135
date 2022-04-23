class Board{
    int numRows, numCols;
    int *panel[numRows][numCols];
    int max = 0, target = 32;
    Board(){
        numRows = 3;
        numCols = 3;
        int *panel[numRows][numCols];
    }

    Board(int m){
        if (m >= 1){
            numRows = m;
            numCols = m;
        } else{
            numRows = 3;
            numCols = 3;
        }
        panel[numRows][numCols];
    }

    Board(int m, int n){
        if (m >= 1 && n >= 1){
            numRows = m;
            numCols = n;
        } else{
            numRows = 3;
            numCols = 3;
        }
        int panel[numRows][numCols];
    }
    
    ~Board(){
        delete[] panel;
    }

    void print(){

    }

};