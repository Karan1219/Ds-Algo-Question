#include<iostream>

using namespace std;

int countWords(char str[]) 
{
  int state = 0;  
    int wc = 0; 
 int i=0;
 while (str[i]!='\0')  
    {  
        if (str[i]== ' ' || str[i]== '\n' || str[i]== '\t')  
            state = 0;  
  
        else if (state == 0)  
        {  
            state = 1;  
            ++wc;  
        }  
  
        ++i;  
    }  
  return wc;
}
int main()
{
    char str[100];
    gets(str);
    cout<<"No. of Words in this sentence are "<<countWords(str);
    return 0;
}