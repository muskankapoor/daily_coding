class Solution {
public:
   
    bool isHappy(int n) {
        map<int,int>mp;
        int flag=0;
        while(1){
         int sum=0;
         int temp=n;
        
            while(temp!=0){
             int k=temp%10;
             sum=sum+(k*k);
             temp=temp/10;
             }   
        
        n=sum;
        
        if(n==1){
            flag=1;
            break;
        }
        
        
        mp[n]++;
    }
    
    
    if(flag==1)
        return true;
    else
        return false;
}

    
    
};
