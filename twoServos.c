//Created by me with reference to ROBOTIS: jointmode example. Note: Change Motor ID was used to set the id's for the servos.
//See MotorID.c in same repository for reference to the the ROBOTIS example used to id servos
#define DXL_BUS_SERIAL1 1  //Dynamixel on Serial1(USART1)  <-OpenCM9.04
#define DXL_BUS_SERIAL2 2  //Dynamixel on Serial2(USART2)  <-LN101,BT210
#define DXL_BUS_SERIAL3 3  //Dynamixel on Serial3(USART3)  <-OpenCM 485EXP

#define MOTOR1 1
#define MOTOR2 2

Dynamixel Dxl(DXL_BUS_SERIAL1);

void setup() {
  // Initialize the dynamixel bus:
  
  // Dynamixel 2.0 Baudrate -> 0: 9600, 1: 57600, 2: 115200, 3: 1Mbps  
  Dxl.begin(3);  
  Dxl.jointMode(MOTOR1); //jointMode() is to use position mode
  Dxl.jointMode(MOTOR2);
}

void loop() {
  Dxl.goalPosition(MOTOR1, 155); //45
  Dxl.goalPosition(MOTOR2, 0);   //0
  delay(500);
  Dxl.goalPosition(MOTOR2, 620); //180
  delay(500);
  Dxl.goalPosition(MOTOR1, 0);   //90
  Dxl.goalPosition(MOTOR2, 0);   //0
  delay(500);
  Dxl.goalPosition(MOTOR2, 620); //180
  delay(500);
}
