/*Ques 804. Unique Morse Code Words.

Code:*/

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        string arr[26]= {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set <string> data;
        for(int i=0;i<words.size();i++)
        {
            string word=words[i];
            string alpha="";
            for(int j=0;j<word.length();j++)
            {
                alpha+=arr[word[j]-'a'];
            }
            data.insert(alpha);
        }
        return data.size();
    }
};