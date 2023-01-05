// DFS
#include <iostream>
using namespace std;

int visited[7] = {0, 0, 0, 0, 0, 0, 0};

int a[7][7] = {
    {0,1,1,1,0,0,0},
    {0,0,1,1,0,1,0},
    {0,1,0,1,1,0,0},
    {1,1,1,0,0,0,1},
    {0,1,0,1,0,1,0},
    {0,1,0,1,0,0,0},
    {0,0,0,1,0,0,0},
};

void dfs(int s)
{   
    cout<<s<<"\t";
    visited[s] = 1;
    
    for(int j=0; j<7; j++)
    {
        if(a[s][j] == 1 && visited[j] == 0)
        {
            dfs(j);
        }
    }
}

int main() {
    dfs(2);

    return 0;
}
