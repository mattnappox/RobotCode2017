#pragma config(Motor,  motor1,          LWheel,        tmotorVexIQ, PIDControl, encoder)
#pragma config(Motor,  motor6,          RWheel,        tmotorVexIQ, PIDControl, reversed, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard      !!*//

task main()
{
	int threshold = 10;
	while(true)
	{
		if(getJoystickValue(ChD) > threshold || getJoystickValue(ChD) < -threshold)
		{
			setMotorSpeed(RWheel, getJoystickValue(ChD));
			setMotorSpeed(LWheel, getJoystickValue(ChD));
		}
		else
		{
			setMotorSpeed(LWheel, 0);
			setMotorSpeed(RWheel, 0);
		}
	}
}
