class Solution {
public:
    bool checkGoodInteger(int n) {
        int digisum=0,sqsum=0;
        int n1;
        int r;
        n1=n;
        while(n1!=0){
            r=n1%10;
            digisum+=r;
            sqsum+=pow(r,2);
            n1=n1/10;
        }
        if(sqsum-digisum>=50)
            return true;
        else return false;
        
    }
};