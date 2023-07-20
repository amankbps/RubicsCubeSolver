

#include <bits/stdc++.h>
#include "Model/RubiksCube3dArray.cpp"

using namespace std;
int main() {

    RubiksCube3dArray rubicks3d;
    rubicks3d.print();
    rubicks3d.l();
    rubicks3d.print();
    if(rubicks3d.isSolved())
        cout<<"SOLVED\n";
    else
        cout<<"NOT SOLVED\n";
    rubicks3d.lPrime();
    rubicks3d.print();
    if(rubicks3d.isSolved())
        cout<<"SOLVED\n";
    else
        cout<<"NOT SOLVED\n";

    return 0;
}
