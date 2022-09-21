#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, string> myDictionary;
    myDictionary.insert(pair<string, string>("banana", "die Banane"));
    myDictionary.insert(pair<string, string>("strawberry", "die Erdbeere"));
    myDictionary.insert(pair<string, string>("orange", "die Orange, die Apfelsine"));
    myDictionary.insert(pair<string, string>("apple", "der Apfel"));

    //Change value of key in map
    myDictionary["strawberry"] = "Die Erdbeere";

    cout << myDictionary.size() << endl;
    for(auto pair:myDictionary)
    {
        cout << pair.first << " - " << pair.second << endl;
    }
    return 0;
}