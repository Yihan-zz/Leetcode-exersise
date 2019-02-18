#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
// Encodes a URL to a shortened URL.
map<string, int> hash;
map<int, string> hash_back;
string encode(string longUrl) {
    map<string, int>::iterator it = hash.find(longUrl);
    if(it != hash.end()){
        return "http://tinyurl.com/" + to_string(it->second);
    }
    else{
        hash[longUrl] = hash.size() + 1;
        hash_back[hash.size()+1] = longUrl;
        return "http://tinyurl.com/" + to_string(hash.size() + 1);
    }

}

// Decodes a shortened URL to its original URL.
string decode(string shortUrl) {
    auto pos = shortUrl.find_last_of('/');
    auto id = stoi(shortUrl.substr(pos+1));
    return hash_back[id];
}