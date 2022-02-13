class Solution {
public:
    string intToRoman(int num) {
        string str_roman[]={"M","D","C","L","X","V","I"};
        int value[]={1000,500,100,50,10,5,1};
        string result="";
        for(auto int i=0;i<7;i++){
            while(num-value[i]>=0){
                result+=str_roman[i];
                num-=value[i];
            }
        }
        return result;
    }
};