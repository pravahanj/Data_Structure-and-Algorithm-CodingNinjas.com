/*
Pattern Matching
Given a list of n words and a pattern p that we want to search. Check if the pattern p is present the given words or not. Return true if the pattern is 
present and false otherwise.

Input Format :
The first line of input contains an integer, that denotes the value of n.
The following line contains n space separated words.
The following line contains a string, that denotes the value of the pattern p.

Output Format :
The first and only line of output contains true if the pattern is present and false otherwise.

Constraints:
Time Limit: 1 sec

Sample Input 1 :
4
abc def ghi cba
de

Sample Output 2 :
true


Sample Input 2 :
4
abc def ghi hg
hi

Sample Output 2 :
true


Sample Input 3 :
4
abc def ghi hg
hif

Sample Output 3 :
false
*/

#include <string>
#include <vector>

class TrieNode {
   public:
    char data;
    TrieNode **children;
    bool isTerminal;

    TrieNode(char data) {
        this->data = data;
        children = new TrieNode *[26];
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie {
    TrieNode *root;

   public:
    int count;

    Trie() {
        this->count = 0;
        root = new TrieNode('\0');
    }

    bool insertWord(TrieNode *root, string word) {
        // Base case
        if (word.size() == 0) {
            if (!root->isTerminal) {
                root->isTerminal = true;
                return true;
            } else {
                return false;
            }
        }

        // Small calculation
        int index = word[0] - 'a';
        TrieNode *child;
        if (root->children[index] != NULL) {
            child = root->children[index];
        } else {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        // Recursive call
        return insertWord(child, word.substr(1));
    }

    void insertWord(string word) {
        if (insertWord(root, word)) {
            this->count++;
        }
    }

    bool patternMatching(vector<string> vect, string pattern) {
        // Write your code here
        for(int i = 0; i < vect.size(); i++) {
            while(vect[i].size() != 0) {
                insertWord(vect[i]);
                vect[i] = vect[i].substr(1); // Creating a Suffix Trie
            }
        }
        return search(pattern);
    }
    
    bool search(TrieNode *root, string word) {
        // Base Case
        if(word.size() == 0) {
            return true;
        }
        
        int index = word[0] - 'a';
        
        if(root -> children[index] != NULL) {
            return search(root -> children[index], word.substr(1));
        } else {
            return false;
        }
        
    }
    
    bool search(string word) {
        return search(root, word);
    }  
};
