#include <iostream>
#include <cmath>

using namespace std;

float x, y;

int main ()
{
	cin >> x >> y;
/*	if (y<1){				//y=1
			cout << "1";}
	else{
		cout << "0";}
	if ((y + x) < 0){		//y=-x
		cout << "1";}
	else{
		cout << "0";}
	if ((y*y + x*x - 1) < 0){		//x^2 + y^2 = 1
		cout << "1";}
	else{
		cout << "0";}
	if ((y*y + (x-1)*(x-1) - 1) < 0){		//y^2 + (x-1)^2 = 1
		cout << "1";}
	else{
		cout << "0";}		*/
		
		//zadacha J
		
/*	if ((x*x+y*y-4) > 0 && y-x<0 && x<2 && y>0){
		cout << "YES";}
	else{
		cout << "NO";}
	cin.get();				*/
	
		//zadacha H
		
/*	if (y-sin(x)<0 &&  y<0.5 && y>0 && x<7 && x>-2){
		cout << "YES";}
	else{
		cout << "NO";}		*/
		
		//zadacha L
	
/*	if((y-2+x*x)<0 && y-x>0 || (y-2+x*x)<0 && y-x<0 && y>0 ){
		cout << "YES";}
	else{
		cout << "NO";}		*/
		
		//zadacha M
		
/*	if ((y-x*x+2)>0 && y-x<0 || (y-x*x+2)>0 && y+x<0 ){
		cout << "YES";}
	else{
		cout << "NO";}		*/
		
		//zadacha N
		
/*	if ((x*x+y*y-1)<0 && y-x>0 || (x*x+y*y-1)<0 && y-x<0 && x<0){
		cout << "YES";}
	else{
		cout << "NO";}		*/
		
		//zadacha O
		
/*	if(((x*x+y*y-1)<0 && y+x>0) || ((x*x+y*y-1)<0 && y+x<0 && y-x<0)){
			cout << "YES";}
	else{
		cout << "NO";}		*/
		
		//zadacha P
		
	if((y-2*x*x>0 && y-1+x>0 && x<1) || (y-2*x*x<0 && x<1 && y-1+x>0 && x>0)){
		cout << "YES";}
	else{
		cout << "NO";}
	cin.get();	
}
