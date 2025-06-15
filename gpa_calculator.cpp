#include<iostream>
using namespace std;
int main(){
  float g1,g2,g3;
  float c1,c2,c3;
cout<<"enter grade point for subject 1:";
cin>>g1;
cout<<"enter credit hours for subject 1:";
cin>>c1;
cout<<"enter grade point for subject 2:";
cin>>g2;
cout<<"enter credit hours for subject 2:";
cin>>c2;
cout<<"enter grade point for subject 3:";
cin>>g3;
cout<<"enter credit hours for subject 3:';
cin>>c3;
float totalpoints=(g1*c1)+(g2*c2)+(g3*c3);
float totalcredits=c1+c2+c3'
float gpa=totalpoints/totalcredits;
cout<<"\nyour GPA is:"<<gpa<<endl;
return 0;
}
