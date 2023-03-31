//motor 1 variables
int ena =21;
int in1 =26;
int in2 =27;
ggx
//motor 2 variables
int enb =14;
int in1 =32;
int in3 =33;

void forward(){
  digitalwrite(in1, HIGH)
  digitalwrite(in2, LOW)

  digitalwrite(in3, HIGH)
  digitalwrite(in4, LOW)

  analogwrite(ena, 150)
  analogwrite(enb, 150)
}

void reverse(){
  digitalwrite(in1, LOW)
  digitalwrite(in2, HIGH)

  digitalwrite(in3, LOW)
  digitalwrite(in4, HIGH)

  analogwrite(ena, 150)
  analogwrite(enb, 150)
    }
    
void setup() 
  // put your setup code here, to run once:
pinMode(ena, OUTPUT);
pinMode(in1, OUTPUT);
pinMode(in2, OUTPUT);
pinMode(enb, OUTPUT);
pinMode(in3, OUTPUT);
pinMode(in4, OUTPUT);
}

ledcAttachPin(ena, 2);
ledcAttachPin(enb, 2);
ledcSetup(0, 1000, 8);

void loop() {
  // put your main code here, to run repeatedly:
forward();

delay(5000);

reverse();

delay(5000);
}
