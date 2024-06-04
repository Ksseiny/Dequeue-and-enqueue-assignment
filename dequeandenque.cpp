#include <iostream>
#include <queue>
using namespace

int main(){
std::queue<int> myQueue;

cout<< "Enqueuing elements" << endl;
myQueue.push(500);
myQueue.push(600);
myQueue.push(700);
myQueue.push(800);
myQueue.push(900);

cout<< "Queue size" << myQueue.size() << endl;

cout<< "Dequeuing elements" << endl;
myQueue.pop();
myQueue.pop();
myQueue.pop();

cout<< "Queue size:" << myQueue.size() << endl;

return 0;
}


