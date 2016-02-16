//source: ROBOTIS: Examples - Dynamixel ID Change.
//Note: this example aided the implementation of twoServos.c which I developed
 created 22 May 2014
 by ROBOTIS CO,.LTD.*/
 /* Serial device defines for dxl bus */
#define DXL_BUS_SERIAL1 1  //Dynamixel on Serial1(USART1)  <-OpenCM9.04
#define DXL_BUS_SERIAL2 2  //Dynamixel on Serial2(USART2)  <-LN101,BT210
#define DXL_BUS_SERIAL3 3  //Dynamixel on Serial3(USART3)  <-OpenCM 485EXP
/* Dynamixel ID defines */
#define NEW_ID 2
 
Dynamixel Dxl(DXL_BUS_SERIAL1); 
 
void setup() {
  // Initialize the dynamixel bus:
  // Dynamixel 2.0 Baudrate -> 0: 9600, 1: 57600, 2: 115200, 3: 1Mbps  
  Dxl.begin(3);  
/*************** CAUTION ***********************
 * All dynamixels in bus will be changed to ID 2 by using broadcast ID(0xFE)
 * Please check if there is only one dynamixel that you want to change ID
 ************************************************/
  Dxl.setID(BROADCAST_ID, NEW_ID);  //Dynamixel_Id_Change 1 to 2
  Dxl.jointMode(NEW_ID); //jointMode() is to use position mode  
}
 
void loop() {
  // Wait for 1 second (1000 milliseconds)
  delay(1000);              
}
