#include<iostream>
using namespace std;

int main(){
	double a, b, c, d, e, f;
	cout<<"Please input your scores(turnin, close-book exam, open-book exam, midterm 1, midterm 2 and final exam): "<< endl;
	cin >> a >> b >> c >> d >> e >> f;
	if((a<0)||(a>100)){
		cout << "Input error!" << endl;
		return 0;
	}else if((b<0)||(b>100)){
		cout << "Input error!" << endl;
		return 0;
	}else if((c<0)||(c>100)){
		cout << "Input error!" << endl;
		return 0;
	}else if((d<-1)||(d>100)){
		cout << "Input error!" << endl;
		return 0;
	}else if((e<-1)||(e>100)){
		cout << "Input error!" << endl;
		return 0;
	}else if((f<-1)||(f>100)){
		cout << "Input error!" << endl;
		return 0;
	}

	if((d==-1)||(e==-1)||(f==-1)){
		cout << "Your term score is 0. Oops! See you next year(short by 60 point)"<< endl;
		return 0;
	}

	double score=a*0.1+b*0.1+c*0.05+d*0.25+e*0.25+f*0.25;
	if(score>=55){
		score+=5;
	}
	if(score>=100){
		score=100;
	}

	if(score>=90){
		cout << "Your term score is "<< score <<". Outstanding!"<< endl;
		return 0;
	}else if(score>=80){
		cout << "Your term score is "<< score <<". Excellent!"<< endl;
		return 0;
	}else if(score>60){
		cout << "Your term score is "<< score <<". Fair enough."<< endl;
		return 0;
	}else if(score==60){
		cout << "Your term score is "<< score <<". That was a close one!"<< endl;
		return 0;
	}else{
		cout << "Your term score is "<< score <<". Oops! See you next year(short by "<< 60-score << " points)"<<endl;
		return 0;
	}
}
		
