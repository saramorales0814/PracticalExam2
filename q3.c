void readTextWithSpaces(char text[]) {
gets(str)
  int len=strlen(str);
   int count=0;
   str[len]=' ';
   str[len+1]='\0';

    int index[100];
    int smallest_len=100000;
    char word[1000];

    //finding the shortest length
    for(int i=0;i<len+1;i++)
    {
        if(str[i]!=' ')
        {
            count++;
        }
        else
        {
            if(count<smallest_len)
            {
                smallest_len=count;


            }
            count=0;
        }

    }
    //finding starting index of words having the smallest length calculated before
    count=0;
    int x=0;
     for(int i=0;i<len+1;i++)
    {
        if(str[i]!=' ')
        {
            count++;
        }
        else
        {
            if(count==smallest_len)
            {

                index[x]=i-smallest_len;
                x++;

            }
            count=0;
        }

    }

       for(int i=0;i<x;i++)
        {
        int starting_index=index[i];
        for(int j=starting_index;j<starting_index+smallest_len;j++)
        {
            printf("%c",str[j]);
        }

        printf("\n");
        }
}
}

void printLongestWord(char text[]) {
int len=strlen(str);
   int count=0;
  str[len]=' ';
   str[len+1]='\0';


    int index[100];
    int longest_len=0;
    char word[1000];

    //finding the longest length
    for(int i=0;i<len+1;i++)
    {
        if(str[i]!=' ')
        {
            count++;
        }
        else
        {
            if(count>longest_len)
            {
                longest_len=count;


            }
            count=0;
        }
    }

}

void printShortestWord(char text[]) {
  count=0;
    int x=0;
    for(int i=0;i<len+1;i++)
    {
        if(str[i]!=' ')
        {
            count++;
        }
        else
        {
            if(count==longest_len)
            {

                index[x]=i-longest_len;
                x++;

            }
            count=0;
        }

    }

for(int i=0;i<x;i++)
        {
            int starting_index=index[i];
        for(int j=starting_index;j<starting_index+longest_len;j++)
        {
            printf("%c",str[j]);
        }
        str[len]='\0';
        printf("\n");
        }


}
void main()
{
    char text[1000];
    readTextWithSpaces(text);
    printf("Longest word(s) in the sentence\n");
    printLongestWord(text);
    printf("\n");
    printf("Shortest word(s) in the sentence\n");
    printShortestWord(text);

}

}
