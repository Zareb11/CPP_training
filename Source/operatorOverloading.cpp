#include <iostream>
#include <string>
#include<list>
using namespace std;

struct YouTubeChannel {
    string Name;
    int SubscribersCount;

    YouTubeChannel(string name, int subscribersCount) {
        Name = name;
        SubscribersCount = subscribersCount;
    }
    bool operator==(const YouTubeChannel&channel) const{
        return this->Name == channel.Name;
    }
};

struct MyCollection {
    list<YouTubeChannel>myChannels;
    void operator+=(YouTubeChannel& channel){
        this->myChannels.push_back(channel);
    }
    void operator-=(YouTubeChannel& channel){
        this->myChannels.remove(channel);
    }

};

//void operator<<(ostream& COUT, YouTubeChannel& ytChannel){
//    COUT << "Name: " << ytChannel.Name << endl;
//    COUT << "Subscribers: " << ytChannel.SubscribersCount << endl;
//
//}

ostream& operator<<(ostream& COUT, YouTubeChannel& ytChannel){
    COUT << "Name: " << ytChannel.Name << endl;
    COUT << "Subscribers: " << ytChannel.SubscribersCount << endl;
    return COUT;
}

ostream& operator<<(ostream& COUT, MyCollection& myCollection){
    for(YouTubeChannel ytChannel:myCollection.myChannels)
    {
        COUT << ytChannel << endl;
    }
    return COUT;
}


int main() {

    YouTubeChannel yt1 = YouTubeChannel("J-Code", 50000);
    YouTubeChannel yt2 = YouTubeChannel("Nurse Bailey", 80000);
    MyCollection myCollection;
    myCollection += yt1;
    myCollection += yt2;
    cout << myCollection;
    myCollection -= yt2;
    cout << "-----" << endl;
    cout << myCollection;
    //cout << yt1;
    //cout << yt1 << yt2;
    //operator<<(cout, yt1);
    return 0;
}