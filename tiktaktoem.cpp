#include<bits/stdc++.h>
using namespace std;

int main()
{
    start:
  cout<<"Two player offline game:"<<endl;
  cout<<"**TIK TAK TOE**"<<endl;
  cout<<endl<<"Please use 1-9 to mark your position."<<endl;
  cout<<endl<<"[START]"<<endl<<endl<<endl;
  cout<<"Player A's move now:"<<endl;
  int i, j, u,count=0;
  char a[3][3];
  for(i=0;i<=2;i++){
     for(j=0;j<=2;j++){
         a[i][j]='O';
         cout<<a[i][j];
     }
     cout<<endl;
  }
  move1:
  {
  cin>>u;
  if(u==1){
  i=0;
  j=0;
  if(a[i][j]=='O'){
    a[i][j]='A';
  }else{
    cout<<endl<<"Wrong move"<<endl;
    goto move1;
  }
  }
  else if(u==2){
  i=0;
  j=1;
  if(a[i][j]=='O'){
    a[i][j]='A';
  }else{
    cout<<endl<<"Wrong move"<<endl;
    goto move1;
  }
  }
  else if(u==3){
  i=0;
  j=2;
  if(a[i][j]=='O'){
    a[i][j]='A';
  }else{
    cout<<endl<<"Wrong move"<<endl;
    goto move1;
  }
  }
  else if(u==4){
  i=1;
  j=0;
  if(a[i][j]=='O'){
    a[i][j]='A';
  }else{
    cout<<endl<<"Wrong move"<<endl;
    goto move1;
  }
  }
  else if(u==5){
  i=1;
  j=1;
  if(a[i][j]=='O'){
    a[i][j]='A';
  }else{
    cout<<endl<<"Wrong move"<<endl;
    goto move1;
  }
  }
  else if(u==6){
  i=1;
  j=2;
  if(a[i][j]=='O'){
    a[i][j]='A';
  }else{
    cout<<endl<<"Wrong move"<<endl;
    goto move1;
  }
  }
  else if(u==7){
  i=2;
  j=0;
  if(a[i][j]=='O'){
    a[i][j]='A';
  }else{
    cout<<endl<<"Wrong move"<<endl;
    goto move1;
  }
  }
  else if(u==8){
  i=2;
  j=1;
  if(a[i][j]=='O'){
    a[i][j]='A';
  }else{
    cout<<endl<<"Wrong move"<<endl;
    goto move1;
  }
  }
  else if(u==9){
  i=2;
  j=2;
  if(a[i][j]=='O'){
    a[i][j]='A';
  }else{
    cout<<endl<<"Wrong move"<<endl;
    goto move1;
  }
  }
  else{
  cout<<endl<<"Wrong move"<<endl;
  }
  cout<<endl;
  for(i=0;i<=2;i++){
     for(j=0;j<=2;j++){
         cout<<a[i][j];
     }
     cout<<endl;
  }
  for(i=0;i<=2;i++){
     for(j=0;j<=2;j++){
         if(a[i][j]=='O'){
            count++;
         }
     }
  }
  if(count==0){
            cout<<endl<<"***Draw***!"<<endl<<"You two 're awesome!"<<endl;
            goto r;
         }
    count=0;
  for(i=0;i<=2;i++){
     for(j=0;j<=2;j++){
         if(a[i][j]=='A'){
            count++;
         }
         if(count==3){
            cout<<endl<<"Player ***A*** Wins!"<<endl<<"Congratulations";
            goto r;
         }
     }
     count=0;
  }
  for(j=0;j<=2;j++){
     for(i=0;i<=2;i++){
         if(a[i][j]=='A'){
            count++;
         }
         if(count==3){
            cout<<endl<<"Player ***A*** Wins!"<<endl<<"Congratulations";
            goto r;
         }
     }
     count=0;
  }
  if((a[0][0]=='A' && a[1][1]=='A' && a[2][2]=='A')||(a[0][2]=='A' && a[1][1]=='A' && a[2][0]=='A')){
            cout<<endl<<"Player ***A*** Wins!"<<endl<<"Congratulations";
            goto r;
    }
  cout<<endl<<"Player B's move now"<<endl;
  goto move2;
  }
  move2:
  {
  cin>>u;
  if(u==1){
  i=0;
  j=0;
  if(a[i][j]=='O'){
    a[i][j]='B';
  }else{
    cout<<endl<<"Wrong move"<<endl;
    goto move2;
  }
  }
  else if(u==2){
  i=0;
  j=1;
  if(a[i][j]=='O'){
    a[i][j]='B';
  }else{
    cout<<endl<<"Wrong move"<<endl;
    goto move2;
  }
  }
  else if(u==3){
  i=0;
  j=2;
  if(a[i][j]=='O'){
    a[i][j]='B';
  }else{
    cout<<endl<<"Wrong move"<<endl;
    goto move2;
  }
  }
  else if(u==4){
  i=1;
  j=0;
  if(a[i][j]=='O'){
    a[i][j]='B';
  }else{
    cout<<endl<<"Wrong move"<<endl;
    goto move2;
  }
  }
  else if(u==5){
  i=1;
  j=1;
  if(a[i][j]=='O'){
    a[i][j]='B';
  }else{
    cout<<endl<<"Wrong move"<<endl;
    goto move2;
  }
  }
  else if(u==6){
  i=1;
  j=2;
  if(a[i][j]=='O'){
    a[i][j]='B';
  }else{
    cout<<endl<<"Wrong move"<<endl;
    goto move2;
  }
  }
  else if(u==7){
  i=2;
  j=0;
  if(a[i][j]=='O'){
    a[i][j]='B';
  }else{
    cout<<endl<<"Wrong move"<<endl;
    goto move2;
  }
  }
  else if(u==8){
  i=2;
  j=1;
  if(a[i][j]=='O'){
    a[i][j]='B';
  }else{
    cout<<endl<<"Wrong move"<<endl;
    goto move2;
  }
  }
  else if(u==9){
  i=2;
  j=2;
  if(a[i][j]=='O'){
    a[i][j]='B';
  }else{
    cout<<endl<<"Wrong move"<<endl;
    goto move2;
  }
  }
  else{
  cout<<endl<<"Wrong move"<<endl;
  }
  cout<<endl;
  for(i=0;i<=2;i++){
     for(j=0;j<=2;j++){
         cout<<a[i][j];
     }
     cout<<endl;
  }
  for(i=0;i<=2;i++){
     for(j=0;j<=2;j++){
         if(a[i][j]=='O'){
            count++;
         }
     }
  }
  if(count==0){
            cout<<endl<<"***Draw***!"<<endl<<"You two 're awesome!"<<endl;
            goto r;
         }
    count=0;
  for(i=0;i<=2;i++){
     for(j=0;j<=2;j++){
         if(a[i][j]=='B'){
            count++;
         }
         if(count==3){
            cout<<endl<<"Player ***B*** Wins!"<<endl<<"Congratulations";
            goto r;
         }
     }
     count=0;
  }
  for(j=0;j<=2;j++){
     for(i=0;i<=2;i++){
         if(a[i][j]=='B'){
            count++;
         }
         if(count==3){
            cout<<endl<<"Player ***B*** Wins!"<<endl<<"Congratulations";
            goto r;
         }
     }
     count=0;
  }
    if((a[0][0]=='B' && a[1][1]=='B' && a[2][2]=='B')||(a[0][2]=='B' && a[1][1]=='B' && a[2][0]=='B')){
            cout<<endl<<"Player ***B*** Wins!"<<endl<<"Congratulations";
            goto r;
    }
  cout<<endl<<"Player A's move now"<<endl;

  goto move1;
  }
 r:
     cout<<endl<<endl<<endl<<"Wanna play another match?:"<<endl<<"Press '1' for play"<<endl<<"Otherwise press any key!"<<endl;
     int result;
     cin>>result;
     if(result==1){
        goto start;
     }

  return 0;
}
