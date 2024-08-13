#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct Participant {
    string id;
    int sesi1;
    int sesi2;
    int sesi3;
   
    bool operator<(const Participant& other) const {
        if (sesi3 != other.sesi3)
            return sesi3 > other.sesi3;
        if (sesi2 != other.sesi2)
            return sesi2 > other.sesi2;
        return sesi1 > other.sesi1;
    }
};

int main() {
    int T; 
    cin >> T;
    cin.ignore();

    while (T--) {
        int N, M;
        cin >> N >> M;
        cin.ignore();

        string queryId;
        getline(cin, queryId);

        vector<Participant> participants;

        for (int i = 0; i < N; ++i) {
            Participant p;
            cin >> p.id >> p.sesi1 >> p.sesi2 >> p.sesi3;
            participants.push_back(p);
        }
        cin.ignore();
        sort(participants.begin(), participants.end());
        vector<string> topParticipants;
        for (int i = 0; i < M && i < participants.size(); ++i) {
            topParticipants.push_back(participants[i].id);
        }
        if (find(topParticipants.begin(), topParticipants.end(), queryId) != topParticipants.end()) {
            cout << "YA" << endl;
        } else {
            cout << "TIDAK" << endl;
        }
    }

    return 0;
}
