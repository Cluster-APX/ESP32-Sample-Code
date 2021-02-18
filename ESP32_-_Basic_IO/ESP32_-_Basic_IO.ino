/*
 * อ่านค่า Analog จาก PIN 34, 39, และ 36
 * แสดงค่าทั้งหมดที่อ่านได้ผ่านทาง Serial Port
 */

#define IN_ANA_0  34 // กำหนด Input Port
#define IN_ANA_1  39 // กำหนด Input Port
#define IN_ANA_2  36 // กำหนด Input Port
#define IN_DIGI_0 32 // กำหนด Input Port


int DATA_ANA_0  = 0;  // ตัวแปรสำหรับเก็บค่า Analog ที่อ่านได้
int DATA_ANA_1  = 0;  // ตัวแปรสำหรับเก็บค่า Analog ที่อ่านได้
int DATA_ANA_2  = 0;  // ตัวแปรสำหรับเก็บค่า Analog ที่อ่านได้
int DATA_DIGI_0 = 0;  // ตัวแปรสำหรับเก็บค่า Digital ที่อ่านได้

void setup() 
{

  // ใช้งาน Serial Port
  Serial.begin(115200);

  // ตั้งค่า Port เป็น Input
  pinMode(IN_ANA_0, INPUT);  // Temperature Analog
  pinMode(IN_ANA_1, INPUT);  // Light Analog
  pinMode(IN_ANA_2, INPUT);  // Infrared Analog
  pinMode(IN_DIGI_0, INPUT);  // Infrared Digital

}

void loop()
{

  DATA_ANA_0  = analogRead(IN_ANA_0); // อ่านค่า Analog
  Serial.print(DATA_ANA_0); // ส่งค่า Analog ที่อ่านได้ไปยัง Serial Port
  Serial.print(" ");

  DATA_ANA_1  = analogRead(IN_ANA_1); // อ่านค่า Analog
  Serial.print(DATA_ANA_1); // ส่งค่า Analog ที่อ่านได้ไปยัง Serial Port
  Serial.print(" ");

  DATA_ANA_2  = analogRead(IN_ANA_2); // อ่านค่า Analog
  Serial.print(DATA_ANA_2); // ส่งค่า Analog ที่อ่านได้ไปยัง Serial Port
  Serial.print(" ");

  DATA_DIGI_0  = digitalRead(IN_DIGI_0); // อ่านค่า Digital
  Serial.print(DATA_DIGI_0); // ส่งค่า Digital ที่อ่านได้ไปยัง Serial Port

  Serial.println();

  delay(250);

}
