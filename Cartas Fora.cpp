#include <stdio.h>
#define MAX 100

class Deque{
	int data[MAX];
	int front;
	int rear;
	int size;
public:
	Deque(int size) 
    { 
        front = -1; 
        rear = 0;
				this -> size = size;  
    }
	void  push_front(int x); 
  void  push_rear(int x); 
  void  pop_front(); 
  void  pop_rear();  
  int  top(); 
  int  base(); 
};

void Deque::push_front(int x){
	if (front == -1){
		front = 0;
		rear = 0;
	}
	else if (front == 0)
		front = size - 1;
	else
		--front;
	data[front] = x;
}

void Deque::push_rear(int x){
	if (front == -1){
		front = 0;
		rear = 0;
	}
	else if (rear == size-1)
		rear = 0;
	else
		++rear;
	data[rear] = x;
}

void Deque::pop_front(){
	if (front == rear){
		front = -1;
		rear = -1; 
	}
	else{
		if (front == size -1) 
    	front = 0; 
    else 
    	++front;
	}
}

void Deque::pop_rear(){
  if (front == rear) { 
    front = -1; 
    rear = -1; 
  } 
  else if (rear == 0) 
    rear = size-1; 
  else
    rear = rear-1;
}

int Deque::top(){
	return data[front];
}

int Deque::base(){
	return data[rear];
}

int main(){
	int n = -1;
	int help;
	while(n != 0){
		scanf("%d",&n);
		if (n != 0){
			Deque D(n);
			for(int i = n; i > 0; i--)
				D.push_front(i);
			printf("Discarded cards: ");
			for(int j = 0; j < n-1; j++){
				if (j != n-2){
					printf("%d, ",D.top());
					D.pop_front();
					D.push_rear(D.top());
					D.pop_front();
				}
				else{
					printf("%d",D.top());
					D.pop_front();
					D.push_rear(D.top());
					D.pop_front();
				}
			}
			printf("\nRemaining card: %d\n",D.top());
		}
	}
}