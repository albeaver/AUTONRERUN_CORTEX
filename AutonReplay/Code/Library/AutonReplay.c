//  AUTONREPLAY.C //
// BY ALEX BEAVER //

//////////////////////////////////////////////////////
//                                                  //
// Functions to be called in order to generate code //
//                                                  //
//////////////////////////////////////////////////////

// Variables
int previous [11] = {0,0,0,0,0,0,0,0,0,0,0}; //Previous motor value for each motor
bool ValuesChanged = false; // Test If Values Changed
int relativeTime = 0;
int AR_Motor_Plus_1;
string changes [11] = {"","","","","","","","","","",""};

void AR_BEGINSegment(){
	ValuesChanged = false;
}

// Prints the Motor Power to the Debug Stream. USE ONE PER MOTOR
void AR_GenerateMotorPower(int AR_Motor, int AR_Power){
	//string ToPrint = strcat("motor[ %d ",AR_Motor," ] = ",AR_Power,";");
	if ((previous[AR_Motor] != AR_Power) && (abs(previous[AR_Motor]-AR_Power) > 15)){
		if(ValuesChanged == false){
		relativeTime = relativeTime + 10;
		string RelativeTimeFormat = "wait1Msec(";
		string RelativeTimeString = relativeTime;
		strcat(RelativeTimeFormat, RelativeTimeString);
		strcat(RelativeTimeFormat,");");
		writeDebugStreamLine(RelativeTimeFormat);

	}
		string ToPrint = "motor[port";
		AR_Motor_Plus_1 = AR_Motor + 1; //All motors shifted off by one
		string AR_Motor_String = AR_Motor_Plus_1;
		strcat(ToPrint,AR_Motor_String);
		strcat(ToPrint,"] = ");
		string AR_Power_String = AR_Power;
		strcat(ToPrint, AR_Power_String);
		strcat(ToPrint,";");
		changes[AR_Motor] = ToPrint;
		previous[AR_Motor] = AR_Power;
		ValuesChanged = true;
	}

}

// RUN THIS AT THE END OF ONE LOOP OF YOUR DRIVER CONTROL RECORDER.
// This prevents your code and Cortex from being overloaded.
void AR_ENDSegment(){
	if(ValuesChanged){
		int i;
		for(i=1;i<=10;i++){
			if(changes[i]!=""){
				writeDebugStreamLine(changes[i]);

				changes[i]="";
				relativeTime=0;
			}

		}
	}
	wait1Msec(40);
	relativeTime = relativeTime + 40;
}
