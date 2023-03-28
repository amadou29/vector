/* Section 7
 * Challenge
 * 
 * 
 * Write a C++ program as follows:
 * 
 * Declare 2 emty vectors of integers named
 * vector1 and vector2, respectively.
 * 
 * Add 10 and 20 to vector1 dynamically using push_back
 * display the elements in vector1 using the at() method as well as its size using the size() method
 * 
 * Add 100 and 200 to vector2 dynamically using push_back
 * Display the elements in vector2 using the at() method as well as its size using the size() method
 * 
 * Declare an empty 2D vector called vector_2d
 * Remember, that a 2D vector is a vector of vector<int>
 * 
 * Add vector1 to vector_2d dynamically using push_back
 * Add vector2 to vector_2d dynamically using push_back
 * 
 * Display the elements in vector_2d using the at() method
 * 
 * Change vector1.at(0) to 1000
 * 
 * Display the elements in vector_2d again using the at() method
 * 
 * Display the elements in vector1
 * 
 * What did you expect? Did you get what you expected? What do you think happened?
 * 
 */



#include <iostream>
#include <vector>

using namespace std;

int main () {
    
    
    vector <int> vector1 {};
    vector <int> vector2 {};
    
    
    
    // Adding 10 to vector 1
    
    vector1.push_back(10);
    
    // Adding 20 to vector 1
    
    vector1.push_back(20);
    
    cout << "Here are the elements in Vector 1" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "\nVector 1 contains " << vector1.size() << " elements" << endl;
    
    // Vector 2
        
    // Adding 100 to vector 2
    
    vector2.push_back(100);
    
    // Adding 200 to vector 2
    
    vector2.push_back(200);
    
    cout << "\nHere are the elements in Vector 2" << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "\nVector 2 contains " << vector2.size() << " elements" << endl;
    
    
    // 2D Vector
    
    vector <vector<int>> vector_2d {};
    
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    cout << "\nHere are the elements of the 2D Vector: " << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
    
    vector1.at(0) = 1000;
    

    
    
    cout << "\nHere are the updated elements of the 2D Vector: " << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
    
    cout << "\nHere are the updated elements of Vector 1: " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;

    
    
    
    
    cout << endl;
    return 0;
}