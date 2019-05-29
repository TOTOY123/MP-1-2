#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;

int main(){
	int num_of_students=50;
	string name[num_of_students];
	double q1[num_of_students], q2[num_of_students], q3[num_of_students], q4[num_of_students];
	double prelims[num_of_students], finals[num_of_students];
	double notebook[num_of_students];
	double s1[num_of_students], s2[num_of_students], s3[num_of_students], s4[num_of_students], s5[num_of_students], s6[num_of_students], s7[num_of_students], s8[num_of_students], s9[num_of_students], s10[num_of_students];
	double boardwork[num_of_students];
	double highest_board_work = 0;
	double final_grade[num_of_students];
	double transmutated_grade[num_of_students];
	
	
	for(int i=0; i<num_of_students; i++){
		// ENTER NAMES AND GRADES OF STUDENTS
		cout<<"Enter Student's name: "; cin>>name[i];
		cout<<"Enter grades: ";
		cin>>q1[i]>>q2[i]>>q3[i]>>q4[i];
		cin>>prelims[i]>>finals[i];
		cin>>notebook[i];
		cin>>s1[i]>>s2[i]>>s3[i]>>s4[i]>>s5[i]>>s6[i]>>s7[i]>>s8[i]>>s9[i]>>s10[i];
		cin>>boardwork[i];
		
		if(highest_board_work < boardwork[i]){
			highest_board_work = boardwork[i];
			// QUIZZES, PRELIMS, FINALS, NOTEBOOKS AND SEATWORKS GRADES
		}
		final_grade[i] += q1[i]/100*15;
		final_grade[i] += q2[i]/100*15;
		final_grade[i] += q3[i]/100*15;
		final_grade[i] += q4[i]/100*15;
		final_grade[i] += prelims[i]/100*20;
		final_grade[i] += finals[i]/100*20;
		final_grade[i] += notebook[i]/100*1;
		final_grade[i] += s1[i]/10*0.2;
		final_grade[i] += s2[i]/10*0.2;
		final_grade[i] += s3[i]/10*0.2;
		final_grade[i] += s4[i]/10*0.2;
		final_grade[i] += s5[i]/10*0.2;
		final_grade[i] += s6[i]/10*0.2;
		final_grade[i] += s7[i]/10*0.2;
		final_grade[i] += s8[i]/10*0.2;
		final_grade[i] += s9[i]/10*0.2;
		final_grade[i] += s10[i]/10*0.2;
	}
		// CLASS STANDINGS
	for(int i=0; i<num_of_students; i++){
		final_grade[i] +=  boardwork[i]/highest_board_work*2;
		// RANGE OF GRADES FOR TRANSMUTAITONS
		if(final_grade[i] >= 60.00 && final_grade[i] <= 64.44 ){
			transmutated_grade[i] = 3.00;
		}
		else if(final_grade[i] >= 64.45 && final_grade[i] <= 68.89 ){
			transmutated_grade[i] = 2.75;
		}
		else if(final_grade[i] >= 68.90 && final_grade[i] <= 73.33 ){
			transmutated_grade[i] = 2.50;
		}
		else if(final_grade[i] >= 73.34 && final_grade[i] <= 77.78 ){
			transmutated_grade[i] = 2.25; 
		}
		else if(final_grade[i] >= 77.79 && final_grade[i] <= 82.22 ){
			transmutated_grade[i] = 2.00;
		}
		else if(final_grade[i] >= 82.23 && final_grade[i] <= 86.67 ){
			transmutated_grade[i] = 1.75;
		}
		else if(final_grade[i] >= 86.68 && final_grade[i] <= 91.11 ){
			transmutated_grade[i] = 1.50;
		}
		else if(final_grade[i] >= 91.12 && final_grade[i] <= 96.56 ){
			transmutated_grade[i] = 1.25;
		}
		else if(final_grade[i] >= 95.57 ){
			transmutated_grade[i] = 1.00;
		}
		else{
			transmutated_grade[i] = 5.00;
		}
	}
	// FINAL GRADES AND TO SHOW IF THE STUDENT PASS OR FAILED
	cout<<endl;
	cout<<"Name"<<"\t\t\t"<<"Final Grade"<<"\t\t"<<"Transmutated"<<"\t\t"<<"Pass/Fail"<<endl;
	for(int i=0; i<num_of_students; i++){
		cout<<fixed<<setprecision(2)<<left;
		cout<<name[i]<<"\t\t\t"<<final_grade[i]<<"\t\t\t"<<transmutated_grade[i]<<"\t\t\t";
		if(transmutated_grade[i] <= 3){
			cout<<"Pass"<<endl;
		}else{
			cout<<"Fail"<<endl;
		}
	}
	
	// SORTING OF STUDENTS 
	for(int i=0; i<num_of_students-1; i++){
		for(int j= i+1; j<num_of_students; j++){
			if(final_grade[i] < final_grade[j]){
				string temp1 = name[i];
				name[i] = name[j];
				name[j] = temp1;
				
				double temp2 = final_grade[i];
				final_grade[i] = final_grade[j];
				final_grade[j] = temp2;
			}
		}
	}
	// TO SHOW THE TOP 1 TO 10 STUDENTS
	for(int i=0; i<10; i++){
		cout<<"Top "<<i+1<<" :"<<name[i]<<endl;
		
		
		
	
	}
}
// NAME OF STUDENTS AND THEIR GRADES
// UST01 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 3
// UST02 90 90 90 90 80 80 90 0 0 10 10 10 10 10 10 10 10 2
// UST03 90 90 90 90 80 80 90 0 10 10 10 10 10 10 10 10 10 3
// UST04 90 90 90 90 80 80 90 10 10 10 10 10 10 10 10 10 10 3
// UST05 90 90 90 90 80 80 100 10 10 10 10 10 10 10 10 10 10 3
// UST06 90 90 90 90 80 90 100 10 10 10 10 10 10 10 10 10 10 3
// UST07 90 90 90 90 90 90 100 10 10 10 10 10 10 10 10 10 10 3
// UST08 90 90 90 100 90 90 100 10 10 10 10 10 10 10 10 10 10 3
// UST09 90 90 100 100 90 90 100 10 10 10 10 10 10 10 10 10 10 3
// UST10 100 100 100 100 100 100 100 10 10 10 10 10 10 10 10 10 10 3
// UST11 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 3
// UST12 90 90 90 90 80 80 90 0 0 10 10 10 10 10 10 10 10 2
// UST13 90 90 90 90 80 80 90 0 10 10 10 10 10 10 10 10 10 3
// UST14 90 90 90 90 80 80 90 10 10 10 10 10 10 10 10 10 10 3
// UST15 90 90 90 90 80 80 90 10 10 10 10 10 10 10 10 10 10 3
// UST16 90 90 90 90 80 90 100 10 10 10 10 10 10 10 10 10 10 3
// UST17 90 90 90 90 90 90 100 10 10 10 10 10 10 10 10 10 10 3
// UST18 90 90 90 100 90 90 100 10 10 10 10 10 10 10 10 10 10 3
// UST19 90 90 100 100 90 90 100 10 10 10 10 10 10 10 10 10 10 3
// UST20 100 100 100 100 100 100 100 10 10 10 10 10 10 10 10 10 10 3
// UST21 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 3
// UST22 90 90 90 90 80 80 90 0 0 10 10 10 10 10 10 10 10 2
// UST23 90 90 90 90 80 80 90 0 10 10 10 10 10 10 10 10 10 3
// UST24 90 90 90 90 80 80 90 10 10 10 10 10 10 10 10 10 10 3
// UST25 90 90 90 90 80 80 100 10 10 10 10 10 10 10 10 10 10 3
// UST26 90 90 90 90 80 90 100 10 10 10 10 10 10 10 10 10 10 3
// UST27 90 90 90 90 90 90 100 10 10 10 10 10 10 10 10 10 10 3
// UST28 90 90 90 100 90 90 100 10 10 10 10 10 10 10 10 10 10 3
// UST29 90 90 100 100 90 90 100 10 10 10 10 10 10 10 10 10 10 3
// UST30 100 100 100 100 100 100 100 10 10 10 10 10 10 10 10 10 10 3
// UST31 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 3
// UST32 90 90 90 90 80 80 90 0 0 10 10 10 10 10 10 10 10 2
// UST33 90 90 90 90 80 80 90 0 10 10 10 10 10 10 10 10 10 3
// UST34 90 90 90 90 80 80 90 10 10 10 10 10 10 10 10 10 10 3
// UST35 90 90 90 90 80 80 100 10 10 10 10 10 10 10 10 10 10 3
// UST36 90 90 90 90 80 90 100 10 10 10 10 10 10 10 10 10 10 3
// UST37 90 90 90 90 90 90 100 10 10 10 10 10 10 10 10 10 10 3
// UST38 90 90 90 100 90 90 100 10 10 10 10 10 10 10 10 10 10 3
// UST39 90 90 100 100 90 90 100 10 10 10 10 10 10 10 10 10 10 3
// UST40 100 100 100 100 100 100 100 10 10 10 10 10 10 10 10 10 10 3
// UST41 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 3
// UST42 90 90 90 90 80 80 90 0 0 10 10 10 10 10 10 10 10 2
// UST43 90 90 90 90 80 80 90 0 10 10 10 10 10 10 10 10 10 3
// UST44 90 90 90 90 80 80 90 10 10 10 10 10 10 10 10 10 10 3
// UST45 90 90 90 90 80 80 100 10 10 10 10 10 10 10 10 10 10 3
// UST46 90 90 90 90 80 90 100 10 10 10 10 10 10 10 10 10 10 3
// UST47 90 90 90 90 90 90 100 10 10 10 10 10 10 10 10 10 10 3
// UST48 90 90 90 100 90 90 100 10 10 10 10 10 10 10 10 10 10 3
// UST49 90 90 100 100 90 90 100 10 10 10 10 10 10 10 10 10 10 3
// UST50 100 100 100 100 100 100 100 10 10 10 10 10 10 10 10 10 10 3

