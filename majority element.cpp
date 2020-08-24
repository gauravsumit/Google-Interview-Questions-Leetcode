int Solution::majorityElement(const vector<int> &A) {
    
    int counter=0;
    int element=-1;
    for(int i=0;i<A.size();i++)
    {
        if(counter==0)
        {
            element=A[i];
            counter=1;
        }
        else if(element==A[i])
        {
            counter++;
        }
        else
        {
            counter--;
        }
    }
    return element;
}
