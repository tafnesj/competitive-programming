#include <bits/stdc++.h>
using namespace std;
bool houses[10000][10000];
bool houses_2[10000][10000];

int main(){
  int visited_houses=1;
  string moves; cin >> moves;
  int visited_houses_2=1;
  
  // The first house
  houses[5000][5000]=true;
  houses_2[5000][5000]=true;
  // Positions
  int x=5000, y=5000;
  // Santa position
  int x_0=5000, y_0=5000;
  // Robo-Santa position
  int x_1=5000, y_1=5000;

  // Matrix of houses
  for(int i=0; i<moves.size(); i++){
    //Part 01
    if(moves[i]=='^'){
      if(houses[x][y-1]==false){
        houses[x][y-1]=true;
        visited_houses++;
      }
      y-=1;
    }else if(moves[i]=='v'){
      if(houses[x][y+1]==false){
        houses[x][y+1]=true;
        visited_houses++;
      }
      y+=1;
    }else if(moves[i]=='<'){
      if(houses[x-1][y]==false){
        houses[x-1][y]=true;
        visited_houses++;
      }
      x-=1;
    }else if(moves[i]=='>'){
      if(houses[x+1][y]==false){
        houses[x+1][y]=true;
        visited_houses++;
      }
      x+=1;
    }

    //Part 02
    if(moves[i]=='^'){
      if(i%2==0){
        if(houses_2[x_0][y_0-1]==false){
          houses_2[x_0][y_0-1]=true;
          visited_houses_2++;
        }
        y_0-=1;
      }else{
        if(houses_2[x_1][y_1-1]==false){
          houses_2[x_1][y_1-1]=true;
          visited_houses_2++;
        }
        y_1-=1;
      }    
    }else if(moves[i]=='v'){
      if(i%2==0){
        if(houses_2[x_0][y_0+1]==false){
          houses_2[x_0][y_0+1]=true;
          visited_houses_2++;
        }
        y_0+=1;
      }else{
        if(houses_2[x_1][y_1+1]==false){
          houses_2[x_1][y_1+1]=true;
          visited_houses_2++;
        }
        y_1+=1;
      }
    }else if(moves[i]=='<'){
      if(i%2==0){
        if(houses_2[x_0-1][y_0]==false){
          houses_2[x_0-1][y_0]=true;
          visited_houses_2++;
        }
        x_0-=1;
      }else{
        if(houses_2[x_1-1][y_1]==false){
          houses_2[x_1-1][y_1]=true;
          visited_houses_2++;
        }
        x_1-=1;
      }
    }else if(moves[i]=='>'){
      if(i%2==0){
        if(houses_2[x_0+1][y_0]==false){
          houses_2[x_0+1][y_0]=true;
          visited_houses_2++;
        }
        x_0+=1;
      }else{
        if(houses_2[x_1+1][y_1]==false){
          houses_2[x_1+1][y_1]=true;
          visited_houses_2++;
        }
        x_1+=1;
      }
    }
  }

  cout << "| Part 01 |" << " Delivers presents to: " <<  visited_houses << " " << "houses." << "\n"; 
  cout << "| Part 02 |" << " Delivers presents to: " <<  visited_houses_2 << " " << "houses." << "\n"; 
  return 0;
}