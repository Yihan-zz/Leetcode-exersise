#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>
#include <string>
#include <unordered_map>
using namespace std;
void dfs(vector<vector<int>>& rooms, int room_num ,vector<bool>& visited){
    vector<int> room = rooms[room_num];
    visited[room_num] = true;
    for(int i = 0; i < room.size(); i++)
    {
        if (visited[room[i]]==false) {
            dfs(rooms,room[i],visited);
        }
    }
    
    
}
bool canVisitAllRooms(vector<vector<int>>& rooms) {
    int N = rooms.size();
    vector<bool> visited(N,0);
    dfs(rooms, 0, visited);
    for(int i = 0; i < N; i++)
    {
        if (visited[i]==false) {
            return false;
        }
    }
    return true;
    
}