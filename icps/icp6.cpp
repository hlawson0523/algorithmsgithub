
#include <iostream>
#include <vector>
using namespace std;
//iterativegreedy

struct Job{

    int starttime;
    int finishtime;

    Job(int start, int finish){
        starttime = start;
        finishtime = finish;
    }
    void print(){
        cout << "Start time: " << starttime << ", Finish time: " << finishtime << endl;
    }
};

vector<Job> sort(vector<Job> jobs){
    for(int i = 0; i < jobs.size()-1; i++){
        for(int j = 0; j < jobs.size()-i-1; j++){
            if(jobs[j].finishtime > jobs[j+1].finishtime){
                Job temp = jobs[j];
                jobs[j] = jobs[j+1];
                jobs[j+1] = temp;
            }
        }
    }
    return jobs;


}
vector<Job> iterativeGreedy(vector<Job> jobs){
    
    vector<Job> selectedJobs;
    selectedJobs.push_back(jobs[0]);
    int k=0;
    for(int m = 1; m < jobs.size(); m++){
        if (jobs[m].starttime >= jobs[k].finishtime){
            selectedJobs.push_back(jobs[m]);
            k = m;
        }
    }
    return selectedJobs;

    

}
vector<Job> recursiveGreedy(vector<Job> jobs, int index, vector<Job> selectedJobs){
    
    int m = index + 1;
    while (m<jobs.size() && jobs[m].starttime < jobs[index].finishtime){
        m++;
    }
    if(m<jobs.size()){
        selectedJobs.push_back(jobs[m]);
        return recursiveGreedy(jobs, m, selectedJobs);
        
    }
    return selectedJobs;
   
}

int main(){
    Job job1 = Job(1,3);
    Job job2 = Job(2,5);
    Job job3 = Job(4,7);
    Job job4 = Job(1,8);
    Job job5 = Job(5,9);
    Job job6 = Job(8,10);
    Job job7 = Job(9,11);
    Job job8 = Job(11,14);
    Job job9 = Job(13,16);
    vector<Job> jobs = {job1, job2, job3, job4, job5, job6, job7, job8, job9};
    jobs = sort(jobs);
    vector<Job> selectedJobsIter = iterativeGreedy(jobs);
    cout << "Selected jobs using iterative greedy are: " << endl;
    for(int i = 0; i < selectedJobsIter.size(); i++){
        selectedJobsIter[i].print();
    }
    cout << endl;
    
    vector<Job> list;
    list.push_back(jobs[0]); 
    vector<Job> selectedJobs = recursiveGreedy(jobs, 0, list);
    
   
    cout << "Selected jobs are: " << endl;
    for(int i = 0; i < selectedJobs.size(); i++){
        selectedJobs[i].print();
    }
    return 0;

}



