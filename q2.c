void readCharSquare(int size, char square[size][size]) {
  scanf("%c",&square[i][j]);

}

int isLatinSquare(int size, char square[size][size]){
  //local variable to store letter in a square cell
    char c;

    //check if each row contain distinct letters
    //no repetition of a letter in a row
    for(int i=0;i<size;i++)
    {
        //present[i] is 0 if that letter is not in a row
        //present[i] is 1 if that letter is present in a row
        int present[26]={0};
        //traverse the row
        for(int j=0;j<size;j++)
        {
            //'c' is the letter in the respective square cell
            c=square[i][j];
            
            if(present[c-'A']!=0)//'c' has already occured once, return 0
                return 0;
            else
                present[c-'A']=1;//first occurence of 'c', continue traversal
        }
    }
  return 1;
}
