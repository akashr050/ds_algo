#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <queue>

struct nodeT;

struct arcT{
int distance;
nodeT* start, *end;
};

struct nodeT{
	vector<arcT*> outgoing;
};	 

void DepthFirstSearch(nodeT *cur, set<nodeT *> &visited){
	if(visited.find(cur) == visited.end())	
		return;
	visited.insert(cur);
	else {
		for(int i = 0; i != cur->outgoing.size(); i++){
			DepthFirstSearch((cur->outgoing)[i]->end, visited); 
		}	
	}	
}	

void BreadthFirstTraversal(nodeT *start){
	queue<nodeT*> q;
	set<nodeT*> visited;
	q.push(start);
	
	while(!q.empty()){
		nodeT* cur = q.front();
		q.pop();
		if(visited.find(cur) != visited.end()){
			visited.insert(cur);
			for(int i = 0; i <cur->outgoing.size(); i++)
				q.push(cur->outgoing[i]->end);	
		}
	}		
}	