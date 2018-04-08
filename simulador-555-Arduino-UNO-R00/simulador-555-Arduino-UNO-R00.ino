#define trigger_2 A0
#define control_5 A1
#define threshold_6 A2
#define output_3 2
#define reset_4 3
#define discharge_7 4

void setup() {
  
  pinMode(output_3, OUTPUT);
  pinMode(reset_4, INPUT);
  pinMode(discharge_7, OUTPUT);
  
}

void loop() {
 if (trigger_2 <= 341){ // IF trigger pin voltage is smaller than 33% of the supply voltage
  
  digitalWrite(output_3, HIGH); // Output pin goes HIGH
  digitalWrite(discharge_7, LOW); // Discharge pin goes OFF

  
 } else if ( threshold_6 >= 682){
  digitalWrite(output_3, LOW); // Output pin goes HIGH
  digitalWrite(discharge_7, HIGH); // Discharge pin goes OFF
 }

}
