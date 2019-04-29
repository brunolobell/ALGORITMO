#include <stdio.h>
#include <stack>
#include <queue>

using namespace std;

int main(){
	int n, x, y;

	while(scanf("%d", &n) != EOF){
		priority_queue<int> pq;
		queue<int> q;
		stack<int> s;
		bool _pq = true, _q = true, _s = true; 

		for (int i = 0; i < n; ++i){
			scanf("%d %d", &x, &y);
  		if(x == 1){
  			pq.push(y);
				q.push(y); 
  			s.push(y);
   		}
	 		else{
    		if(pq.top() != y) _pq = false;
    		if(q.front() != y) _q = false;
    		if(s.top() != y) _s = false;
    		pq.pop(); q.pop(); s.pop();
   		}
  	}
		if((_pq && _q && _s) || (!_pq && _q && _s) || (_pq && !_q && _s) || (_pq && _q && !_s)) printf("not sure\n");
		else if (_pq && !_q && !_s) printf("priority queue\n");
		else if (!_pq && _q && !_s) printf("queue\n");
		else if (!_pq && !_q && _s) printf("stack\n");
		else printf("impossible\n");
	}
 return 0;
}