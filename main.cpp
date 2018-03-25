#include <iostream>
//#include "world.h"
using namespace std;

int i;
int t;
int width = 15;
int height = 10;
char pl = '$';
int coord_x = 5;
int coord_y = 6;

void doDraw();
int main(){

    char move[]="";
    while(true){
        
        cin >> move;
        switch(move[0]){
            case 'a': coord_y--;break;
            case 'w': coord_x--;break;
            case 'd': coord_y++;break;
            case 's': coord_x++;break;
        }
        if(coord_y >=width-2){
            coord_y = width-2;
        }else if(coord_y <=0) coord_y = 1;

        if(coord_x >= height-2) coord_x = height-2;
        else if(coord_x <= 0) coord_x = 1;
        doDraw();
    }
    return 0;
}
void doDraw(){
    for(i=0; i < height; i++){
        for(t=0; t < width; t++){
            if(i==0 || i==height-1)
            cout << "#";
            else if(t == 0 || t == width-1)
                cout << "#";
            else if(t==coord_y && i==coord_x)cout << pl;
            else cout << " ";
        }

        cout << endl;
    }
    cout << "CX: "<< coord_x << endl;
    cout << "CY: " << coord_y << endl;
}
