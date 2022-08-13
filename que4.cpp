#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class team{
    public:
  string name;
    int wins;
    int loss;
    int draws;
    float scored;
    float conceded;
    public:
    team(){ 
    }
    team(string name,int wins,int loss,int draws,float scored,float conceded){
        //cout<<"constructor called";
        this->name=name;
        this->wins=wins;
        this->loss=loss;
        this->draws=draws;
        this->scored=scored;
        this->conceded=conceded;
    }
    float totalPoints(){
        float totalPoint=0;
        int win=this->wins;
        int draw=this->draws;
        totalPoint=3*win+1*draw;
        return totalPoint;
    }
    float getGoalDiff(){
        return (scored-conceded);
    }
};
class winner{
   public:
    string name;
     float totalPoints;
    float difference;
    winner(string name,float totalPoints,float difference){
        this->name=name;
        this->totalPoints=totalPoints;
        this->difference=difference;
    }
};
class winnerCompare{
   public:
     bool operator()(winner A,winner B){
         if(A.totalPoints<B.totalPoints) return A.totalPoints<B.totalPoints;
         return A.difference<B.difference;
     }
};
int main() {
   // n be number of teams
    int n;
    cin>>n;
    vector<team> v(n);
    priority_queue<winner,vector<winner>,winnerCompare> pq;
    for(int i=0;i<n;i++){
          string name;
           int wins,loss,draws;
           float scored,conceded;
            cin>>name>>wins>>loss>>draws>>scored>>conceded;
           v[i]=team(name,wins,loss,draws,scored,conceded);
             float tp=v[i].totalPoints();
             float d=v[i].getGoalDiff();
              cout<<tp<<" "<<d<<endl;
              pq.push({name,tp,d});
    }

    auto ans=pq.top();
    cout<<ans.name<<"->    "<<ans.totalPoints;
}