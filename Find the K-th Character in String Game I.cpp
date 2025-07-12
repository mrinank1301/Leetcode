class Solution {
public:
    char kthCharacter(int k) {
        string str="a";
        while(str.length()<k){
       string temp="";
        for(char c:str){    
            if(c=='z') temp.push_back('a');
            temp.push_back(c+1);
        }
        str+=temp;
    }
    return str[k-1];
    }
};