# include <bits/stdc++.h>
# define MAX_N 100000
# define MAX_HEIGHT 1000000000
using namespace std;

int main()
{
    /**
    int N;
    cin >> N; cout << endl;
    vector <pair<int,int>> adjlist[N];

    for(int i = 0; i < N; ++i){
        int x,y;
        cin >> x >> y;
        adjlist[i].push_back({x,y});
    }


    for(int k = 0; k < N; ++k){
        for(auto it : adjlist[k]){
            cout << it.first  + it.second << endl;
        }
    }
    */

    int n, m;
    vector<int> u(m), v(m);
  
    vector<pair<int, int>> graph[MAX_N];

    cout <<"Masukkan jumlah titik pendakian"; cin >> n;
    cout <<"Masukkan banyakk jalur pendakian yang aman : "; cin>> m;

    vector<int> height(n);

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if(temp < MAX_HEIGHT){
            height.push_back(temp);
        }
    }
    
   for (int i = 0; i < m; i++) {
        cin >> u[i] >> v[i];
        u[i]--; v[i]--;
        int weight = abs(height[u[i]] - height[v[i]]);
        graph[u[i]].push_back({v[i], weight});
        graph[v[i]].push_back({u[i], weight});
   
    }

    for(int i = 0; i < m; ++i){
        cout <<" Vertex " << i + 1 <<" is connected to : ";
        for(auto neighbor : graph[i]){
            cout << "(" << neighbor.first+1 <<", "<< neighbor.second+1 <<") ";
        }
        cout << endl;
    }










    return 0;


}