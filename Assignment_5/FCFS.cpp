#include<iostream>
using namespace std;

class FCFS{
    public:
    int id; //process id
    int at; //arrival time
    int bt; //burst time
    int ct;  //completion time
    int tat; //turnaround time
    int wt; //waiting time
};
int main(){
    cout<<"Enter number of processes"<<endl;
    int n;
    cin>>n;

    FCFS obj[n],temp;
    for(int i=0;i<n;i++){
        cout<<"Enter process id"<<" ";
        cin>>obj[i].id;
        cout<<"Enter arrival time"<<" ";
        cin>>obj[i].at;
        cout<<"Enter burst time"<<" ";
        cin>>obj[i].bt;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (obj[j].at > obj[j + 1].at) {
                temp=obj[j];
                obj[j]=obj[j+1];
                obj[j+1]=temp;
            }
        }
    }

    obj[0].ct = obj[0].at + obj[0].bt;
    obj[0].tat = obj[0].ct - obj[0].at;
    obj[0].wt=obj[0].tat-obj[0].bt;

    for(int i=1;i<n;i++){
        obj[i].ct=max(obj[i-1].ct,obj[i].at)+obj[i].bt;
        obj[i].tat=obj[i].ct-obj[i].at;
        obj[i].wt=obj[i].tat-obj[i].bt;
    }

    for(int i=0;i<n;i++){
        cout<<"The Completion time for Process "<<obj[i].id<<" is "<<obj[i].ct<<endl;
        cout<<"The Turnaround time for Process "<<obj[i].id<<" is "<<obj[i].tat<<endl;
        cout<<"The Waiting time for Process "<<obj[i].id<<" is "<<obj[i].wt<<endl;
    }

    cout<<obj[0].id<<" ";

    for(int i=1;i<n;i++){
        if(obj[i-1].ct<obj[i].at)
            cout<<"---";
        cout<<obj[i].id<<" ";
    }

    return 0;
}
