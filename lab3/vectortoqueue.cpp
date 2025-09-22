//Problem 4: Vector -> Queue
//Write a script that incorporates a Queue class that utilizes a vector. The Queue class can just be an int queue but it would be cool to use a template. The Queue should have the front, append, peek, and length methods. It doesn’t have to, but it should also throw exceptions whenever you call peek/front on an empty queue. Run some for loops over to append some values into your queue and then run another to peek and take them out.


#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;
template <typename T>
class Queue{
    private:
        vector<T> data;
    public:
        void append(T val){
            data.push_back(val);
        }
        T front(){
            if(data.empty()){
                throw runtime_error("Queue is empty");
            }
            T val = data[0];
            data.erase(data.begin());
            return val;
        }
        T peek(){
            if(data.empty()){
                throw runtime_error("Queue is empty");
            }
            return data[0];
        }
        int length(){
            return data.size();
        }
};

int main(){
    Queue<int> q;
    cout << "appending values to the queue:" << endl;
    for(int i = 0; i < 5; i++){
        cout << "appending: " << i << endl;
        q.append(i);
    }
    cout << "queue length: " << q.length() << endl;
    cout << "peeking at the front value: " << q.peek() << endl;
    cout << "removing values from the queue:" << endl;
    while(q.length() > 0){
        cout << "front: " << q.front() << ", queue length: " << q.length() << endl;
    }
    try{
        cout << "trying to peek at an empty queue:" << endl;
        q.peek();
    }
    catch(runtime_error &e){
        cout << e.what() << endl;
    }
    try{
        cout << "trying to get the front of an empty queue:" << endl;
        q.front();
    }
    catch(runtime_error &e){
        cout << e.what() << endl;
    }
    return 0;
}
