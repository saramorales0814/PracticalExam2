void reverseSentence(char original[], char reversed[]) {
  int i,j=0,k=0,p=0;
        char arr[20][20];  //taking a temporaty 2D character array
        for(i=0;str1[i]!='\0';i++)
        {
                if(str1[i] != ' ')
                {
                        arr[k][j] = str1[i];  //storing all words in the temporary array
                        j++;
                }//end of if
                else
                {
                        arr[k][j] = '\0';   //assigning null at the end of each word
                        k++;
                        j=0;
                }//end of else
        } //end of for i
        arr[k][j]='\0';
        for(i=k;i>=0;i--)
        {
                for(j=0;arr[i][j]!='\0';j++)
                {
                        str2[p]=arr[i][j];   //copying the words in the second string in reverse order
                        p++;
                }//end of for j
                str2[p]=' ';
                p++;
        }//end of for i
        str2[p]='\0';
} //end of function
int main()
{
char str1[100],str2[100];
printf("\nEnter the String :> ");
scanf("%[^\n]",str1);  //reading the string
reverseSentence(str1,str2); //calling function
printf("\nThe result is :> %s\n",str2);   //printing result
return 0;
}
