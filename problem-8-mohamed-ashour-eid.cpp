//Mohamed Ashour Eid 20170239  G4
//problem 9

#include <iostream>
#include <vector>

using namespace std;

vector<int> grade;

int main()
{
   int x;
   cout << "Enter your grade\n";
    for (int i=0; i<10; i++){
        cin >> x;
        if (x==-1)
            break;
        else
            grade.push_back(x);
    }

int sizeVec = grade.size();
while (grade.size()!=0){
    int  minm;
    minm=grade[0];
    for (int j=1; j<grade.size(); j++){
        if (minm>grade[j])
            minm=grade[j];
    }
    int temp=0;
    for (int h=0; h<grade.size(); h++){
        if (grade[h]==minm){
            temp++;
        }
        if (h==grade.size()-1){
            cout  << minm << ",s " << temp << endl;
            temp=0;
        }
    }
  for (int z=0; z<sizeVec; z++){
        int u=0;
    for (; u<grade.size(); u++){
        if (grade[u]==minm){
         grade.erase(grade.begin() + u);
         break;
        }
    }
  }
 }
 return 0;
}
