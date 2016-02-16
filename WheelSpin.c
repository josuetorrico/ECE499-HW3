//Source: ROBOTIS Examples WheelMode
#define DXL_BUS_SERIAL1 1  //Dynamixel on Serial1(USART1)  <-OpenCM9.04
#define DXL_BUS_SERIAL2 2  //Dynamixel on Serial2(USART2)  <-LN101,BT210
#define DXL_BUS_SERIAL3 3  //Dynamixel on Serial3(USART3)  <-OpenCM 485EXP

#define ID_NUM 1

Dynamixel Dxl(DXL_BUS_SERIAL1);

void setup() {
  // Initialize the dynamixel bus:

  // Dynamixel 2.0 Baudrate -> 0: 9600, 1: 57600, 2: 115200, 3: 1Mbps 
  Dxl.begin(3);
  Dxl.wheelMode(ID_NUM); //wheelMode() is to use wheel mode
}

void loop() {
  Dxl.goalSpeed(ID_NUM, 400); //forward
  delay(5000);
  Dxl.goalSpeed(ID_NUM, 400 | 0x400); //reverse
  delay(5000); 
  Dxl.goalSpeed(ID_NUM, 0); //stop
  delay(2000);
}
