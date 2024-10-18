#include<iostream>
using namespace std;

//complexity if safety algo is o(mxn^2)
int main(){
    int m,n;
    cout<<"Enter the number of processes"<<endl;
    cin>>m;
    cout<<"Enter number of resources"<<endl;
    cin>>n;

    int max[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Enter max Instances of resourse "<<j<<"needed for process "<<i<<endl;
            cin>>max[i][j];
        }
    }

    int alloc[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<"Enter alloacted Instances of resourse "<<j<<"for process "<<i<<endl;
                alloc[i][j];
        }
    }

    int need[n][m];
    need[n][m]=(max[n][m]-alloc[n][m]);

    int available[1][m];
    for(int i=0;i<m;i++){
        cout<<"Enter number of available instances of resourse "<<i<<endl;
        cin>>available[1][i];
    }

    //make a copy of available resources
    int work[1][m];
    for(int i=0;i<n;i++)
    work[i][m]=available[1][m];

    char Finish[1][n];
    for(int i=0;i<n;i++){
        Finish[1][i]='F';
    }

    int safe_sequence[n];

    // int flag=1;
    // while(flag==1){
    //     flag=0;
    //     for(int i=0;i<n;i++){
    //         if((need[i][m]<available[1][m] || need[i][m]==available[1][m]) && Finish[1][i]=='F'){ 
    //             safe_sequence[1][i]=i;
    //             available[1][m]+=alloc[i][m];
    //             Finish[1][i]='T';
    //         }
    //     }
    //     for(int i=0;i<n;i++){
    //         if(Finish[1][i]=='F')
    //         {
    //             flag=1;
    //             break;
    //         }
    //     }
    // }

    int count=0;
    while(count<n)
    {
        bool found=false; //find a process that is not finished and current resources se can be finished
        for(int i=0;i<n;i++)
        {
            if(Finish[1][i]=='F')//check if the process is already finished in if condition
            {
                int j;
                for(j=0;j<m;j++)
                {
                    if(need[i][j]>work[1][j])
                    break;
                }
                if(j==m) //all needs of  process i were satisfied
                {
                    for(int k=0;k<m;k++)
                    {
                        work[1][k]+=alloc[i][k];
                    }
                    safe_sequence[count++]=i;
                    Finish[1][i]='T';
                    found=true;
                }
            }
        }
    }


    return 0;
}
