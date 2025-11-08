#include <iostream>
using namespace std;

void TOH(int n , char src , char temp , char dest){

    if (n == 0) {
        return;}

    // Step 1: Move n-1 disks from Source (src) to Auxiliary (temp), 
    // using Destination (dest) as temporary storage.
    TOH(n - 1, src, dest, temp);
    
    // Step 2: Move the nth disk from Source (src) to Destination (dest).
    // Added proper spacing and 'endl' for readability.
    cout << "Move disk " << n << " from " << src << " to " << dest << endl;

    // Step 3: Move n-1 disks from Auxiliary (temp) to Destination (dest), 
    // using Source (src) as temporary storage.
    TOH(n - 1, temp, src, dest);

}

int main() {
    int num_disks = 3;
    char source_peg = 'A';
    char temp_peg = 'B';
    char dest_peg = 'C';

    cout << "Tower of Hanoi solution for " << num_disks << " disks:" << endl;
    
    // Pass the defined character literals 'A', 'B', 'C'
    TOH(num_disks, source_peg, temp_peg, dest_peg);

    return 0;
}