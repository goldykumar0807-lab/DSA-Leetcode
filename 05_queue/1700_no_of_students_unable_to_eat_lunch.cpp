class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        for(int i=0;i<students.size();i++){
            q.push(students[i]);
        }
        int count=0;
        int i=0;
        while(q.size()>0 && count<q.size()){
            if(q.front()==sandwiches[i]){
                count=0;
                q.pop();
                i++;
            }
            else{
                q.push(q.front());
                q.pop();
                count++;
            }
        }
        return q.size();
        
    }
};
