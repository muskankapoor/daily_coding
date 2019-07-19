int maximumToys(vector<int> a, int k) {
    
    sort (a.begin(), a.end());
    int sum=0;
    int i;
    for (i=0; i<a.size(); i++)
    {
        if (sum+a[i]>k)return i;
        sum=sum+a[i];
    }
    return i;
}
