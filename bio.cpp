#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
 char arr[30];
 cout<<"Please enter your name"<<endl;
 cin.getline(arr,30);
 char g;
 cout<<"Please enter you gender"<<endl;
 cout<<"Press M for Male and F for Female"<<endl;
 cin>>g;
 int age;
 cout<<"Please enter your age"<<endl;
 cin>>age;
 double ht; 
 cout<<"enter your height in foot.inch"<<endl;
 cin>>ht;
 double wt;
 cout<<"Please enter your weight in kg"<<endl;
 cin>>wt;
 int sbp,dbp;
 cout<<"Please enter your systolic blood pressure"<<endl;
 cin>>sbp;
 cout<<"Please enter your diastolic blood pressure"<<endl;
 cin>>dbp;
 int f;
 f=(int)ht;
 double i;
 i=ht-f;
 if((i*10)-(int)(i*10)==0.0)
  i=i*10;
 else
  i=i*100;
 double htm;
 htm=(0.3048*f)+(0.0254*i);
 double bmi;
 bmi=((wt)/(pow(htm,2)));
 cout<<"********************YOUR'S HEALTH PROFILE********************"<<endl;
 cout<<"NAME:-";
 char *a=arr;
 for(int b=0;*(b+a)!='\0';b++)
  cout<<*(b+a); 
 cout<<endl;
 cout<<"Age-"<<age<<endl;
 if(g=='M'||g=='m')
  cout<<"Gender-MALE"<<endl;
 else if(g=='F'||g=='f')
  cout<<"Gender-FEMALE"<<endl;
 else
  cout<<"Gender-TRANSGENDER"<<endl;
 cout<<"Height-"<<f<<" feet "<<i<<" inch="<<htm<<" metres"<<endl;
 cout<<"Weight="<<wt<<"kg"<<endl;
 cout<<"Blood Pressure="<<sbp<<"/"<<dbp<<" mm Hg"<<endl;
 cout<<"Body Mass Index(BMI)="<<bmi<<endl;
 cout<<"Interpretation of BMI"<<endl;
 if(bmi<20)
 {
  cout<<"According to your BMI,you are UNDERWEIGHT"<<endl;
  cout<<"You have a very low probability of suffering from atherosclerosis"<<endl;
 }
 else if(bmi<=24.9)
 {
  cout<<"According to your BMI,you are NORMAL"<<endl;
  cout<<"You have low probability of suffering from atherosclerosis"<<endl;
  cout<<"But you should remain careful about your diet"<<endl;
 }
 else if(bmi<=29.9)
 {
  cout<<"According to your BMI,you are OVERWEIGHT"<<endl;
  cout<<"You have probability of suffering from atherosclerosis"<<endl;
  cout<<"You need to control your diet and consult a doctor"<<endl;
 } 
 else
 {
  cout<<"According to your BMI,you are OBESE"<<endl;
  cout<<"You have a very high probabiity of suffering from atherosclerosis"<<endl;
  cout<<"You need to control your diet and consult a doctor immediately"<<endl;
 }
 cout<<endl;
 cout<<"Interpretation of Systolic Blood Pressure"<<endl;
 if(sbp<=120)
  cout<<"Systolic reading is below normal"<<endl;
 else if(sbp<=130)
  cout<<"Systolic reading is normal"<<endl;
 else if(sbp<=140)
  cout<<"Systolic reading is high normal"<<endl;
 else if(sbp<=160)
  cout<<"Systolic reading indicates hypertension stage 1"<<endl;
 else if(sbp<=180)
  cout<<"Systolic reading indicates hypertension stage 2 "<<endl;
 else
  cout<<"Systolic reading indicates hypertension stage 3 "<<endl;
 cout<<endl;
 cout<<"Interpretation of Diastolic Blood Pressure"<<endl;
 if(dbp<=80)
  cout<<"Diastolic reading is below normal"<<endl;
 else if(dbp<=85)
  cout<<"Diastolic reading is normal"<<endl;
 else if(dbp<=90)
  cout<<"Diastolic reading is high normal"<<endl;
 else if(dbp<=100)
  cout<<"Diastolic reading indicates hypertension stage 1"<<endl;
 else if(dbp<=110)
  cout<<"Diastolic reading indicates hypertension stage 2 "<<endl;
 else
  cout<<"Diastolic reading indicates hypertension stage 3 "<<endl;
 return 0;
}
