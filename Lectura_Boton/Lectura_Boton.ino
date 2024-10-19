int boton = 2;

void setup() {
  // put your setup code here, to run once:
pinMode(boton, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
lectura = digitalRead(boton);
Serial.println("Estado del botón: " + String(lectura));
}
