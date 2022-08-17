#include "hashing.hpp"

int hash_string(string s) {
    // implement hashing function here
    int sum =0;
    for(int i=0; i<s.length; i++){
        if(s[i]!= ' '){
            sum = sum + s[i];
        }
    }
    
    return sum%41;
    
}
